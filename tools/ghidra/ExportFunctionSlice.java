// @category Sonos
// Export selected functions from the already analyzed native DLL as JSON Lines.
import com.google.gson.Gson;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

public class ExportFunctionSlice extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            throw new IllegalArgumentException("Usage: output.jsonl address [address ...]");
        }
        Gson gson = new Gson();
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        try (PrintWriter out = new PrintWriter(new FileWriter(args[0]))) {
            for (int i = 1; i < args.length; i++) {
                monitor.checkCancelled();
                Address address = toAddr(args[i]);
                Function function = currentProgram.getFunctionManager().getFunctionAt(address);
                Map<String, Object> record = new LinkedHashMap<>();
                record.put("requested_address", args[i]);
                if (function == null) {
                    record.put("error", "No function starts at this address");
                    out.println(gson.toJson(record));
                    continue;
                }
                record.put("name", function.getName());
                record.put("entry", function.getEntryPoint().toString());
                record.put("signature", function.getSignature().getPrototypeString());
                record.put("body_bytes", function.getBody().getNumAddresses());
                List<String> callees = new ArrayList<>();
                for (Function called : function.getCalledFunctions(monitor)) {
                    callees.add(called.getEntryPoint() + " " + called.getName());
                }
                record.put("callees", callees);
                List<String> callers = new ArrayList<>();
                for (Function caller : function.getCallingFunctions(monitor)) {
                    callers.add(caller.getEntryPoint() + " " + caller.getName());
                }
                record.put("callers", callers);
                DecompileResults result = decompiler.decompileFunction(function, 120, monitor);
                if (result.decompileCompleted() && result.getDecompiledFunction() != null) {
                    record.put("decompiled_c", result.getDecompiledFunction().getC());
                } else {
                    record.put("error", result.getErrorMessage());
                }
                out.println(gson.toJson(record));
            }
        } finally {
            decompiler.dispose();
        }
    }
}
