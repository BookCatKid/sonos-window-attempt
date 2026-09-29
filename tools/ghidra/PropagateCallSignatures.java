// @category Sonos
// Commit inferred callee prototypes in an isolated project, then redecompile callers.
import com.google.gson.Gson;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.data.*;
import ghidra.program.model.pcode.HighFunctionDBUtil;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.scalar.Scalar;
import java.nio.file.*;
import java.io.*;
import java.util.*;

public class PropagateCallSignatures extends GhidraScript {
    private final Gson gson = new Gson();
    private DecompInterface decompiler;
    private final Map<String,String> verifiedStackCC = new HashMap<>();
    private void reconcileStackABI(Function function, Map<String,Object> report) throws Exception {
        // Stack-only conventions can be distinguished independently by RET's
        // cleanup operand. Do not reinterpret ECX/EDX/custom-register models.
        for (Parameter p : function.getParameters())
            if (!p.getVariableStorage().isStackStorage()) return;
        Integer pop=null;
        InstructionIterator instructions=currentProgram.getListing().getInstructions(function.getBody(),true);
        while (instructions.hasNext()) {
            Instruction ins=instructions.next();
            if (!ins.getMnemonicString().equalsIgnoreCase("RET")) continue;
            int value=0;
            if (ins.getNumOperands()!=0) {
                Scalar scalar=ins.getScalar(0); if (scalar==null) return;
                value=(int)scalar.getUnsignedValue();
            }
            if (pop!=null && pop!=value) return;
            pop=value;
        }
        if (pop==null || pop<0 || pop>256 || pop%4!=0) return;
        int used=0;
        for (Parameter p : function.getParameters()) {
            long offset=p.getVariableStorage().getStackOffset();
            if (offset<4 || offset>256) return;
            used=Math.max(used,(int)offset-4+((p.getDataType().getLength()+3)/4)*4);
        }
        if (pop>0 && used>pop) return;
        String convention=pop==0 ? "__cdecl" : "__stdcall";
        function.setCallingConvention(convention);
        if (pop>0) {
            for (int remaining=pop-used;remaining>0;remaining-=4)
                function.addParameter(new ParameterImpl("unused_stack_"+function.getParameterCount(),
                    Undefined4DataType.dataType,currentProgram),SourceType.ANALYSIS);
        }
        function.setStackPurgeSize(pop);
        verifiedStackCC.put(function.getEntryPoint().toString(),convention);
        report.put("verified_stack_cc",convention); report.put("ret_cleanup_bytes",pop);
    }
    private void export(List<String> entries, String path) throws Exception {
        try (PrintWriter out = new PrintWriter(new FileWriter(path))) {
            for (String entry : entries) {
                monitor.checkCancelled();
                Function f = getFunctionAt(toAddr(entry.trim()));
                if (f == null) continue;
                Map<String,Object> record = new LinkedHashMap<>();
                record.put("entry", entry.trim()); record.put("name", f.getName());
                record.put("body_bytes", f.getBody().getNumAddresses());
                record.put("signature", f.getSignature().getPrototypeString());
                record.put("thunk", f.isThunk());
                String verified=verifiedStackCC.get(entry.trim());
                if (verified!=null) record.put("verified_stack_cc",verified);
                DecompileResults result = decompiler.decompileFunction(f, 30, monitor);
                if (result.decompileCompleted() && result.getDecompiledFunction() != null)
                    record.put("decompiled_c", result.getDecompiledFunction().getC());
                else record.put("error", result.getErrorMessage());
                out.println(gson.toJson(record)); out.flush();
            }
        }
    }
    @Override public void run() throws Exception {
        String[] args=getScriptArgs();
        if (args.length!=3 && args.length!=4) throw new IllegalArgumentException("Usage: callers.txt callees.txt output_directory [use_data_types]");
        boolean useDataTypes=args.length==3 || Boolean.parseBoolean(args[3]);
        List<String> callers=Files.readAllLines(Path.of(args[0]));
        List<String> callees=Files.readAllLines(Path.of(args[1]));
        Path out=Path.of(args[2]); Files.createDirectories(out);
        decompiler=new DecompInterface(); decompiler.toggleCCode(true); decompiler.toggleSyntaxTree(true);
        if (!decompiler.openProgram(currentProgram)) throw new IOException("Cannot open program");
        try {
            export(callers,out.resolve("before.jsonl").toString());
            // Reference caller instructions and matched C++ probes establish the
            // sized-delete wrapper's two arguments, including its unused size.
            Function sizedDelete=getFunctionAt(toAddr("1148a50e"));
            if (sizedDelete!=null) {
                int tx=currentProgram.startTransaction("Preserve verified sized delete ABI"); boolean ok=false;
                try {
                    Parameter result=new ReturnParameterImpl(VoidDataType.dataType,currentProgram);
                    Parameter[] params={new ParameterImpl("allocation",new PointerDataType(VoidDataType.dataType),currentProgram),
                        new ParameterImpl("bytes",UnsignedIntegerDataType.dataType,currentProgram)};
                    sizedDelete.updateFunction("__cdecl",result,Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS,true,SourceType.USER_DEFINED,params);
                    ok=true;
                } finally { currentProgram.endTransaction(tx,ok); }
                decompiler.flushCache();
            }
            int committed=0;
            try (PrintWriter report=new PrintWriter(new FileWriter(out.resolve("commits.jsonl").toFile()))) {
                for (String entry : callees) {
                    monitor.checkCancelled(); Function f=getFunctionAt(toAddr(entry.trim()));
                    Map<String,Object> item=new LinkedHashMap<>(); item.put("entry",entry.trim());
                    if (f==null) {item.put("status","missing");report.println(gson.toJson(item));continue;}
                    item.put("before",f.getSignature().getPrototypeString());
                    if (f.isExternal() || f.isThunk() || f.hasCustomVariableStorage() ||
                        f.getSignatureSource()==SourceType.IMPORTED || f.getSignatureSource()==SourceType.USER_DEFINED) {
                        item.put("status","preserved_explicit_signature");report.println(gson.toJson(item));continue;
                    }
                    DecompileResults result=decompiler.decompileFunction(f,30,monitor);
                    if (!result.decompileCompleted() || result.getHighFunction()==null) {
                        item.put("status","decompile_failed");report.println(gson.toJson(item));continue;
                    }
                    item.put("inferred_model",result.getHighFunction().getFunctionPrototype().getModelName());
                    item.put("inferred_parameters",result.getHighFunction().getFunctionPrototype().getNumParams());
                    int tx=currentProgram.startTransaction("Inferred callee parameters"); boolean ok=false;
                    try {
                        HighFunctionDBUtil.commitParamsToDatabase(result.getHighFunction(),useDataTypes,
                            useDataTypes ? HighFunctionDBUtil.ReturnCommitOption.COMMIT :
                                HighFunctionDBUtil.ReturnCommitOption.NO_COMMIT,SourceType.ANALYSIS);
                        reconcileStackABI(f,item);
                        item.put("after",f.getSignature().getPrototypeString());item.put("status","committed");
                        ok=true; committed++;
                    } catch (Exception error) {item.put("status","commit_failed");item.put("error",error.toString());}
                    finally {currentProgram.endTransaction(tx,ok);}
                    report.println(gson.toJson(item));report.flush();decompiler.flushCache();
                    println("committed="+committed+" entry="+entry);
                }
            }
            decompiler.flushCache();
            export(callers,out.resolve("after.jsonl").toString());
            export(callees,out.resolve("callees-after.jsonl").toString());
            println("signature_propagation_complete committed="+committed+" callers="+callers.size());
        } finally {decompiler.dispose();}
    }
}
