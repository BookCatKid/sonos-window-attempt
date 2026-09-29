// @category Sonos
// Export address-set ranges for functions marked by RecoverThunkDestinations.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.AddressRange;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import java.io.FileWriter;
import java.io.PrintWriter;

public class ExportRecoveredFunctionRanges extends GhidraScript {
    private static final String RECOVERY_COMMENT =
        "Recovered from a missing 5-byte E9 call destination by this Ghidra pass.";

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 1) throw new IllegalArgumentException("Usage: output.tsv");
        long functions = 0;
        long bodyBytes = 0;
        try (PrintWriter out = new PrintWriter(new FileWriter(args[0]))) {
            out.println("entry\tname\tbody_bytes\tranges");
            FunctionIterator iterator = currentProgram.getFunctionManager().getFunctions(true);
            while (iterator.hasNext()) {
                monitor.checkCancelled();
                Function function = iterator.next();
                String comment = function.getComment();
                if (comment == null || !comment.startsWith(RECOVERY_COMMENT)) continue;
                StringBuilder ranges = new StringBuilder();
                for (AddressRange range : function.getBody().getAddressRanges()) {
                    if (ranges.length() != 0) ranges.append(',');
                    ranges.append(String.format("%08x-%08x", range.getMinAddress().getOffset(),
                                                range.getMaxAddress().getOffset()));
                }
                long size = function.getBody().getNumAddresses();
                out.printf("%s\t%s\t%d\t%s%n", function.getEntryPoint(),
                           function.getName(), size, ranges.toString());
                functions++;
                bodyBytes += size;
            }
        }
        println("marked_functions=" + functions + " body_bytes=" + bodyBytes);
    }
}
