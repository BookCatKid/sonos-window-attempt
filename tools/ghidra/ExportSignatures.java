// @category Sonos
// Export analyzed function prototypes and conventions for a named namespace.
import com.google.gson.Gson;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Parameter;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

public class ExportSignatures extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 2) {
            throw new IllegalArgumentException("Usage: output.jsonl namespace_or_asterisk");
        }
        Gson gson = new Gson();
        int written = 0;
        try (PrintWriter out = new PrintWriter(new FileWriter(args[0]))) {
            FunctionIterator iterator = currentProgram.getFunctionManager().getFunctions(true);
            while (iterator.hasNext()) {
                monitor.checkCancelled();
                Function function = iterator.next();
                String namespace = function.getParentNamespace().getName();
                if (!args[1].equals("*") && !namespace.equals(args[1])) continue;
                Map<String, Object> record = new LinkedHashMap<>();
                record.put("entry", function.getEntryPoint().toString());
                record.put("namespace", namespace);
                record.put("name", function.getName());
                record.put("calling_convention", function.getCallingConventionName());
                record.put("return_type", function.getReturnType().getName());
                record.put("signature", function.getSignature().getPrototypeString());
                List<Map<String, String>> parameters = new ArrayList<>();
                for (Parameter parameter : function.getParameters()) {
                    Map<String, String> item = new LinkedHashMap<>();
                    item.put("name", parameter.getName());
                    item.put("type", parameter.getDataType().getName());
                    parameters.add(item);
                }
                record.put("parameters", parameters);
                out.println(gson.toJson(record));
                written++;
                if (written % 1000 == 0) out.flush();
            }
        }
        println("exported_signatures=" + written + " namespace=" + args[1]);
    }
}
