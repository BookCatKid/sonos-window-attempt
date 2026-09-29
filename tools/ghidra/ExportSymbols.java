// @category Sonos
// Export the analyzed symbol table without mutating the saved program.
import com.google.gson.Gson;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.program.model.symbol.SymbolTable;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.LinkedHashMap;
import java.util.Map;

public class ExportSymbols extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 1) {
            throw new IllegalArgumentException("Usage: output.jsonl");
        }
        Gson gson = new Gson();
        SymbolTable table = currentProgram.getSymbolTable();
        SymbolIterator iterator = table.getAllSymbols(true);
        long written = 0;
        try (PrintWriter out = new PrintWriter(new FileWriter(args[0]))) {
            while (iterator.hasNext()) {
                monitor.checkCancelled();
                Symbol symbol = iterator.next();
                Map<String, Object> record = new LinkedHashMap<>();
                record.put("address", symbol.getAddress().toString());
                record.put("name", symbol.getName());
                record.put("qualified_name", symbol.getName(true));
                record.put("type", symbol.getSymbolType().toString());
                record.put("primary", symbol.isPrimary());
                record.put("source", symbol.getSource().toString());
                record.put("dynamic", symbol.isDynamic());
                record.put("external", symbol.isExternal());
                out.println(gson.toJson(record));
                written++;
                if (written % 10000 == 0) out.flush();
            }
        }
        println("exported_symbols=" + written);
    }
}
