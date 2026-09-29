// @category Sonos
// Parallel, resumable export of Ghidra C-like pseudocode from the saved DLL.
import com.google.gson.Gson;
import generic.concurrent.GThreadPool;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.decompiler.parallel.DecompilerCallback;
import ghidra.app.decompiler.parallel.ParallelDecompiler;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.util.task.TaskMonitor;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.atomic.AtomicLong;
import java.util.function.Consumer;

public class ParallelBulkDecompile extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 7) {
            throw new IllegalArgumentException(
                "Usage: output.jsonl start count minimum_size maximum_size include_thunks workers");
        }
        int start = Integer.parseInt(args[1]);
        int count = Integer.parseInt(args[2]);
        int minimumSize = Integer.parseInt(args[3]);
        int maximumSize = Integer.parseInt(args[4]);
        boolean includeThunks = Boolean.parseBoolean(args[5]);
        int workers = Integer.parseInt(args[6]);
        if (start < 0 || count < 1 || minimumSize < 0 || workers < 1 ||
            (maximumSize != 0 && maximumSize <= minimumSize)) {
            throw new IllegalArgumentException("Invalid range, size filter, or worker count");
        }

        List<Function> selected = new ArrayList<>(count);
        FunctionIterator iterator = currentProgram.getFunctionManager().getFunctions(true);
        int eligible = 0;
        while (iterator.hasNext() && selected.size() < count) {
            monitor.checkCancelled();
            Function function = iterator.next();
            long size = function.getBody().getNumAddresses();
            if (size < minimumSize || (maximumSize != 0 && size >= maximumSize) ||
                (!includeThunks && function.isThunk())) continue;
            if (eligible++ < start) continue;
            selected.add(function);
        }

        GThreadPool.getSharedThreadPool("Parallel Decompiler").setMaxThreadCount(workers);
        Gson gson = new Gson();
        AtomicInteger written = new AtomicInteger();
        AtomicInteger successes = new AtomicInteger();
        AtomicLong successfulBytes = new AtomicLong();
        DecompilerCallback<Map<String, Object>> callback =
            new DecompilerCallback<>(currentProgram, (DecompInterface decompiler) -> {
                decompiler.toggleCCode(true);
                decompiler.toggleSyntaxTree(false);
                decompiler.setSimplificationStyle("decompile");
            }) {
                @Override
                public Map<String, Object> process(DecompileResults result, TaskMonitor taskMonitor) {
                    Function function = result.getFunction();
                    Map<String, Object> record = new LinkedHashMap<>();
                    record.put("entry", function.getEntryPoint().toString());
                    record.put("name", function.getName());
                    record.put("body_bytes", function.getBody().getNumAddresses());
                    record.put("thunk", function.isThunk());
                    record.put("signature", function.getSignature().getPrototypeString());
                    if (result.decompileCompleted() && result.getDecompiledFunction() != null) {
                        record.put("decompiled_c", result.getDecompiledFunction().getC());
                    } else {
                        record.put("error", result.getErrorMessage());
                    }
                    return record;
                }
            };
        callback.setTimeout(60);
        try (PrintWriter out = new PrintWriter(new FileWriter(args[0]))) {
            Consumer<Map<String, Object>> consumer = record -> {
                synchronized (out) {
                    out.println(gson.toJson(record));
                    int done = written.incrementAndGet();
                    if (record.containsKey("decompiled_c")) {
                        successes.incrementAndGet();
                        successfulBytes.addAndGet((Long) record.get("body_bytes"));
                    }
                    if (done % 100 == 0) {
                        out.flush();
                        println("written=" + done + " successes=" + successes.get() +
                                " successful_body_bytes=" + successfulBytes.get());
                    }
                }
            };
            ParallelDecompiler.decompileFunctions(
                callback, currentProgram, selected.iterator(), consumer, monitor);
        } finally {
            callback.dispose();
        }
        println("completed start=" + start + " written=" + written.get() +
                " successes=" + successes.get() +
                " successful_body_bytes=" + successfulBytes.get());
    }
}
