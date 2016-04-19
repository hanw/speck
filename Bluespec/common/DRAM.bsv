/* from DDR3OutstandingLimit.bsv */
import GetPut::*;
import ClientServer::*;
import FIFO::*;
import Vector::*;
import Memory::*;
import MemTypes::*;
import Cntrs::*;
/* for Speck */
import Speck::*;
import SpeckTypes::*;


typedef 32 MAX_OUTSTANDING_READS;

interface DRAM#(numeric type n, numeric type m, numeric type t);
   interface EncryptDecrypt#(N,M,T) encrypt;
   interface EncryptDecrypt#(N,M,T) decrypt;
endinterface

module mkConnectionOutstandingLimit#(DDR3_Client cli, DDR3_Server srv)(Empty);
   //Rate limit read requests so that we guarantee there is always space in the respbuf to
   //receive the data
   Count#(Bit#(TLog#(MAX_OUTSTANDING_READS))) outstanding <- mkCount(0);
   FIFO#(DDR3_Resp) respbuf <- mkSizedFIFO(valueof(MAX_OUTSTANDING_READS));

   rule request if (outstanding != fromInteger(valueof(MAX_OUTSTANDING_READS)-1));
      DDR3_Req req <- cli.request.get();
      srv.request.put(req);
      if (!req.write) begin
	 outstanding.incr(1);
      end
   endrule

   rule response;
      let x <- srv.response.get();
      respbuf.enq(x);
   endrule

   rule forward;
      let x <- toGet(respbuf).get();
      cli.response.put(x);
      outstanding.decr(1);
   endrule
endmodule



(* synthesize *)
module mkSynthesizedDRAM(DRAM#(N, M, T));
   /* this module populates the fifos in the encrypt/decrypt modules
    by reading directly from the DRAM */
   
   //DDR_Server ddr <- mkConnectionOutstandingLimit();
   /*TODO: removed synthesis boundary; is this okay?
   other route I went it making this mod synthesized and removing polymorphism
   I think this works since this is reading directly from mem 
    */
   
   EncryptDecrypt#(N, M, T) encrypt <- mkSynthesizedEncrypt();
   EncryptDecrypt#(N, M, T) decrypt <- mkSynthesizedEncrypt();
   
endmodule