// @category Sonos
// Define and decompile missing call destinations in an isolated project copy.
import com.google.gson.Gson;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.mem.MemoryBlock;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

public class RecoverThunkDestinations extends GhidraScript {
    private static final String RECOVERY_COMMENT =
        "Recovered from a missing 5-byte E9 call destination by this Ghidra pass.";

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 5) {
            throw new IllegalArgumentException(
                "Usage: addresses.txt stats.tsv pseudocode.jsonl start_index max_functions (0=all)");
        }
        int startIndex = Integer.parseInt(args[3]);
        int maxFunctions = Integer.parseInt(args[4]);
        if (startIndex < 0 || maxFunctions < 0) {
            throw new IllegalArgumentException("start_index and max_functions must be >= 0");
        }

        List<String> addresses = new ArrayList<>();
        try (BufferedReader input = new BufferedReader(new FileReader(args[0]))) {
            String line;
            while ((line = input.readLine()) != null) {
                line = line.trim();
                if (!line.isEmpty() && !line.startsWith("#")) addresses.add(line);
            }
        }
        if (startIndex > addresses.size()) {
            throw new IllegalArgumentException("start_index exceeds address count");
        }
        int requested = Math.min(addresses.size() - startIndex,
                                 maxFunctions == 0 ? Integer.MAX_VALUE : maxFunctions);
        monitor.initialize(requested);
        FunctionManager functions = currentProgram.getFunctionManager();
        Gson gson = new Gson();
        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(false);
        decompiler.openProgram(currentProgram);

        long newFunctionCount = 0;
        long newBodyBytes = 0;
        long previouslyRecoveredCount = 0;
        long decompileSuccesses = 0;
        long decompiledBodyBytes = 0;
        try (PrintWriter stats = new PrintWriter(new FileWriter(args[1]));
             PrintWriter output = new PrintWriter(new FileWriter(args[2]))) {
            stats.println("target\tstatus\tfunction_entry\tname\tbody_bytes\tdecompiled");
            for (int processed = 0; processed < requested; processed++) {
                monitor.checkCancelled();
                int index = startIndex + processed;
                String targetText = addresses.get(index);
                Address target;
                try {
                    target = toAddr(targetText);
                } catch (Exception invalidAddress) {
                    writeStatus(stats, targetText, "INVALID_ADDRESS", null, 0, false);
                    monitor.incrementProgress(1);
                    continue;
                }
                monitor.setMessage("Recovering thunk destination " + targetText);
                Map<String, Object> record = new LinkedHashMap<>();
                record.put("target", targetText);
                String status = "";
                Function function = functions.getFunctionAt(target);
                if (function != null) {
                    String comment = function.getComment();
                    if (comment != null && comment.startsWith(RECOVERY_COMMENT)) {
                        status = "RECOVERED_PREVIOUSLY";
                        previouslyRecoveredCount++;
                    } else {
                        status = "ALREADY_FUNCTION";
                    }
                } else {
                    Function containing = functions.getFunctionContaining(target);
                    if (containing != null) {
                        status = "INSIDE_EXISTING_FUNCTION";
                        record.put("containing_entry", containing.getEntryPoint().toString());
                        record.put("containing_name", containing.getName());
                    } else {
                        MemoryBlock block = currentProgram.getMemory().getBlock(target);
                        if (block == null || !block.isExecute()) {
                            status = "NOT_EXECUTABLE_MEMORY";
                        } else {
                            if (currentProgram.getListing().getInstructionAt(target) == null) {
                                try {
                                    disassemble(target);
                                } catch (Exception disassemblyFailure) {
                                    record.put("error", disassemblyFailure.toString());
                                }
                            }
                            if (currentProgram.getListing().getInstructionAt(target) == null) {
                                status = "NO_INSTRUCTION";
                            } else {
                                try {
                                    String name = "FUN_" + String.format("%08x", target.getOffset());
                                    function = createFunction(target, name);
                                    if (function == null) function = functions.getFunctionAt(target);
                                    if (function == null) {
                                        status = "CREATE_FUNCTION_FAILED";
                                    } else {
                                        status = "CREATED";
                                        function.setComment(RECOVERY_COMMENT);
                                        newFunctionCount++;
                                        long bodyBytes = function.getBody().getNumAddresses();
                                        newBodyBytes += bodyBytes;
                                    }
                                } catch (Exception createFailure) {
                                    status = "CREATE_FUNCTION_FAILED";
                                    record.put("error", createFailure.toString());
                                }
                            }
                        }
                    }
                }
                if (function != null &&
                    ("CREATED".equals(status) || "RECOVERED_PREVIOUSLY".equals(status))) {
                    long bodyBytes = function.getBody().getNumAddresses();
                    record.put("entry", function.getEntryPoint().toString());
                    record.put("name", function.getName());
                    record.put("body_bytes", bodyBytes);
                    try {
                        DecompileResults result = decompiler.decompileFunction(
                            function, bodyBytes > 1024 ? 60 : 20, monitor);
                        if (result.decompileCompleted() && result.getDecompiledFunction() != null) {
                            record.put("decompiled_c", result.getDecompiledFunction().getC());
                            record.put("decompiled", true);
                            decompileSuccesses++;
                            decompiledBodyBytes += bodyBytes;
                        } else {
                            record.put("error", result.getErrorMessage());
                            record.put("decompiled", false);
                        }
                    } catch (Exception decompileFailure) {
                        record.put("error", decompileFailure.toString());
                        record.put("decompiled", false);
                    }
                }
                record.put("status", status);
                if (function != null) {
                    record.put("entry", function.getEntryPoint().toString());
                    record.put("name", function.getName());
                    record.put("body_bytes", function.getBody().getNumAddresses());
                }
                writeStatus(stats, targetText, status, function,
                            function == null ? 0 : function.getBody().getNumAddresses(),
                            Boolean.TRUE.equals(record.get("decompiled")));
                output.println(gson.toJson(record));
                if ((processed + 1) % 100 == 0) {
                    stats.flush();
                    output.flush();
                    println("processed=" + (processed + 1) + "/" + requested +
                            " created=" + newFunctionCount + " body_bytes=" + newBodyBytes +
                            " recovered_before_run=" + previouslyRecoveredCount +
                            " decompiled=" + decompileSuccesses);
                }
                monitor.incrementProgress(1);
            }
        } finally {
            decompiler.dispose();
        }
        println("requested=" + requested + " created=" + newFunctionCount +
                " created_body_bytes=" + newBodyBytes +
                " recovered_before_run=" + previouslyRecoveredCount +
                " decompiled=" + decompileSuccesses +
                " decompiled_body_bytes=" + decompiledBodyBytes);
    }

    private void writeStatus(PrintWriter out, String target, String status,
                             Function function, long bodyBytes, boolean decompiled) {
        String entry = function == null ? "" : function.getEntryPoint().toString();
        String name = function == null ? "" : function.getName();
        out.printf("%s\t%s\t%s\t%s\t%d\t%b%n",
                   target, status, entry, name, bodyBytes, decompiled);
    }
}
