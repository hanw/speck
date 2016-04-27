//
// Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
//
// On Tue Apr 26 20:37:53 EDT 2016
//
//
// Ports:
// Name                         I/O  size props
// RDY_setKey                     O     1
// RDY_inputMessage               O     1 reg
// getResult                      O    48 reg
// RDY_getResult                  O     1 reg
// CLK                            I     1 clock
// RST_N                          I     1 reset
// setKey_key                     I    96
// inputMessage_text              I    48 reg
// EN_setKey                      I     1
// EN_inputMessage                I     1
// EN_getResult                   I     1
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

module mkSynthesizedEncrypt(CLK,
			    RST_N,

			    setKey_key,
			    EN_setKey,
			    RDY_setKey,

			    inputMessage_text,
			    EN_inputMessage,
			    RDY_inputMessage,

			    EN_getResult,
			    getResult,
			    RDY_getResult);
  input  CLK;
  input  RST_N;

  // action method setKey
  input  [95 : 0] setKey_key;
  input  EN_setKey;
  output RDY_setKey;

  // action method inputMessage
  input  [47 : 0] inputMessage_text;
  input  EN_inputMessage;
  output RDY_inputMessage;

  // actionvalue method getResult
  input  EN_getResult;
  output [47 : 0] getResult;
  output RDY_getResult;

  // signals for module outputs
  wire [47 : 0] getResult;
  wire RDY_getResult, RDY_inputMessage, RDY_setKey;

  // register enc_alpha
  reg [4 : 0] enc_alpha;
  wire [4 : 0] enc_alpha$D_IN;
  wire enc_alpha$EN;

  // register enc_beta
  reg [4 : 0] enc_beta;
  wire [4 : 0] enc_beta$D_IN;
  wire enc_beta$EN;

  // register enc_k0
  reg [23 : 0] enc_k0;
  wire [23 : 0] enc_k0$D_IN;
  wire enc_k0$EN;

  // register enc_l_0
  reg [23 : 0] enc_l_0;
  wire [23 : 0] enc_l_0$D_IN;
  wire enc_l_0$EN;

  // register enc_l_1
  reg [23 : 0] enc_l_1;
  wire [23 : 0] enc_l_1$D_IN;
  wire enc_l_1$EN;

  // register enc_l_10
  reg [23 : 0] enc_l_10;
  wire [23 : 0] enc_l_10$D_IN;
  wire enc_l_10$EN;

  // register enc_l_11
  reg [23 : 0] enc_l_11;
  wire [23 : 0] enc_l_11$D_IN;
  wire enc_l_11$EN;

  // register enc_l_12
  reg [23 : 0] enc_l_12;
  wire [23 : 0] enc_l_12$D_IN;
  wire enc_l_12$EN;

  // register enc_l_13
  reg [23 : 0] enc_l_13;
  wire [23 : 0] enc_l_13$D_IN;
  wire enc_l_13$EN;

  // register enc_l_14
  reg [23 : 0] enc_l_14;
  wire [23 : 0] enc_l_14$D_IN;
  wire enc_l_14$EN;

  // register enc_l_15
  reg [23 : 0] enc_l_15;
  wire [23 : 0] enc_l_15$D_IN;
  wire enc_l_15$EN;

  // register enc_l_16
  reg [23 : 0] enc_l_16;
  wire [23 : 0] enc_l_16$D_IN;
  wire enc_l_16$EN;

  // register enc_l_17
  reg [23 : 0] enc_l_17;
  wire [23 : 0] enc_l_17$D_IN;
  wire enc_l_17$EN;

  // register enc_l_18
  reg [23 : 0] enc_l_18;
  wire [23 : 0] enc_l_18$D_IN;
  wire enc_l_18$EN;

  // register enc_l_19
  reg [23 : 0] enc_l_19;
  wire [23 : 0] enc_l_19$D_IN;
  wire enc_l_19$EN;

  // register enc_l_2
  reg [23 : 0] enc_l_2;
  wire [23 : 0] enc_l_2$D_IN;
  wire enc_l_2$EN;

  // register enc_l_20
  reg [23 : 0] enc_l_20;
  wire [23 : 0] enc_l_20$D_IN;
  wire enc_l_20$EN;

  // register enc_l_21
  reg [23 : 0] enc_l_21;
  wire [23 : 0] enc_l_21$D_IN;
  wire enc_l_21$EN;

  // register enc_l_22
  reg [23 : 0] enc_l_22;
  wire [23 : 0] enc_l_22$D_IN;
  wire enc_l_22$EN;

  // register enc_l_23
  reg [23 : 0] enc_l_23;
  wire [23 : 0] enc_l_23$D_IN;
  wire enc_l_23$EN;

  // register enc_l_24
  reg [23 : 0] enc_l_24;
  wire [23 : 0] enc_l_24$D_IN;
  wire enc_l_24$EN;

  // register enc_l_25
  reg [23 : 0] enc_l_25;
  wire [23 : 0] enc_l_25$D_IN;
  wire enc_l_25$EN;

  // register enc_l_3
  reg [23 : 0] enc_l_3;
  wire [23 : 0] enc_l_3$D_IN;
  wire enc_l_3$EN;

  // register enc_l_4
  reg [23 : 0] enc_l_4;
  wire [23 : 0] enc_l_4$D_IN;
  wire enc_l_4$EN;

  // register enc_l_5
  reg [23 : 0] enc_l_5;
  wire [23 : 0] enc_l_5$D_IN;
  wire enc_l_5$EN;

  // register enc_l_6
  reg [23 : 0] enc_l_6;
  wire [23 : 0] enc_l_6$D_IN;
  wire enc_l_6$EN;

  // register enc_l_7
  reg [23 : 0] enc_l_7;
  wire [23 : 0] enc_l_7$D_IN;
  wire enc_l_7$EN;

  // register enc_l_8
  reg [23 : 0] enc_l_8;
  wire [23 : 0] enc_l_8$D_IN;
  wire enc_l_8$EN;

  // register enc_l_9
  reg [23 : 0] enc_l_9;
  wire [23 : 0] enc_l_9$D_IN;
  wire enc_l_9$EN;

  // register enc_round
  reg [23 : 0] enc_round;
  wire [23 : 0] enc_round$D_IN;
  wire enc_round$EN;

  // register enc_roundkey
  reg [23 : 0] enc_roundkey;
  wire [23 : 0] enc_roundkey$D_IN;
  wire enc_roundkey$EN;

  // register enc_xyReg
  reg [47 : 0] enc_xyReg;
  wire [47 : 0] enc_xyReg$D_IN;
  wire enc_xyReg$EN;

  // ports of submodule enc_ciphertextFIFO
  wire [47 : 0] enc_ciphertextFIFO$D_IN, enc_ciphertextFIFO$D_OUT;
  wire enc_ciphertextFIFO$CLR,
       enc_ciphertextFIFO$DEQ,
       enc_ciphertextFIFO$EMPTY_N,
       enc_ciphertextFIFO$ENQ,
       enc_ciphertextFIFO$FULL_N;

  // ports of submodule enc_plaintextFIFO
  wire [47 : 0] enc_plaintextFIFO$D_IN, enc_plaintextFIFO$D_OUT;
  wire enc_plaintextFIFO$CLR,
       enc_plaintextFIFO$DEQ,
       enc_plaintextFIFO$EMPTY_N,
       enc_plaintextFIFO$ENQ,
       enc_plaintextFIFO$FULL_N;

  // rule scheduling signals
  wire CAN_FIRE_RL_enc_pipeline,
       CAN_FIRE_getResult,
       CAN_FIRE_inputMessage,
       CAN_FIRE_setKey,
       WILL_FIRE_RL_enc_pipeline,
       WILL_FIRE_getResult,
       WILL_FIRE_inputMessage,
       WILL_FIRE_setKey;

  // inputs to muxes for submodule ports
  wire [23 : 0] MUX_enc_l_0$write_1__VAL_1, MUX_enc_roundkey$write_1__VAL_2;
  wire MUX_enc_l_0$write_1__SEL_1,
       MUX_enc_l_1$write_1__SEL_1,
       MUX_enc_l_2$write_1__SEL_1;

  // remaining internal signals
  reg [23 : 0] SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51;
  wire [23 : 0] IF_24_MINUS_enc_alpha_7_8_BIT_2_1_THEN_IF_24_M_ETC___d309,
		IF_24_MINUS_enc_alpha_7_8_BIT_2_1_THEN_IF_24_M_ETC___d79,
		IF_24_MINUS_enc_alpha_7_8_BIT_3_0_THEN_IF_24_M_ETC___d111,
		IF_24_MINUS_enc_alpha_7_8_BIT_3_0_THEN_IF_24_M_ETC___d143,
		IF_24_MINUS_enc_alpha_7_8_BIT_3_0_THEN_IF_24_M_ETC___d341,
		IF_24_MINUS_enc_alpha_7_8_BIT_3_0_THEN_IF_24_M_ETC___d373,
		IF_24_MINUS_enc_alpha_7_8_BIT_4_9_THEN_IF_24_M_ETC___d379,
		IF_enc_beta_74_BIT_2_77_THEN_IF_enc_beta_74_BI_ETC___d207,
		IF_enc_beta_74_BIT_2_77_THEN_IF_enc_beta_74_BI_ETC___d407,
		IF_enc_beta_74_BIT_3_76_THEN_IF_enc_beta_74_BI_ETC___d239,
		IF_enc_beta_74_BIT_3_76_THEN_IF_enc_beta_74_BI_ETC___d271,
		IF_enc_beta_74_BIT_3_76_THEN_IF_enc_beta_74_BI_ETC___d439,
		IF_enc_beta_74_BIT_3_76_THEN_IF_enc_beta_74_BI_ETC___d471,
		IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281,
		IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377,
		b__h14393,
		b__h25211,
		b__h3514,
		b__h35992,
		x__h2443;
  wire [4 : 0] _24_MINUS_enc_alpha_7___d18;

  // action method setKey
  assign RDY_setKey = !enc_plaintextFIFO$EMPTY_N ;
  assign CAN_FIRE_setKey = !enc_plaintextFIFO$EMPTY_N ;
  assign WILL_FIRE_setKey = EN_setKey ;

  // action method inputMessage
  assign RDY_inputMessage = enc_plaintextFIFO$FULL_N ;
  assign CAN_FIRE_inputMessage = enc_plaintextFIFO$FULL_N ;
  assign WILL_FIRE_inputMessage = EN_inputMessage ;

  // actionvalue method getResult
  assign getResult = enc_ciphertextFIFO$D_OUT ;
  assign RDY_getResult = enc_ciphertextFIFO$EMPTY_N ;
  assign CAN_FIRE_getResult = enc_ciphertextFIFO$EMPTY_N ;
  assign WILL_FIRE_getResult = EN_getResult ;

  // submodule enc_ciphertextFIFO
  FIFO2 #(.width(32'd48), .guarded(32'd1)) enc_ciphertextFIFO(.RST(RST_N),
							      .CLK(CLK),
							      .D_IN(enc_ciphertextFIFO$D_IN),
							      .ENQ(enc_ciphertextFIFO$ENQ),
							      .DEQ(enc_ciphertextFIFO$DEQ),
							      .CLR(enc_ciphertextFIFO$CLR),
							      .D_OUT(enc_ciphertextFIFO$D_OUT),
							      .FULL_N(enc_ciphertextFIFO$FULL_N),
							      .EMPTY_N(enc_ciphertextFIFO$EMPTY_N));

  // submodule enc_plaintextFIFO
  FIFO2 #(.width(32'd48), .guarded(32'd1)) enc_plaintextFIFO(.RST(RST_N),
							     .CLK(CLK),
							     .D_IN(enc_plaintextFIFO$D_IN),
							     .ENQ(enc_plaintextFIFO$ENQ),
							     .DEQ(enc_plaintextFIFO$DEQ),
							     .CLR(enc_plaintextFIFO$CLR),
							     .D_OUT(enc_plaintextFIFO$D_OUT),
							     .FULL_N(enc_plaintextFIFO$FULL_N),
							     .EMPTY_N(enc_plaintextFIFO$EMPTY_N));

  // rule RL_enc_pipeline
  assign CAN_FIRE_RL_enc_pipeline =
	     (enc_round != 24'd22 ||
	      enc_ciphertextFIFO$FULL_N && enc_plaintextFIFO$EMPTY_N) &&
	     enc_plaintextFIFO$EMPTY_N ;
  assign WILL_FIRE_RL_enc_pipeline = CAN_FIRE_RL_enc_pipeline ;

  // inputs to muxes for submodule ports
  assign MUX_enc_l_0$write_1__SEL_1 =
	     WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd0 ;
  assign MUX_enc_l_1$write_1__SEL_1 =
	     WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd1 ;
  assign MUX_enc_l_2$write_1__SEL_1 =
	     WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd2 ;
  assign MUX_enc_l_0$write_1__VAL_1 = b__h3514 + enc_roundkey ^ enc_round ;
  assign MUX_enc_roundkey$write_1__VAL_2 =
	     (enc_round == 24'd22) ?
	       enc_k0 :
	       b__h14393 ^ b__h3514 + enc_roundkey ^ enc_round ;

  // register enc_alpha
  assign enc_alpha$D_IN = 5'h0 ;
  assign enc_alpha$EN = 1'b0 ;

  // register enc_beta
  assign enc_beta$D_IN = 5'h0 ;
  assign enc_beta$EN = 1'b0 ;

  // register enc_k0
  assign enc_k0$D_IN = setKey_key[23:0] ;
  assign enc_k0$EN = EN_setKey ;

  // register enc_l_0
  assign enc_l_0$D_IN =
	     MUX_enc_l_0$write_1__SEL_1 ?
	       MUX_enc_l_0$write_1__VAL_1 :
	       setKey_key[47:24] ;
  assign enc_l_0$EN =
	     WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd0 || EN_setKey ;

  // register enc_l_1
  assign enc_l_1$D_IN =
	     MUX_enc_l_1$write_1__SEL_1 ?
	       MUX_enc_l_0$write_1__VAL_1 :
	       setKey_key[71:48] ;
  assign enc_l_1$EN =
	     WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd1 || EN_setKey ;

  // register enc_l_10
  assign enc_l_10$D_IN = MUX_enc_l_0$write_1__VAL_1 ;
  assign enc_l_10$EN = WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd10 ;

  // register enc_l_11
  assign enc_l_11$D_IN = MUX_enc_l_0$write_1__VAL_1 ;
  assign enc_l_11$EN = WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd11 ;

  // register enc_l_12
  assign enc_l_12$D_IN = MUX_enc_l_0$write_1__VAL_1 ;
  assign enc_l_12$EN = WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd12 ;

  // register enc_l_13
  assign enc_l_13$D_IN = MUX_enc_l_0$write_1__VAL_1 ;
  assign enc_l_13$EN = WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd13 ;

  // register enc_l_14
  assign enc_l_14$D_IN = MUX_enc_l_0$write_1__VAL_1 ;
  assign enc_l_14$EN = WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd14 ;

  // register enc_l_15
  assign enc_l_15$D_IN = MUX_enc_l_0$write_1__VAL_1 ;
  assign enc_l_15$EN = WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd15 ;

  // register enc_l_16
  assign enc_l_16$D_IN = MUX_enc_l_0$write_1__VAL_1 ;
  assign enc_l_16$EN = WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd16 ;

  // register enc_l_17
  assign enc_l_17$D_IN = MUX_enc_l_0$write_1__VAL_1 ;
  assign enc_l_17$EN = WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd17 ;

  // register enc_l_18
  assign enc_l_18$D_IN = MUX_enc_l_0$write_1__VAL_1 ;
  assign enc_l_18$EN = WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd18 ;

  // register enc_l_19
  assign enc_l_19$D_IN = MUX_enc_l_0$write_1__VAL_1 ;
  assign enc_l_19$EN = WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd19 ;

  // register enc_l_2
  assign enc_l_2$D_IN =
	     MUX_enc_l_2$write_1__SEL_1 ?
	       MUX_enc_l_0$write_1__VAL_1 :
	       setKey_key[95:72] ;
  assign enc_l_2$EN =
	     WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd2 || EN_setKey ;

  // register enc_l_20
  assign enc_l_20$D_IN = MUX_enc_l_0$write_1__VAL_1 ;
  assign enc_l_20$EN = WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd20 ;

  // register enc_l_21
  assign enc_l_21$D_IN = MUX_enc_l_0$write_1__VAL_1 ;
  assign enc_l_21$EN = WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd21 ;

  // register enc_l_22
  assign enc_l_22$D_IN = MUX_enc_l_0$write_1__VAL_1 ;
  assign enc_l_22$EN = WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd22 ;

  // register enc_l_23
  assign enc_l_23$D_IN = MUX_enc_l_0$write_1__VAL_1 ;
  assign enc_l_23$EN = WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd23 ;

  // register enc_l_24
  assign enc_l_24$D_IN = MUX_enc_l_0$write_1__VAL_1 ;
  assign enc_l_24$EN = WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd24 ;

  // register enc_l_25
  assign enc_l_25$D_IN = MUX_enc_l_0$write_1__VAL_1 ;
  assign enc_l_25$EN = WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd25 ;

  // register enc_l_3
  assign enc_l_3$D_IN = MUX_enc_l_0$write_1__VAL_1 ;
  assign enc_l_3$EN = WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd3 ;

  // register enc_l_4
  assign enc_l_4$D_IN = MUX_enc_l_0$write_1__VAL_1 ;
  assign enc_l_4$EN = WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd4 ;

  // register enc_l_5
  assign enc_l_5$D_IN = MUX_enc_l_0$write_1__VAL_1 ;
  assign enc_l_5$EN = WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd5 ;

  // register enc_l_6
  assign enc_l_6$D_IN = MUX_enc_l_0$write_1__VAL_1 ;
  assign enc_l_6$EN = WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd6 ;

  // register enc_l_7
  assign enc_l_7$D_IN = MUX_enc_l_0$write_1__VAL_1 ;
  assign enc_l_7$EN = WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd7 ;

  // register enc_l_8
  assign enc_l_8$D_IN = MUX_enc_l_0$write_1__VAL_1 ;
  assign enc_l_8$EN = WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd8 ;

  // register enc_l_9
  assign enc_l_9$D_IN = MUX_enc_l_0$write_1__VAL_1 ;
  assign enc_l_9$EN = WILL_FIRE_RL_enc_pipeline && x__h2443 == 24'd9 ;

  // register enc_round
  assign enc_round$D_IN = (enc_round == 24'd22) ? 24'd0 : enc_round + 24'd1 ;
  assign enc_round$EN = CAN_FIRE_RL_enc_pipeline ;

  // register enc_roundkey
  assign enc_roundkey$D_IN =
	     EN_setKey ? setKey_key[23:0] : MUX_enc_roundkey$write_1__VAL_2 ;
  assign enc_roundkey$EN = EN_setKey || WILL_FIRE_RL_enc_pipeline ;

  // register enc_xyReg
  assign enc_xyReg$D_IN =
	     { IF_24_MINUS_enc_alpha_7_8_BIT_4_9_THEN_IF_24_M_ETC___d379,
	       b__h35992 ^
	       IF_24_MINUS_enc_alpha_7_8_BIT_4_9_THEN_IF_24_M_ETC___d379 } ;
  assign enc_xyReg$EN = WILL_FIRE_RL_enc_pipeline && enc_round != 24'd22 ;

  // submodule enc_ciphertextFIFO
  assign enc_ciphertextFIFO$D_IN =
	     { IF_24_MINUS_enc_alpha_7_8_BIT_4_9_THEN_IF_24_M_ETC___d379,
	       b__h35992 ^
	       IF_24_MINUS_enc_alpha_7_8_BIT_4_9_THEN_IF_24_M_ETC___d379 } ;
  assign enc_ciphertextFIFO$ENQ =
	     WILL_FIRE_RL_enc_pipeline && enc_round == 24'd22 ;
  assign enc_ciphertextFIFO$DEQ = EN_getResult ;
  assign enc_ciphertextFIFO$CLR = 1'b0 ;

  // submodule enc_plaintextFIFO
  assign enc_plaintextFIFO$D_IN = inputMessage_text ;
  assign enc_plaintextFIFO$ENQ = EN_inputMessage ;
  assign enc_plaintextFIFO$DEQ =
	     WILL_FIRE_RL_enc_pipeline && enc_round == 24'd22 ;
  assign enc_plaintextFIFO$CLR = 1'b0 ;

  // remaining internal signals
  assign IF_24_MINUS_enc_alpha_7_8_BIT_2_1_THEN_IF_24_M_ETC___d309 =
	     _24_MINUS_enc_alpha_7___d18[2] ?
	       (_24_MINUS_enc_alpha_7___d18[1] ?
		  (_24_MINUS_enc_alpha_7___d18[0] ?
		     { IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[16:0],
		       IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[23:17] } :
		     { IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[17:0],
		       IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[23:18] }) :
		  (_24_MINUS_enc_alpha_7___d18[0] ?
		     { IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[18:0],
		       IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[23:19] } :
		     { IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[19:0],
		       IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[23:20] })) :
	       (_24_MINUS_enc_alpha_7___d18[1] ?
		  (_24_MINUS_enc_alpha_7___d18[0] ?
		     { IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[20:0],
		       IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[23:21] } :
		     { IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[21:0],
		       IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[23:22] }) :
		  (_24_MINUS_enc_alpha_7___d18[0] ?
		     { IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[22:0],
		       IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[23] } :
		     IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281)) ;
  assign IF_24_MINUS_enc_alpha_7_8_BIT_2_1_THEN_IF_24_M_ETC___d79 =
	     _24_MINUS_enc_alpha_7___d18[2] ?
	       (_24_MINUS_enc_alpha_7___d18[1] ?
		  (_24_MINUS_enc_alpha_7___d18[0] ?
		     { SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[16:0],
		       SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[23:17] } :
		     { SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[17:0],
		       SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[23:18] }) :
		  (_24_MINUS_enc_alpha_7___d18[0] ?
		     { SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[18:0],
		       SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[23:19] } :
		     { SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[19:0],
		       SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[23:20] })) :
	       (_24_MINUS_enc_alpha_7___d18[1] ?
		  (_24_MINUS_enc_alpha_7___d18[0] ?
		     { SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[20:0],
		       SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[23:21] } :
		     { SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[21:0],
		       SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[23:22] }) :
		  (_24_MINUS_enc_alpha_7___d18[0] ?
		     { SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[22:0],
		       SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[23] } :
		     SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51)) ;
  assign IF_24_MINUS_enc_alpha_7_8_BIT_3_0_THEN_IF_24_M_ETC___d111 =
	     _24_MINUS_enc_alpha_7___d18[3] ?
	       IF_24_MINUS_enc_alpha_7_8_BIT_2_1_THEN_IF_24_M_ETC___d79 :
	       (_24_MINUS_enc_alpha_7___d18[2] ?
		  (_24_MINUS_enc_alpha_7___d18[1] ?
		     (_24_MINUS_enc_alpha_7___d18[0] ?
			{ SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[0],
			  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[23:1] } :
			{ SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[1:0],
			  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[23:2] }) :
		     (_24_MINUS_enc_alpha_7___d18[0] ?
			{ SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[2:0],
			  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[23:3] } :
			{ SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[3:0],
			  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[23:4] })) :
		  (_24_MINUS_enc_alpha_7___d18[1] ?
		     (_24_MINUS_enc_alpha_7___d18[0] ?
			{ SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[4:0],
			  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[23:5] } :
			{ SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[5:0],
			  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[23:6] }) :
		     (_24_MINUS_enc_alpha_7___d18[0] ?
			{ SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[6:0],
			  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[23:7] } :
			{ SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[7:0],
			  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[23:8] }))) ;
  assign IF_24_MINUS_enc_alpha_7_8_BIT_3_0_THEN_IF_24_M_ETC___d143 =
	     _24_MINUS_enc_alpha_7___d18[3] ?
	       (_24_MINUS_enc_alpha_7___d18[2] ?
		  (_24_MINUS_enc_alpha_7___d18[1] ?
		     (_24_MINUS_enc_alpha_7___d18[0] ?
			{ SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[8:0],
			  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[23:9] } :
			{ SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[9:0],
			  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[23:10] }) :
		     (_24_MINUS_enc_alpha_7___d18[0] ?
			{ SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[10:0],
			  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[23:11] } :
			{ SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[11:0],
			  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[23:12] })) :
		  (_24_MINUS_enc_alpha_7___d18[1] ?
		     (_24_MINUS_enc_alpha_7___d18[0] ?
			{ SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[12:0],
			  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[23:13] } :
			{ SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[13:0],
			  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[23:14] }) :
		     (_24_MINUS_enc_alpha_7___d18[0] ?
			{ SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[14:0],
			  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[23:15] } :
			{ SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[15:0],
			  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51[23:16] }))) :
	       IF_24_MINUS_enc_alpha_7_8_BIT_2_1_THEN_IF_24_M_ETC___d79 ;
  assign IF_24_MINUS_enc_alpha_7_8_BIT_3_0_THEN_IF_24_M_ETC___d341 =
	     _24_MINUS_enc_alpha_7___d18[3] ?
	       IF_24_MINUS_enc_alpha_7_8_BIT_2_1_THEN_IF_24_M_ETC___d309 :
	       (_24_MINUS_enc_alpha_7___d18[2] ?
		  (_24_MINUS_enc_alpha_7___d18[1] ?
		     (_24_MINUS_enc_alpha_7___d18[0] ?
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[23:1] } :
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[1:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[23:2] }) :
		     (_24_MINUS_enc_alpha_7___d18[0] ?
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[2:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[23:3] } :
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[3:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[23:4] })) :
		  (_24_MINUS_enc_alpha_7___d18[1] ?
		     (_24_MINUS_enc_alpha_7___d18[0] ?
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[4:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[23:5] } :
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[5:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[23:6] }) :
		     (_24_MINUS_enc_alpha_7___d18[0] ?
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[6:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[23:7] } :
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[7:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[23:8] }))) ;
  assign IF_24_MINUS_enc_alpha_7_8_BIT_3_0_THEN_IF_24_M_ETC___d373 =
	     _24_MINUS_enc_alpha_7___d18[3] ?
	       (_24_MINUS_enc_alpha_7___d18[2] ?
		  (_24_MINUS_enc_alpha_7___d18[1] ?
		     (_24_MINUS_enc_alpha_7___d18[0] ?
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[8:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[23:9] } :
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[9:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[23:10] }) :
		     (_24_MINUS_enc_alpha_7___d18[0] ?
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[10:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[23:11] } :
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[11:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[23:12] })) :
		  (_24_MINUS_enc_alpha_7___d18[1] ?
		     (_24_MINUS_enc_alpha_7___d18[0] ?
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[12:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[23:13] } :
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[13:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[23:14] }) :
		     (_24_MINUS_enc_alpha_7___d18[0] ?
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[14:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[23:15] } :
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[15:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281[23:16] }))) :
	       IF_24_MINUS_enc_alpha_7_8_BIT_2_1_THEN_IF_24_M_ETC___d309 ;
  assign IF_24_MINUS_enc_alpha_7_8_BIT_4_9_THEN_IF_24_M_ETC___d379 =
	     b__h25211 +
	     IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377 ^
	     enc_roundkey ;
  assign IF_enc_beta_74_BIT_2_77_THEN_IF_enc_beta_74_BI_ETC___d207 =
	     enc_beta[2] ?
	       (enc_beta[1] ?
		  (enc_beta[0] ?
		     { enc_roundkey[16:0], enc_roundkey[23:17] } :
		     { enc_roundkey[17:0], enc_roundkey[23:18] }) :
		  (enc_beta[0] ?
		     { enc_roundkey[18:0], enc_roundkey[23:19] } :
		     { enc_roundkey[19:0], enc_roundkey[23:20] })) :
	       (enc_beta[1] ?
		  (enc_beta[0] ?
		     { enc_roundkey[20:0], enc_roundkey[23:21] } :
		     { enc_roundkey[21:0], enc_roundkey[23:22] }) :
		  (enc_beta[0] ?
		     { enc_roundkey[22:0], enc_roundkey[23] } :
		     enc_roundkey)) ;
  assign IF_enc_beta_74_BIT_2_77_THEN_IF_enc_beta_74_BI_ETC___d407 =
	     enc_beta[2] ?
	       (enc_beta[1] ?
		  (enc_beta[0] ?
		     { IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[16:0],
		       IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[23:17] } :
		     { IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[17:0],
		       IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[23:18] }) :
		  (enc_beta[0] ?
		     { IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[18:0],
		       IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[23:19] } :
		     { IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[19:0],
		       IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[23:20] })) :
	       (enc_beta[1] ?
		  (enc_beta[0] ?
		     { IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[20:0],
		       IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[23:21] } :
		     { IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[21:0],
		       IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[23:22] }) :
		  (enc_beta[0] ?
		     { IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[22:0],
		       IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[23] } :
		     IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377)) ;
  assign IF_enc_beta_74_BIT_3_76_THEN_IF_enc_beta_74_BI_ETC___d239 =
	     enc_beta[3] ?
	       IF_enc_beta_74_BIT_2_77_THEN_IF_enc_beta_74_BI_ETC___d207 :
	       (enc_beta[2] ?
		  (enc_beta[1] ?
		     (enc_beta[0] ?
			{ enc_roundkey[0], enc_roundkey[23:1] } :
			{ enc_roundkey[1:0], enc_roundkey[23:2] }) :
		     (enc_beta[0] ?
			{ enc_roundkey[2:0], enc_roundkey[23:3] } :
			{ enc_roundkey[3:0], enc_roundkey[23:4] })) :
		  (enc_beta[1] ?
		     (enc_beta[0] ?
			{ enc_roundkey[4:0], enc_roundkey[23:5] } :
			{ enc_roundkey[5:0], enc_roundkey[23:6] }) :
		     (enc_beta[0] ?
			{ enc_roundkey[6:0], enc_roundkey[23:7] } :
			{ enc_roundkey[7:0], enc_roundkey[23:8] }))) ;
  assign IF_enc_beta_74_BIT_3_76_THEN_IF_enc_beta_74_BI_ETC___d271 =
	     enc_beta[3] ?
	       (enc_beta[2] ?
		  (enc_beta[1] ?
		     (enc_beta[0] ?
			{ enc_roundkey[8:0], enc_roundkey[23:9] } :
			{ enc_roundkey[9:0], enc_roundkey[23:10] }) :
		     (enc_beta[0] ?
			{ enc_roundkey[10:0], enc_roundkey[23:11] } :
			{ enc_roundkey[11:0], enc_roundkey[23:12] })) :
		  (enc_beta[1] ?
		     (enc_beta[0] ?
			{ enc_roundkey[12:0], enc_roundkey[23:13] } :
			{ enc_roundkey[13:0], enc_roundkey[23:14] }) :
		     (enc_beta[0] ?
			{ enc_roundkey[14:0], enc_roundkey[23:15] } :
			{ enc_roundkey[15:0], enc_roundkey[23:16] }))) :
	       IF_enc_beta_74_BIT_2_77_THEN_IF_enc_beta_74_BI_ETC___d207 ;
  assign IF_enc_beta_74_BIT_3_76_THEN_IF_enc_beta_74_BI_ETC___d439 =
	     enc_beta[3] ?
	       IF_enc_beta_74_BIT_2_77_THEN_IF_enc_beta_74_BI_ETC___d407 :
	       (enc_beta[2] ?
		  (enc_beta[1] ?
		     (enc_beta[0] ?
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[23:1] } :
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[1:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[23:2] }) :
		     (enc_beta[0] ?
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[2:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[23:3] } :
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[3:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[23:4] })) :
		  (enc_beta[1] ?
		     (enc_beta[0] ?
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[4:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[23:5] } :
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[5:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[23:6] }) :
		     (enc_beta[0] ?
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[6:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[23:7] } :
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[7:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[23:8] }))) ;
  assign IF_enc_beta_74_BIT_3_76_THEN_IF_enc_beta_74_BI_ETC___d471 =
	     enc_beta[3] ?
	       (enc_beta[2] ?
		  (enc_beta[1] ?
		     (enc_beta[0] ?
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[8:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[23:9] } :
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[9:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[23:10] }) :
		     (enc_beta[0] ?
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[10:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[23:11] } :
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[11:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[23:12] })) :
		  (enc_beta[1] ?
		     (enc_beta[0] ?
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[12:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[23:13] } :
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[13:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[23:14] }) :
		     (enc_beta[0] ?
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[14:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[23:15] } :
			{ IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[15:0],
			  IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377[23:16] }))) :
	       IF_enc_beta_74_BIT_2_77_THEN_IF_enc_beta_74_BI_ETC___d407 ;
  assign IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d281 =
	     (enc_round == 24'd0) ?
	       enc_plaintextFIFO$D_OUT[47:24] :
	       enc_xyReg[47:24] ;
  assign IF_enc_round_EQ_0_THEN_enc_plaintextFIFO_first_ETC___d377 =
	     (enc_round == 24'd0) ?
	       enc_plaintextFIFO$D_OUT[23:0] :
	       enc_xyReg[23:0] ;
  assign _24_MINUS_enc_alpha_7___d18 = 5'd24 - enc_alpha ;
  assign b__h14393 =
	     enc_beta[4] ?
	       IF_enc_beta_74_BIT_3_76_THEN_IF_enc_beta_74_BI_ETC___d239 :
	       IF_enc_beta_74_BIT_3_76_THEN_IF_enc_beta_74_BI_ETC___d271 ;
  assign b__h25211 =
	     _24_MINUS_enc_alpha_7___d18[4] ?
	       IF_24_MINUS_enc_alpha_7_8_BIT_3_0_THEN_IF_24_M_ETC___d341 :
	       IF_24_MINUS_enc_alpha_7_8_BIT_3_0_THEN_IF_24_M_ETC___d373 ;
  assign b__h3514 =
	     _24_MINUS_enc_alpha_7___d18[4] ?
	       IF_24_MINUS_enc_alpha_7_8_BIT_3_0_THEN_IF_24_M_ETC___d111 :
	       IF_24_MINUS_enc_alpha_7_8_BIT_3_0_THEN_IF_24_M_ETC___d143 ;
  assign b__h35992 =
	     enc_beta[4] ?
	       IF_enc_beta_74_BIT_3_76_THEN_IF_enc_beta_74_BI_ETC___d439 :
	       IF_enc_beta_74_BIT_3_76_THEN_IF_enc_beta_74_BI_ETC___d471 ;
  assign x__h2443 = enc_round + 24'd4 - 24'd1 ;
  always@(enc_round or
	  enc_l_0 or
	  enc_l_1 or
	  enc_l_2 or
	  enc_l_3 or
	  enc_l_4 or
	  enc_l_5 or
	  enc_l_6 or
	  enc_l_7 or
	  enc_l_8 or
	  enc_l_9 or
	  enc_l_10 or
	  enc_l_11 or
	  enc_l_12 or
	  enc_l_13 or
	  enc_l_14 or
	  enc_l_15 or
	  enc_l_16 or
	  enc_l_17 or
	  enc_l_18 or
	  enc_l_19 or
	  enc_l_20 or
	  enc_l_21 or enc_l_22 or enc_l_23 or enc_l_24 or enc_l_25)
  begin
    case (enc_round)
      24'd0:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_0;
      24'd1:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_1;
      24'd2:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_2;
      24'd3:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_3;
      24'd4:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_4;
      24'd5:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_5;
      24'd6:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_6;
      24'd7:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_7;
      24'd8:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_8;
      24'd9:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_9;
      24'd10:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_10;
      24'd11:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_11;
      24'd12:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_12;
      24'd13:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_13;
      24'd14:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_14;
      24'd15:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_15;
      24'd16:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_16;
      24'd17:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_17;
      24'd18:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_18;
      24'd19:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_19;
      24'd20:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_20;
      24'd21:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_21;
      24'd22:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_22;
      24'd23:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_23;
      24'd24:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_24;
      24'd25:
	  SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 = enc_l_25;
      default: SEL_ARR_enc_l_0_4_enc_l_1_5_enc_l_2_6_enc_l_3__ETC___d51 =
		   24'b101010101010101010101010 /* unspecified value */ ;
    endcase
  end

  // handling of inlined registers

  always@(posedge CLK)
  begin
    if (RST_N == `BSV_RESET_VALUE)
      begin
        enc_alpha <= `BSV_ASSIGNMENT_DELAY 5'd8;
	enc_beta <= `BSV_ASSIGNMENT_DELAY 5'd3;
	enc_k0 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_0 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_1 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_10 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_11 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_12 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_13 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_14 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_15 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_16 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_17 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_18 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_19 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_2 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_20 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_21 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_22 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_23 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_24 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_25 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_3 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_4 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_5 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_6 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_7 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_8 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_l_9 <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_round <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_roundkey <= `BSV_ASSIGNMENT_DELAY 24'd0;
	enc_xyReg <= `BSV_ASSIGNMENT_DELAY 48'd0;
      end
    else
      begin
        if (enc_alpha$EN) enc_alpha <= `BSV_ASSIGNMENT_DELAY enc_alpha$D_IN;
	if (enc_beta$EN) enc_beta <= `BSV_ASSIGNMENT_DELAY enc_beta$D_IN;
	if (enc_k0$EN) enc_k0 <= `BSV_ASSIGNMENT_DELAY enc_k0$D_IN;
	if (enc_l_0$EN) enc_l_0 <= `BSV_ASSIGNMENT_DELAY enc_l_0$D_IN;
	if (enc_l_1$EN) enc_l_1 <= `BSV_ASSIGNMENT_DELAY enc_l_1$D_IN;
	if (enc_l_10$EN) enc_l_10 <= `BSV_ASSIGNMENT_DELAY enc_l_10$D_IN;
	if (enc_l_11$EN) enc_l_11 <= `BSV_ASSIGNMENT_DELAY enc_l_11$D_IN;
	if (enc_l_12$EN) enc_l_12 <= `BSV_ASSIGNMENT_DELAY enc_l_12$D_IN;
	if (enc_l_13$EN) enc_l_13 <= `BSV_ASSIGNMENT_DELAY enc_l_13$D_IN;
	if (enc_l_14$EN) enc_l_14 <= `BSV_ASSIGNMENT_DELAY enc_l_14$D_IN;
	if (enc_l_15$EN) enc_l_15 <= `BSV_ASSIGNMENT_DELAY enc_l_15$D_IN;
	if (enc_l_16$EN) enc_l_16 <= `BSV_ASSIGNMENT_DELAY enc_l_16$D_IN;
	if (enc_l_17$EN) enc_l_17 <= `BSV_ASSIGNMENT_DELAY enc_l_17$D_IN;
	if (enc_l_18$EN) enc_l_18 <= `BSV_ASSIGNMENT_DELAY enc_l_18$D_IN;
	if (enc_l_19$EN) enc_l_19 <= `BSV_ASSIGNMENT_DELAY enc_l_19$D_IN;
	if (enc_l_2$EN) enc_l_2 <= `BSV_ASSIGNMENT_DELAY enc_l_2$D_IN;
	if (enc_l_20$EN) enc_l_20 <= `BSV_ASSIGNMENT_DELAY enc_l_20$D_IN;
	if (enc_l_21$EN) enc_l_21 <= `BSV_ASSIGNMENT_DELAY enc_l_21$D_IN;
	if (enc_l_22$EN) enc_l_22 <= `BSV_ASSIGNMENT_DELAY enc_l_22$D_IN;
	if (enc_l_23$EN) enc_l_23 <= `BSV_ASSIGNMENT_DELAY enc_l_23$D_IN;
	if (enc_l_24$EN) enc_l_24 <= `BSV_ASSIGNMENT_DELAY enc_l_24$D_IN;
	if (enc_l_25$EN) enc_l_25 <= `BSV_ASSIGNMENT_DELAY enc_l_25$D_IN;
	if (enc_l_3$EN) enc_l_3 <= `BSV_ASSIGNMENT_DELAY enc_l_3$D_IN;
	if (enc_l_4$EN) enc_l_4 <= `BSV_ASSIGNMENT_DELAY enc_l_4$D_IN;
	if (enc_l_5$EN) enc_l_5 <= `BSV_ASSIGNMENT_DELAY enc_l_5$D_IN;
	if (enc_l_6$EN) enc_l_6 <= `BSV_ASSIGNMENT_DELAY enc_l_6$D_IN;
	if (enc_l_7$EN) enc_l_7 <= `BSV_ASSIGNMENT_DELAY enc_l_7$D_IN;
	if (enc_l_8$EN) enc_l_8 <= `BSV_ASSIGNMENT_DELAY enc_l_8$D_IN;
	if (enc_l_9$EN) enc_l_9 <= `BSV_ASSIGNMENT_DELAY enc_l_9$D_IN;
	if (enc_round$EN) enc_round <= `BSV_ASSIGNMENT_DELAY enc_round$D_IN;
	if (enc_roundkey$EN)
	  enc_roundkey <= `BSV_ASSIGNMENT_DELAY enc_roundkey$D_IN;
	if (enc_xyReg$EN) enc_xyReg <= `BSV_ASSIGNMENT_DELAY enc_xyReg$D_IN;
      end
  end

  // synopsys translate_off
  `ifdef BSV_NO_INITIAL_BLOCKS
  `else // not BSV_NO_INITIAL_BLOCKS
  initial
  begin
    enc_alpha = 5'h0A;
    enc_beta = 5'h0A;
    enc_k0 = 24'hAAAAAA;
    enc_l_0 = 24'hAAAAAA;
    enc_l_1 = 24'hAAAAAA;
    enc_l_10 = 24'hAAAAAA;
    enc_l_11 = 24'hAAAAAA;
    enc_l_12 = 24'hAAAAAA;
    enc_l_13 = 24'hAAAAAA;
    enc_l_14 = 24'hAAAAAA;
    enc_l_15 = 24'hAAAAAA;
    enc_l_16 = 24'hAAAAAA;
    enc_l_17 = 24'hAAAAAA;
    enc_l_18 = 24'hAAAAAA;
    enc_l_19 = 24'hAAAAAA;
    enc_l_2 = 24'hAAAAAA;
    enc_l_20 = 24'hAAAAAA;
    enc_l_21 = 24'hAAAAAA;
    enc_l_22 = 24'hAAAAAA;
    enc_l_23 = 24'hAAAAAA;
    enc_l_24 = 24'hAAAAAA;
    enc_l_25 = 24'hAAAAAA;
    enc_l_3 = 24'hAAAAAA;
    enc_l_4 = 24'hAAAAAA;
    enc_l_5 = 24'hAAAAAA;
    enc_l_6 = 24'hAAAAAA;
    enc_l_7 = 24'hAAAAAA;
    enc_l_8 = 24'hAAAAAA;
    enc_l_9 = 24'hAAAAAA;
    enc_round = 24'hAAAAAA;
    enc_roundkey = 24'hAAAAAA;
    enc_xyReg = 48'hAAAAAAAAAAAA;
  end
  `endif // BSV_NO_INITIAL_BLOCKS
  // synopsys translate_on
endmodule  // mkSynthesizedEncrypt

