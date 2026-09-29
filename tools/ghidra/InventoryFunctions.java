// @category Sonos
// Inventory all functions identified in the saved native DLL analysis.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import java.io.FileWriter;
import java.io.PrintWriter;

public class InventoryFunctions extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 1) {
            throw new IllegalArgumentException("Usage: output.tsv");
        }
        long functions = 0;
        long thunks = 0;
        long bodyBytes = 0;
        long nonThunkBytes = 0;
        try (PrintWriter out = new PrintWriter(new FileWriter(args[0]))) {
            out.println("entry\tname\tbody_bytes\tthunk\texternal");
            FunctionIterator iterator = currentProgram.getFunctionManager().getFunctions(true);
            while (iterator.hasNext()) {
                monitor.checkCancelled();
                Function function = iterator.next();
                long size = function.getBody().getNumAddresses();
                boolean thunk = function.isThunk();
                functions++;
                bodyBytes += size;
                if (thunk) thunks++;
                else nonThunkBytes += size;
                out.printf("%s\t%s\t%d\t%b\t%b%n", function.getEntryPoint(),
                           function.getName(), size, thunk, function.isExternal());
            }
        }
        println("functions=" + functions + " thunks=" + thunks +
                " body_bytes=" + bodyBytes + " non_thunk_bytes=" + nonThunkBytes);
    }
}
