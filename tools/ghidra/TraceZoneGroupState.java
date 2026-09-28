// @category Sonos
// Headless first-pass xrefs and pseudocode for the GetZoneGroupState path.
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.symbol.Reference;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.nio.charset.StandardCharsets;
import java.util.LinkedHashSet;

public class TraceZoneGroupState extends GhidraScript {
    @Override
    public void run() throws Exception {
        String outputPath = getScriptArgs()[0];
        try (PrintWriter out = new PrintWriter(new FileWriter(outputPath))) {
            out.println("Binary: " + currentProgram.getName());
            out.println("Language: " + currentProgram.getLanguageID());
            Memory memory = currentProgram.getMemory();
            LinkedHashSet<Function> functions = new LinkedHashSet<>();
            String[] needles = {
                "GetZoneGroupState", "urn:schemas-upnp-org:service:ZoneGroupTopology:1",
                "/ZoneGroupTopology/Control", "ZoneGroupState"
            };
            for (String needle : needles) {
                out.println("\nSTRING: " + needle);
                byte[] bytes = needle.getBytes(StandardCharsets.US_ASCII);
                Address cursor = memory.getMinAddress();
                int hits = 0;
                while (cursor != null && hits < 20) {
                    Address found = memory.findBytes(cursor, bytes, null, true, monitor);
                    if (found == null) break;
                    out.println("  location " + found);
                    for (Reference ref : currentProgram.getReferenceManager().getReferencesTo(found)) {
                        Function fn = currentProgram.getFunctionManager().getFunctionContaining(ref.getFromAddress());
                        out.println("    xref " + ref.getFromAddress() + " function " +
                                    (fn == null ? "unknown" : fn.getName() + " @ " + fn.getEntryPoint()));
                        if (fn != null) functions.add(fn);
                    }
                    hits++;
                    cursor = found.add(1);
                }
            }
            DecompInterface decompiler = new DecompInterface();
            decompiler.openProgram(currentProgram);
            int count = 0;
            for (Function fn : functions) {
                if (count++ >= 10) break;
                out.println("\nFUNCTION " + fn.getName() + " @ " + fn.getEntryPoint() +
                            " size " + fn.getBody().getNumAddresses());
                for (Reference ref : currentProgram.getReferenceManager().getReferencesTo(fn.getEntryPoint())) {
                    Function caller = currentProgram.getFunctionManager().getFunctionContaining(ref.getFromAddress());
                    out.println("  caller " + ref.getFromAddress() + " " +
                                (caller == null ? "unknown" : caller.getName()));
                }
                DecompileResults result = decompiler.decompileFunction(fn, 60, monitor);
                if (result.decompileCompleted() && result.getDecompiledFunction() != null) {
                    String source = result.getDecompiledFunction().getC();
                    out.println(source.length() > 40000 ? source.substring(0, 40000) : source);
                } else {
                    out.println("Decompiler failed: " + result.getErrorMessage());
                }
            }
            decompiler.dispose();
        }
    }
}
