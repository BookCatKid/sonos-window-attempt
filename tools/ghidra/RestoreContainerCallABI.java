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
    private void requireIsolatedProject() throws Exception {
        Path root=Path.of(getSourceFile().getAbsolutePath()).getParent().getParent().getParent().toRealPath();
        Path allowed=root.resolve("analysis/container-call-abi/ghidra").toRealPath();
        Path actual=Path.of(currentProgram.getDomainFile().getProjectLocator().getLocation()).toRealPath();
        if(!actual.equals(allowed))throw new IOException("ABI edits require the isolated analysis/container-call-abi/ghidra project");
    }
    private void memberABI(String entry,DataType receiver,DataType result,int cleanup,DataType... arguments) throws Exception {
        Function f=getFunctionAt(toAddr(entry));if(f==null||f.isThunk())throw new IOException("Missing native function "+entry);
        List<Parameter> params=new ArrayList<>();
        params.add(new ParameterImpl("receiver",receiver,currentProgram.getRegister("ECX"),currentProgram));
        int offset=4;
        for(int i=0;i<arguments.length;i++) {
            params.add(new ParameterImpl("argument_"+i,arguments[i],offset,currentProgram));offset+=arguments[i].getLength();
        }
        Parameter ret=result==VoidDataType.dataType?new ReturnParameterImpl(result,currentProgram):
            new ReturnParameterImpl(result,currentProgram.getRegister("EAX"),currentProgram);
        f.updateFunction("__thiscall",ret,Function.FunctionUpdateType.CUSTOM_STORAGE,true,SourceType.USER_DEFINED,params.toArray(new Parameter[0]));
        f.setStackPurgeSize(cleanup);
    }
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
        requireIsolatedProject();
        String[] args=getScriptArgs();if(args.length!=2&&args.length!=3)throw new IllegalArgumentException("callers.txt output_directory [proven_event_constructor_index.tsv]");
        Path output=Path.of(args[1]);Files.createDirectories(output);
        List<String> entries=new ArrayList<>(Files.readAllLines(Path.of(args[0])));entries.add("10dee620");
        if(args.length==3)entries.addAll(Arrays.asList("10deea50","10def0d0","10df15a0","105ad940"));
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
                target.setStackPurgeSize(20);
                if(args.length==3) {
                    // Native calls push value then key; slots 7 and 10 consume
                    // two four-byte arguments with the bag receiver in ECX.
                    StructureDataType bag=new StructureDataType(new CategoryPath("/RecoveryProof"),"RecoveredPropertyBag",0,dtm);
                    DataType bagPointer=new PointerDataType(bag,4,dtm);
                    FunctionDefinitionDataType setString=new FunctionDefinitionDataType("RecoveredSetString",dtm);
                    setString.setCallingConvention("__thiscall");setString.setReturnType(VoidDataType.dataType);
                    setString.setArguments(new ParameterDefinition[]{new ParameterDefinitionImpl("receiver",bagPointer,null),
                        new ParameterDefinitionImpl("key",pointer,null),new ParameterDefinitionImpl("value",pointer,null)});
                    FunctionDefinitionDataType setInteger=new FunctionDefinitionDataType("RecoveredSetInteger",dtm);
                    setInteger.setCallingConvention("__thiscall");setInteger.setReturnType(VoidDataType.dataType);
                    setInteger.setArguments(new ParameterDefinition[]{new ParameterDefinitionImpl("receiver",bagPointer,null),
                        new ParameterDefinitionImpl("key",pointer,null),new ParameterDefinitionImpl("value",UnsignedIntegerDataType.dataType,null)});
                    StructureDataType bagVtable=new StructureDataType(new CategoryPath("/RecoveryProof"),"RecoveredPropertyBagVtable",40,dtm);
                    bagVtable.replaceAtOffset(28,new PointerDataType(setString,4,dtm),4,"setString",null);
                    bagVtable.add(new PointerDataType(setInteger,4,dtm),4,"setInteger",null);
                    FunctionDefinitionDataType setWord=new FunctionDefinitionDataType("RecoveredSetWord",dtm);
                    setWord.setCallingConvention("__thiscall");setWord.setReturnType(VoidDataType.dataType);
                    setWord.setArguments(new ParameterDefinition[]{new ParameterDefinitionImpl("receiver",bagPointer,null),
                        new ParameterDefinitionImpl("key",pointer,null),new ParameterDefinitionImpl("value",UnsignedIntegerDataType.dataType,null)});
                    bagVtable.growStructure(20);
                    bagVtable.add(new PointerDataType(setWord,4,dtm),4,"setWord",null);
                    bag.add(new PointerDataType(bagVtable,4,dtm),4,"vtable",null);
                    DataType resolvedBag=dtm.addDataType(bag,DataTypeConflictHandler.REPLACE_HANDLER);
                    bagPointer=new PointerDataType(resolvedBag,4,dtm);
                    StructureDataType event=new StructureDataType(new CategoryPath("/RecoveryProof"),"RecoveredEvent",0,dtm);
                    event.add(pointer,4,"text_rep",null);event.add(UnsignedIntegerDataType.dataType,4,"event_id",null);
                    event.add(bagPointer,4,"properties",null);event.add(pointer,4,"interface_pointer",null);
                    event.add(container,8,"tree",null);
                    DataType eventType=dtm.addDataType(event,DataTypeConflictHandler.REPLACE_HANDLER);
                    DataType eventPointer=new PointerDataType(eventType,4,dtm);
                    // Slot nine is loaded from [vptr+0x24]; ECX carries the
                    // variant receiver and the caller pushes one key pointer.
                    StructureDataType variant=new StructureDataType(new CategoryPath("/RecoveryProof"),"RecoveredFactoryVariant",0,dtm);
                    DataType variantPointer=new PointerDataType(variant,4,dtm);
                    FunctionDefinitionDataType value=new FunctionDefinitionDataType("RecoveredFactoryValue",dtm);
                    value.setCallingConvention("__thiscall");value.setReturnType(IntegerDataType.dataType);
                    value.setArguments(new ParameterDefinition[]{new ParameterDefinitionImpl("receiver",variantPointer,null),
                        new ParameterDefinitionImpl("key",pointer,null)});
                    StructureDataType vtable=new StructureDataType(new CategoryPath("/RecoveryProof"),"RecoveredFactoryVtable",36,dtm);
                    vtable.add(new PointerDataType(value,4,dtm),4,"value",null);
                    variant.add(new PointerDataType(vtable,4,dtm),4,"vtable",null);
                    DataType resolvedVariant=dtm.addDataType(variant,DataTypeConflictHandler.REPLACE_HANDLER);
                    variantPointer=new PointerDataType(resolvedVariant,4,dtm);
                    List<String> index=Files.readAllLines(Path.of(args[2]));
                    for(String line:index.subList(1,index.size())) {
                        String[] fields=line.split("\t");if(fields.length!=3||!Arrays.asList("160","163").contains(fields[2]))throw new IOException("Expected proven event constructor");
                        Function ctor=getFunctionAt(toAddr(fields[0]));
                        if(ctor==null||ctor.getBody().getNumAddresses()!=Integer.parseInt(fields[2]))throw new IOException("Native constructor extent differs");
                        memberABI(fields[0],eventPointer,eventPointer,0);
                    }
                    memberABI("10deea50",eventPointer,eventPointer,4,eventPointer);
                    memberABI("10def0d0",eventPointer,VoidDataType.dataType,0);
                    memberABI("10df15a0",pointer,VoidDataType.dataType,4,eventPointer);
                    memberABI("105ad940",pointer,VoidDataType.dataType,4,eventPointer);
                    for(String entry:Arrays.asList("10e00c90","10e00e20")) {
                        Function f=getFunctionAt(toAddr(entry));
                        Parameter ret=new ReturnParameterImpl(eventPointer,currentProgram.getRegister("EAX"),currentProgram);
                        Parameter[] params={new ParameterImpl("result",eventPointer,4,currentProgram),new ParameterImpl("variant",variantPointer,8,currentProgram)};
                        f.updateFunction("__cdecl",ret,Function.FunctionUpdateType.CUSTOM_STORAGE,true,SourceType.USER_DEFINED,params);f.setStackPurgeSize(0);
                    }
                }
                List<Map<String,Object>> storage=new ArrayList<>();
                for(Parameter param:target.getParameters()) {
                    Map<String,Object> row=new LinkedHashMap<>();row.put("name",param.getName());row.put("type",param.getDataType().getName());
                    row.put("bytes",param.getDataType().getLength());row.put("storage",param.getVariableStorage().toString());storage.add(row);
                }
                Map<String,Object> report=new LinkedHashMap<>();report.put("entry","10dee620");report.put("signature",target.getSignature().getPrototypeString());report.put("parameters",storage);report.put("ret_cleanup_bytes",target.getStackPurgeSize());
                Files.writeString(output.resolve("applied-abi.json"),gson.toJson(report)+"\n");
                ok=true;
            } finally {currentProgram.endTransaction(tx,ok);}
            decompiler.flushCache();export(entries,output.resolve("after.jsonl"));
        } finally {decompiler.dispose();}
    }
}
