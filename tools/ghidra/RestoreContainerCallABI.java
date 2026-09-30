// @category Sonos
// Restore an independently byte-proven outgoing container ABI in an isolated project.
import com.google.gson.Gson;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.data.*;
import ghidra.program.model.symbol.SourceType;
import java.nio.file.*;
import java.io.*;
import java.util.*;

public class RestoreContainerCallABI extends GhidraScript {
    private final Gson gson=new Gson();
    private DecompInterface decompiler;
    private void export(List<String> entries,Path path) throws Exception {
        try(PrintWriter out=new PrintWriter(new FileWriter(path.toFile()))) {
            for(String entry:entries) {
                monitor.checkCancelled();Function f=getFunctionAt(toAddr(entry.trim()));if(f==null)continue;
                Map<String,Object> row=new LinkedHashMap<>();row.put("entry",entry.trim());row.put("name",f.getName());
                row.put("body_bytes",f.getBody().getNumAddresses());row.put("thunk",f.isThunk());
                row.put("signature",f.getSignature().getPrototypeString());
                DecompileResults result=decompiler.decompileFunction(f,45,monitor);
                if(result.decompileCompleted()&&result.getDecompiledFunction()!=null)row.put("decompiled_c",result.getDecompiledFunction().getC());
                else row.put("error",result.getErrorMessage());
                out.println(gson.toJson(row));out.flush();
            }
        }
    }
    public void run() throws Exception {
        String[] args=getScriptArgs();if(args.length!=2)throw new IllegalArgumentException("callers.txt output_directory");
        Path output=Path.of(args[1]);Files.createDirectories(output);
        List<String> entries=new ArrayList<>(Files.readAllLines(Path.of(args[0])));entries.add("10dee620");
        decompiler=new DecompInterface();if(!decompiler.openProgram(currentProgram))throw new IOException("Decompiler cannot open program");
        try {
            export(entries,output.resolve("before.jsonl"));
            Function target=getFunctionAt(toAddr("10dee620"));if(target==null||target.isThunk())throw new IOException("Missing native consumer");
            int tx=currentProgram.startTransaction("Restore byte-proven twenty-byte container argument ABI");boolean ok=false;
            try {
                DataTypeManager dtm=currentProgram.getDataTypeManager();
                StructureDataType tree=new StructureDataType(new CategoryPath("/RecoveryProof"),"RecoveredEmptyTree",0,dtm);
                tree.add(new PointerDataType(Undefined1DataType.dataType,4,dtm),4,"head",null);
                tree.add(UnsignedIntegerDataType.dataType,4,"size",null);
                DataType container=dtm.addDataType(tree,DataTypeConflictHandler.REPLACE_HANDLER);
                DataType pointer=new PointerDataType(Undefined1DataType.dataType,4,dtm);
                Parameter[] parameters={
                    new ParameterImpl("receiver",pointer,currentProgram.getRegister("ECX"),currentProgram),
                    new ParameterImpl("text",pointer,4,currentProgram),
                    new ParameterImpl("event_id",UnsignedIntegerDataType.dataType,8,currentProgram),
                    new ParameterImpl("properties",pointer,12,currentProgram),
                    new ParameterImpl("tree",container,16,currentProgram)};
                Parameter result=new ReturnParameterImpl(pointer,currentProgram.getRegister("EAX"),currentProgram);
                target.updateFunction("__thiscall",result,Function.FunctionUpdateType.CUSTOM_STORAGE,true,SourceType.USER_DEFINED,parameters);
                target.setStackPurgeSize(20);ok=true;
                List<Map<String,Object>> storage=new ArrayList<>();
                for(Parameter param:target.getParameters()) {
                    Map<String,Object> row=new LinkedHashMap<>();row.put("name",param.getName());row.put("type",param.getDataType().getName());
                    row.put("bytes",param.getDataType().getLength());row.put("storage",param.getVariableStorage().toString());storage.add(row);
                }
                Map<String,Object> report=new LinkedHashMap<>();report.put("entry","10dee620");report.put("signature",target.getSignature().getPrototypeString());report.put("parameters",storage);report.put("ret_cleanup_bytes",target.getStackPurgeSize());
                Files.writeString(output.resolve("applied-abi.json"),gson.toJson(report)+"\n");
            } finally {currentProgram.endTransaction(tx,ok);}
            decompiler.flushCache();export(entries,output.resolve("after.jsonl"));
        } finally {decompiler.dispose();}
    }
}
