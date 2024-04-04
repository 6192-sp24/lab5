import Vector::*;
import FIFO::*;
import FIFOF::*;
import SpecialFIFOs::*;

import Ehr::*;
import Types::*;
import MessageTypes::*;
import RoutingTypes::*;

import CrossbarSwitch::*;
import MatrixArbiter::*;

(* synthesize *)
module mkOutPortArbiter(NtkArbiter#(NumPorts));
    Integer n = valueOf(NumPorts);
    NtkArbiter#(NumPorts)	matrixArbiter <- mkMatrixArbiter(n);
    return matrixArbiter;
endmodule

typedef Vector#(NumPorts, Direction)  ArbReq;
typedef Vector#(NumPorts, Direction)  ArbReqBits;
typedef Bit#(NumPorts)                ArbRes;

typedef struct {
  Bit#(NumPorts) grantedInPorts;
  Bit#(NumPorts) grantedOutPorts;
  FlitBundle fb;
} ARB2CB deriving (Bits, Eq); // Arbiter (ARB) to Crossbar (CB)

interface DataLink;
    method ActionValue#(Flit)         getFlit;
    method Action                     putFlit(Flit flit);
endinterface

interface Router;
    method Bool isInited;
    interface Vector#(NumPorts, DataLink)    dataLinks;
endinterface

(* synthesize *)
module mkRouter(Router);

    /********************************* States *************************************/
    Reg#(Bool)                                inited         <- mkReg(False);
  
    //To break rules
    FIFO#(FlitBundle)                         flitsBuf       <- mkBypassFIFO;
    Vector#(8, Ehr#(2, Direction))            arbReqReg      <- replicateM(mkEhr(null_));
    FIFO#(ArbRes)                             arbResBuf      <- mkBypassFIFO;
    
    //Pipelining
    FIFO#(ARB2CB)                             arb2cb         <- mkPipelineFIFO;
    
    /******************************* Submodules ***********************************/
    /* Input Side */
    Vector#(NumPorts, FIFOF#(Flit))           inputBuffer    <- replicateM(mkSizedBypassFIFOF(4));
    
    /* In the middle */
    Vector#(NumPorts, NtkArbiter#(NumPorts))  outPortArbiter <- replicateM(mkOutPortArbiter);
    CrossbarSwitch                            cbSwitch       <- mkCrossbarSwitch;
    
    /* Output Side */
    Vector#(NumPorts, FIFOF#(Flit))           outputLatch   <- replicateM(mkSizedBypassFIFOF(1));
    
    Reg#(Bit#(32))                            tick_count     <- mkReg(0);

    /******************************* Functions ***********************************/
    /* Read Inputs */
    function ArbReq readFlitsHeader;
        ArbReq currentFlitHeader = newVector;
        /*
            Please implement the logics to read flits from input buffer.
        */  

        return currentFlitHeader;
    endfunction

    function FlitBundle readFlits;
        FlitBundle currentFlits = newVector;
        Flit no_where_flit = ?;
        no_where_flit.nextDir = null_;
        /*
            Please implement the logics to read flits from input buffer.
        */  
        return currentFlits;
    endfunction
  
    function Action putWinnerFlit2XBar(ArbRes arbRes, FlitBundle fb);
    action
        /*
            Please implement the logics to read the granted flits from input buffer and feed it into the Crossbar
        */  
    endaction
    endfunction

    function ArbReqBits genArbitReqBits(ArbReq arbReq);
        /*
            Please implement the logcis to group request bits of different inputs for the same output together as arbReqBits.
            arbReqBits consists of "number of output port" * 5 bits, where each bit indicates whether an input has valid flit targetting this output port.
        */ 

        ArbReqBits arbReqBits = newVector;
        
        return arbReqBits;
    endfunction
    
    /****************************** Router Behavior ******************************/
    rule doInitialize(!inited);
        for(Integer outPort = 0; outPort < valueOf(NumPorts); outPort = outPort+1) begin
            outPortArbiter[outPort].initialize;
        end
        inited <= True;
    endrule 

    // Critical Path Analysis
    // Buffer Write (BW) [Interface] -> Switch Allocation (SA, Arbitration) -> Switch Traversal (ST) -> Output Latch [Interface]
    rule  debug_tick;
        tick_count <= tick_count+1;
    endrule 


    rule rl_Switch_Arbitration(inited);
        let arbReq       = readFlitsHeader;
        let arbReqBits   = genArbitReqBits(arbReq);
        ArbRes grantedInPorts = 0; 
        /*
            Please implement the Switch Arbitration stage here
        */ 

        arbResBuf.enq(grantedInPorts);
    endrule

    rule rl_Switch_Traversal(inited);
        let flits        = readFlits;
        let grantedInPorts = arbResBuf.first(); 
        /*
            Please implement the putWinnerFlit2XBar function above
        */ 
        for(Integer inPort=0; inPort<valueOf(NumPorts); inPort = inPort+1)
        begin
            if(flits[inPort].nextDir != null_) 
                $display("[cycle:%0d] Port:%0d; incoming flit data = %0d, target Direction = %0d", tick_count, inPort, flits[inPort].flitData, flits[inPort].nextDir);
        end

        putWinnerFlit2XBar(grantedInPorts, flits);
        arbResBuf.deq();
    endrule
    
    for(Integer outPort=0; outPort<valueOf(NumPorts); outPort = outPort+1)
    begin
        rule rl_enqOutLatch(inited);
            let temp_flit <- cbSwitch.crossbarPorts[outPort].getFlit;
            $display("[cycle:%0d] CROSSBAR: eject flit (Data = %0d) from outputPort:%0d", tick_count, temp_flit.flitData, outPort);
            outputLatch[outPort].enq(temp_flit);
        endrule
    end

    /***************************** Router Interface ******************************/

    Vector#(NumPorts, DataLink) dataLinksDummy;
    for(DirIdx prt = 0; prt < fromInteger(valueOf(NumPorts)); prt = prt+1)
    begin
        dataLinksDummy[prt] =

        interface DataLink
            method ActionValue#(Flit) getFlit if(outputLatch[prt].notEmpty);
                Flit retFlit = outputLatch[prt].first();
                outputLatch[prt].deq();
                return retFlit;
            endmethod

            method Action putFlit(Flit flit) if(inputBuffer[prt].notFull);
                inputBuffer[prt].enq(flit);
            endmethod
        endinterface;
    end 

    interface dataLinks = dataLinksDummy;

    method Bool isInited;
        return inited; 
    endmethod

endmodule
