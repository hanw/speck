//
// Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
//
// On Tue Apr 26 18:18:03 EDT 2016
//
//
// Ports:
// Name                         I/O  size props
// RDY_dut_request_put            O     1
// dut_response_get               O    49
// RDY_dut_response_get           O     1
// RDY_setkey_put                 O     1
// CLK_clk_usr                    I     1 clock
// CLK                            I     1 clock
// RST_N                          I     1 reset
// dut_request_put                I    49
// setkey_put                     I    97
// EN_dut_request_put             I     1
// EN_setkey_put                  I     1
// EN_dut_response_get            I     1
//
// No combinational paths from inputs to outputs
//
//

`ifdef BSV_ASSIGNMENT_DELAY
`else
  `define BSV_ASSIGNMENT_DELAY
`endif

`ifdef BSV_POSITIVE_RESET
  `define BSV_RESET_VALUE 1'b1
  `define BSV_RESET_EDGE posedge
`else
  `define BSV_RESET_VALUE 1'b0
  `define BSV_RESET_EDGE negedge
`endif

module mkDutWrapper(CLK_clk_usr,
		    CLK,
		    RST_N,

		    dut_request_put,
		    EN_dut_request_put,
		    RDY_dut_request_put,

		    EN_dut_response_get,
		    dut_response_get,
		    RDY_dut_response_get,

		    setkey_put,
		    EN_setkey_put,
		    RDY_setkey_put);
  input  CLK_clk_usr;
  input  CLK;
  input  RST_N;

  // action method dut_request_put
  input  [48 : 0] dut_request_put;
  input  EN_dut_request_put;
  output RDY_dut_request_put;

  // actionvalue method dut_response_get
  input  EN_dut_response_get;
  output [48 : 0] dut_response_get;
  output RDY_dut_response_get;

  // action method setkey_put
  input  [96 : 0] setkey_put;
  input  EN_setkey_put;
  output RDY_setkey_put;

  // signals for module outputs
  wire [48 : 0] dut_response_get;
  wire RDY_dut_request_put, RDY_dut_response_get, RDY_setkey_put;

  // ports of submodule decrypt
  wire [95 : 0] decrypt$setKey_key;
  wire [47 : 0] decrypt$getResult, decrypt$inputMessage_text;
  wire decrypt$EN_getResult,
       decrypt$EN_inputMessage,
       decrypt$EN_setKey,
       decrypt$RDY_getResult,
       decrypt$RDY_inputMessage,
       decrypt$RDY_setKey;

  // ports of submodule encrypt
  wire [95 : 0] encrypt$setKey_key;
  wire [47 : 0] encrypt$getResult, encrypt$inputMessage_text;
  wire encrypt$EN_getResult,
       encrypt$EN_inputMessage,
       encrypt$EN_setKey,
       encrypt$RDY_getResult,
       encrypt$RDY_inputMessage,
       encrypt$RDY_setKey;

  // ports of submodule fromSyncQ
  wire [48 : 0] fromSyncQ$dD_OUT, fromSyncQ$sD_IN;
  wire fromSyncQ$dDEQ, fromSyncQ$dEMPTY_N, fromSyncQ$sENQ, fromSyncQ$sFULL_N;

  // ports of submodule rst_usr
  wire rst_usr$OUT_RST;

  // ports of submodule toKeySyncQ
  wire [96 : 0] toKeySyncQ$dD_OUT, toKeySyncQ$sD_IN;
  wire toKeySyncQ$dDEQ,
       toKeySyncQ$dEMPTY_N,
       toKeySyncQ$sENQ,
       toKeySyncQ$sFULL_N;

  // ports of submodule toSyncQ
  wire [48 : 0] toSyncQ$dD_OUT, toSyncQ$sD_IN;
  wire toSyncQ$dDEQ, toSyncQ$dEMPTY_N, toSyncQ$sENQ, toSyncQ$sFULL_N;

  // rule scheduling signals
  wire CAN_FIRE_RL_enqRequest,
       CAN_FIRE_RL_getResponseDecrypt,
       CAN_FIRE_RL_getResponseEncrypt,
       CAN_FIRE_RL_putKey,
       CAN_FIRE_dut_request_put,
       CAN_FIRE_dut_response_get,
       CAN_FIRE_setkey_put,
       WILL_FIRE_RL_enqRequest,
       WILL_FIRE_RL_getResponseDecrypt,
       WILL_FIRE_RL_getResponseEncrypt,
       WILL_FIRE_RL_putKey,
       WILL_FIRE_dut_request_put,
       WILL_FIRE_dut_response_get,
       WILL_FIRE_setkey_put;

  // inputs to muxes for submodule ports
  wire [48 : 0] MUX_fromSyncQ$enq_1__VAL_1, MUX_fromSyncQ$enq_1__VAL_2;

  // remaining internal signals
  wire toKeySyncQ_RDY_first__2_AND_IF_toKeySyncQ_firs_ETC___d28,
       toSyncQ_RDY_first_AND_IF_toSyncQ_first_BIT_0_T_ETC___d8;

  // action method dut_request_put
  assign RDY_dut_request_put = toSyncQ$sFULL_N ;
  assign CAN_FIRE_dut_request_put = toSyncQ$sFULL_N ;
  assign WILL_FIRE_dut_request_put = EN_dut_request_put ;

  // actionvalue method dut_response_get
  assign dut_response_get = fromSyncQ$dD_OUT ;
  assign RDY_dut_response_get = fromSyncQ$dEMPTY_N ;
  assign CAN_FIRE_dut_response_get = fromSyncQ$dEMPTY_N ;
  assign WILL_FIRE_dut_response_get = EN_dut_response_get ;

  // action method setkey_put
  assign RDY_setkey_put = toKeySyncQ$sFULL_N ;
  assign CAN_FIRE_setkey_put = toKeySyncQ$sFULL_N ;
  assign WILL_FIRE_setkey_put = EN_setkey_put ;

  // submodule decrypt
  mkSynthesizedDecrypt decrypt(.CLK(CLK_clk_usr),
			       .RST_N(rst_usr$OUT_RST),
			       .inputMessage_text(decrypt$inputMessage_text),
			       .setKey_key(decrypt$setKey_key),
			       .EN_setKey(decrypt$EN_setKey),
			       .EN_inputMessage(decrypt$EN_inputMessage),
			       .EN_getResult(decrypt$EN_getResult),
			       .RDY_setKey(decrypt$RDY_setKey),
			       .RDY_inputMessage(decrypt$RDY_inputMessage),
			       .getResult(decrypt$getResult),
			       .RDY_getResult(decrypt$RDY_getResult));

  // submodule encrypt
  mkSynthesizedEncrypt encrypt(.CLK(CLK_clk_usr),
			       .RST_N(rst_usr$OUT_RST),
			       .inputMessage_text(encrypt$inputMessage_text),
			       .setKey_key(encrypt$setKey_key),
			       .EN_setKey(encrypt$EN_setKey),
			       .EN_inputMessage(encrypt$EN_inputMessage),
			       .EN_getResult(encrypt$EN_getResult),
			       .RDY_setKey(encrypt$RDY_setKey),
			       .RDY_inputMessage(encrypt$RDY_inputMessage),
			       .getResult(encrypt$getResult),
			       .RDY_getResult(encrypt$RDY_getResult));

  // submodule fromSyncQ
  SyncFIFO #(.dataWidth(32'd49),
	     .depth(32'd2),
	     .indxWidth(32'd1)) fromSyncQ(.sCLK(CLK_clk_usr),
					  .dCLK(CLK),
					  .sRST(rst_usr$OUT_RST),
					  .sD_IN(fromSyncQ$sD_IN),
					  .sENQ(fromSyncQ$sENQ),
					  .dDEQ(fromSyncQ$dDEQ),
					  .sFULL_N(fromSyncQ$sFULL_N),
					  .dEMPTY_N(fromSyncQ$dEMPTY_N),
					  .dD_OUT(fromSyncQ$dD_OUT));

  // submodule rst_usr
  SyncResetA #(.RSTDELAY(32'd5)) rst_usr(.CLK(CLK_clk_usr),
					 .IN_RST(RST_N),
					 .OUT_RST(rst_usr$OUT_RST));

  // submodule toKeySyncQ
  SyncFIFO #(.dataWidth(32'd97),
	     .depth(32'd2),
	     .indxWidth(32'd1)) toKeySyncQ(.sCLK(CLK),
					   .dCLK(CLK_clk_usr),
					   .sRST(RST_N),
					   .sD_IN(toKeySyncQ$sD_IN),
					   .sENQ(toKeySyncQ$sENQ),
					   .dDEQ(toKeySyncQ$dDEQ),
					   .sFULL_N(toKeySyncQ$sFULL_N),
					   .dEMPTY_N(toKeySyncQ$dEMPTY_N),
					   .dD_OUT(toKeySyncQ$dD_OUT));

  // submodule toSyncQ
  SyncFIFO #(.dataWidth(32'd49),
	     .depth(32'd2),
	     .indxWidth(32'd1)) toSyncQ(.sCLK(CLK),
					.dCLK(CLK_clk_usr),
					.sRST(RST_N),
					.sD_IN(toSyncQ$sD_IN),
					.sENQ(toSyncQ$sENQ),
					.dDEQ(toSyncQ$dDEQ),
					.sFULL_N(toSyncQ$sFULL_N),
					.dEMPTY_N(toSyncQ$dEMPTY_N),
					.dD_OUT(toSyncQ$dD_OUT));

  // rule RL_getResponseEncrypt
  assign CAN_FIRE_RL_getResponseEncrypt =
	     fromSyncQ$sFULL_N && encrypt$RDY_getResult ;
  assign WILL_FIRE_RL_getResponseEncrypt = CAN_FIRE_RL_getResponseEncrypt ;

  // rule RL_getResponseDecrypt
  assign CAN_FIRE_RL_getResponseDecrypt =
	     fromSyncQ$sFULL_N && decrypt$RDY_getResult ;
  assign WILL_FIRE_RL_getResponseDecrypt =
	     CAN_FIRE_RL_getResponseDecrypt &&
	     !WILL_FIRE_RL_getResponseEncrypt ;

  // rule RL_putKey
  assign CAN_FIRE_RL_putKey =
	     toKeySyncQ$dEMPTY_N &&
	     toKeySyncQ_RDY_first__2_AND_IF_toKeySyncQ_firs_ETC___d28 ;
  assign WILL_FIRE_RL_putKey = CAN_FIRE_RL_putKey ;

  // rule RL_enqRequest
  assign CAN_FIRE_RL_enqRequest =
	     toSyncQ$dEMPTY_N &&
	     toSyncQ_RDY_first_AND_IF_toSyncQ_first_BIT_0_T_ETC___d8 ;
  assign WILL_FIRE_RL_enqRequest = CAN_FIRE_RL_enqRequest ;

  // inputs to muxes for submodule ports
  assign MUX_fromSyncQ$enq_1__VAL_1 = { encrypt$getResult, 1'd0 } ;
  assign MUX_fromSyncQ$enq_1__VAL_2 = { decrypt$getResult, 1'd1 } ;

  // submodule decrypt
  assign decrypt$inputMessage_text = toSyncQ$dD_OUT[48:1] ;
  assign decrypt$setKey_key = toKeySyncQ$dD_OUT[96:1] ;
  assign decrypt$EN_setKey = WILL_FIRE_RL_putKey && toKeySyncQ$dD_OUT[0] ;
  assign decrypt$EN_inputMessage =
	     WILL_FIRE_RL_enqRequest && toSyncQ$dD_OUT[0] ;
  assign decrypt$EN_getResult = WILL_FIRE_RL_getResponseDecrypt ;

  // submodule encrypt
  assign encrypt$inputMessage_text = toSyncQ$dD_OUT[48:1] ;
  assign encrypt$setKey_key = toKeySyncQ$dD_OUT[96:1] ;
  assign encrypt$EN_setKey = WILL_FIRE_RL_putKey && !toKeySyncQ$dD_OUT[0] ;
  assign encrypt$EN_inputMessage =
	     WILL_FIRE_RL_enqRequest && !toSyncQ$dD_OUT[0] ;
  assign encrypt$EN_getResult = CAN_FIRE_RL_getResponseEncrypt ;

  // submodule fromSyncQ
  assign fromSyncQ$sD_IN =
	     WILL_FIRE_RL_getResponseEncrypt ?
	       MUX_fromSyncQ$enq_1__VAL_1 :
	       MUX_fromSyncQ$enq_1__VAL_2 ;
  assign fromSyncQ$sENQ =
	     WILL_FIRE_RL_getResponseEncrypt ||
	     WILL_FIRE_RL_getResponseDecrypt ;
  assign fromSyncQ$dDEQ = EN_dut_response_get ;

  // submodule toKeySyncQ
  assign toKeySyncQ$sD_IN = setkey_put ;
  assign toKeySyncQ$sENQ = EN_setkey_put ;
  assign toKeySyncQ$dDEQ = CAN_FIRE_RL_putKey ;

  // submodule toSyncQ
  assign toSyncQ$sD_IN = dut_request_put ;
  assign toSyncQ$sENQ = EN_dut_request_put ;
  assign toSyncQ$dDEQ = CAN_FIRE_RL_enqRequest ;

  // remaining internal signals
  assign toKeySyncQ_RDY_first__2_AND_IF_toKeySyncQ_firs_ETC___d28 =
	     toKeySyncQ$dEMPTY_N &&
	     (toKeySyncQ$dD_OUT[0] ?
		decrypt$RDY_setKey :
		encrypt$RDY_setKey) ;
  assign toSyncQ_RDY_first_AND_IF_toSyncQ_first_BIT_0_T_ETC___d8 =
	     toSyncQ$dEMPTY_N &&
	     (toSyncQ$dD_OUT[0] ?
		decrypt$RDY_inputMessage :
		encrypt$RDY_inputMessage) ;
endmodule  // mkDutWrapper

