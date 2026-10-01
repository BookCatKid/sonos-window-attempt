// @category Sonos
// Read-only recovery evidence. No signature edits and no assembly source generation.
import com.google.gson.Gson;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.pcode.*;
import ghidra.program.model.symbol.*;
import java.nio.file.*;
import java.io.*;
import java.util.*;
import java.util.zip.GZIPOutputStream;
import java.nio.charset.StandardCharsets;

public class ExportStructuredRecovery extends GhidraScript {
    private final Gson gson = new Gson();
    private Map<String,Object> node(Varnode v) {
        if(v==null)return null;
        Map<String,Object> r=new LinkedHashMap<>();
        r.put("space",v.getAddress().getAddressSpace().getName());
        r.put("offset",Long.toUnsignedString(v.getOffset(),16));r.put("size",v.getSize());
        r.put("constant",v.isConstant());r.put("input",v.isInput());
        PcodeOp def=v.getDef();if(def!=null)r.put("definition",def.getSeqnum().toString());
        if(v instanceof VarnodeAST) {
            HighVariable h=((VarnodeAST)v).getHigh();
            if(h!=null){r.put("high_name",h.getName());r.put("type",h.getDataType().getPathName());}
        }
        return r;
    }
    private Map<String,Object> op(PcodeOp op) {
        Map<String,Object> r=new LinkedHashMap<>();r.put("id",op.getSeqnum().toString());
        r.put("native_address",op.getSeqnum().getTarget().toString());r.put("opcode",op.getMnemonic());
        r.put("output",node(op.getOutput()));List<Object> inputs=new ArrayList<>();
        for(int i=0;i<op.getNumInputs();i++)inputs.add(node(op.getInput(i)));r.put("inputs",inputs);
        return r;
    }
    private Map<String,Object> variable(Variable v) {
        Map<String,Object> r=new LinkedHashMap<>();r.put("name",v.getName());
        r.put("type",v.getDataType().getPathName());r.put("storage",v.getVariableStorage().toString());
        r.put("first_use_offset",v.getFirstUseOffset());return r;
    }
    public void run() throws Exception {
        String[] args=getScriptArgs();if(args.length!=2)throw new IOException("entries.txt output.jsonl");
        Path root=Path.of(getSourceFile().getAbsolutePath()).getParent().getParent().getParent().toRealPath();
        Path actual=Path.of(currentProgram.getDomainFile().getProjectLocator().getLocation()).toRealPath();
        if(!actual.equals(root.resolve("analysis/container-call-abi/ghidra").toRealPath()))
            throw new IOException("Structured recovery requires the isolated project");
        DecompInterface d=new DecompInterface();if(!d.openProgram(currentProgram))throw new IOException("Cannot open decompiler");
        OutputStream output=Files.newOutputStream(Path.of(args[1]));
        if(args[1].endsWith(".gz"))output=new GZIPOutputStream(output);
        try(PrintWriter out=new PrintWriter(new OutputStreamWriter(output,StandardCharsets.UTF_8))) {
            for(String entry:Files.readAllLines(Path.of(args[0]))) {
                monitor.checkCancelled();Function f=getFunctionAt(toAddr(entry.trim()));
                if(f==null||f.isThunk())throw new IOException("Expected native non-thunk function "+entry);
                Map<String,Object> row=new LinkedHashMap<>();row.put("schema",1);row.put("entry",entry.trim());
                row.put("name",f.getName());row.put("body_bytes",f.getBody().getNumAddresses());
                row.put("signature",f.getSignature().getPrototypeString());row.put("calling_convention",f.getCallingConventionName());
                row.put("stack_purge_bytes",f.getStackPurgeSize());
                List<Object> ranges=new ArrayList<>();AddressRangeIterator ri=f.getBody().getAddressRanges();
                while(ri.hasNext()){AddressRange ar=ri.next();ranges.add(Arrays.asList(ar.getMinAddress().toString(),ar.getMaxAddress().toString()));}
                row.put("native_ranges",ranges);
                List<Object> variables=new ArrayList<>();for(Variable v:f.getAllVariables())variables.add(variable(v));row.put("database_variables",variables);
                List<Object> instructions=new ArrayList<>();InstructionIterator ii=currentProgram.getListing().getInstructions(f.getBody(),true);
                while(ii.hasNext()) {
                    Instruction ins=ii.next();Map<String,Object> ir=new LinkedHashMap<>();ir.put("address",ins.getAddress().toString());
                    ir.put("length",ins.getLength());ir.put("flow_type",ins.getFlowType().toString());
                    List<Object> raw=new ArrayList<>();for(PcodeOp p:ins.getPcode())raw.add(op(p));ir.put("raw_pcode",raw);
                    List<Object> refs=new ArrayList<>();for(Reference ref:ins.getReferencesFrom()) {
                        Map<String,Object> rr=new LinkedHashMap<>();rr.put("target",ref.getToAddress().toString());rr.put("kind",ref.getReferenceType().toString());
                        Function callee=getFunctionAt(ref.getToAddress());if(callee!=null){rr.put("callee_signature",callee.getSignature().getPrototypeString());rr.put("callee_convention",callee.getCallingConventionName());}
                        refs.add(rr);
                    }ir.put("references",refs);instructions.add(ir);
                }row.put("instructions",instructions);
                DecompileResults result=d.decompileFunction(f,90,monitor);
                if(!result.decompileCompleted()||result.getHighFunction()==null)throw new IOException("Decompiler failed "+entry+": "+result.getErrorMessage());
                HighFunction h=result.getHighFunction();List<Object> ops=new ArrayList<>();Iterator<PcodeOpAST> oi=h.getPcodeOps();int outside=0;
                while(oi.hasNext()) {PcodeOpAST po=oi.next();ops.add(op(po));if(!f.getBody().contains(po.getSeqnum().getTarget()))outside++;}
                row.put("high_pcode",ops);row.put("high_operations_outside_native_body",outside);
                row.put("eligible_for_automated_lowering",outside==0);
                List<Object> blocks=new ArrayList<>();for(PcodeBlockBasic b:h.getBasicBlocks()) {
                    Map<String,Object> br=new LinkedHashMap<>();br.put("id",b.getIndex());br.put("start",b.getStart().toString());br.put("end",b.getStop().toString());
                    List<Integer> successors=new ArrayList<>();for(int i=0;i<b.getOutSize();i++)successors.add(b.getOut(i).getIndex());br.put("successors",successors);blocks.add(br);
                }row.put("blocks",blocks);
                row.put("decompiled_c",result.getDecompiledFunction().getC());
                row.put("scope","Analysis evidence; inferred types, SSA use/definition and CFG are not proven C++ lifetimes or EH reconstruction");
                out.println(gson.toJson(row));out.flush();
            }
        } finally {d.dispose();}
        println("STRUCTURED_EXPORT_COMPLETE");
    }
}
