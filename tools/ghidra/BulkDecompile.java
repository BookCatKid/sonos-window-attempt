// @category Sonos
// Export a resumable range of analyzed functions as JSON Lines pseudocode.
import com.google.gson.Gson;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.LinkedHashMap;
import java.util.Map;

public class BulkDecompile extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 6) {
            throw new IllegalArgumentException(
                "Usage: output.jsonl start count minimum_body_bytes maximum_body_bytes include_thunks");
        }
        int start = Integer.parseInt(args[1]);
        int count = Integer.parseInt(args[2]);
        int minimumSize = Integer.parseInt(args[3]);
        int maximumSize = Integer.parseInt(args[4]);
        boolean includeThunks = Boolean.parseBoolean(args[5]);
        if (start < 0 || count < 1 || minimumSize < 0 ||
            (maximumSize != 0 && maximumSize <= minimumSize)) {
            throw new IllegalArgumentException("Invalid range or minimum size");
        }
        Gson gson = new Gson();
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        int eligible = 0;
        int written = 0;
        int successes = 0;
        long successfulBytes = 0;
        try (PrintWriter out = new PrintWriter(new FileWriter(args[0]))) {
            FunctionIterator iterator = currentProgram.getFunctionManager().getFunctions(true);
            while (iterator.hasNext() && written < count) {
                monitor.checkCancelled();
                Function function = iterator.next();
                long size = function.getBody().getNumAddresses();
                if (size < minimumSize || (maximumSize != 0 && size >= maximumSize) ||
                    (!includeThunks && function.isThunk())) continue;
                if (eligible++ < start) continue;
                Map<String, Object> record = new LinkedHashMap<>();
                record.put("entry", function.getEntryPoint().toString());
                record.put("name", function.getName());
                record.put("body_bytes", size);
                record.put("thunk", function.isThunk());
                record.put("signature", function.getSignature().getPrototypeString());
                try {
                    int timeoutSeconds = size > 1024 ? 60 : 15;
                    DecompileResults result = decompiler.decompileFunction(function, timeoutSeconds, monitor);
                    if (result.decompileCompleted() && result.getDecompiledFunction() != null) {
                        record.put("decompiled_c", result.getDecompiledFunction().getC());
                        successes++;
                        successfulBytes += size;
                    } else {
                        record.put("error", result.getErrorMessage());
                    }
                } catch (Exception exception) {
                    record.put("error", exception.toString());
                }
                out.println(gson.toJson(record));
                if (++written % 100 == 0) {
                    out.flush();
                    println("written=" + written + " successes=" + successes +
                            " successful_body_bytes=" + successfulBytes);
                }
            }
        } finally {
            decompiler.dispose();
        }
        println("completed start=" + start + " written=" + written +
                " successes=" + successes + " successful_body_bytes=" + successfulBytes);
    }
}
