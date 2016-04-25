/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Sun Apr 24 13:16:09 EDT 2016
 * 
 */

/* Generation options: keep-fires */
#ifndef __mkDutWrapper_h__
#define __mkDutWrapper_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkDutWrapper module */
class MOD_mkDutWrapper : public Module {
 
 /* Clock handles */
 private:
  tClock __clk_handle_0;
  tClock __clk_handle_1;
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
 
 /* Module state */
 public:
  MOD_SyncFIFO<tUInt64,tUInt8> INST_fromSyncQ;
  MOD_Reg<tUInt8> INST_ofb_enc_alpha;
  MOD_Reg<tUInt8> INST_ofb_enc_beta;
  MOD_Fifo<tUInt64> INST_ofb_enc_ciphertextFIFO;
  MOD_Reg<tUInt32> INST_ofb_enc_k0;
  MOD_Reg<tUInt32> INST_ofb_enc_l_0;
  MOD_Reg<tUInt32> INST_ofb_enc_l_1;
  MOD_Reg<tUInt32> INST_ofb_enc_l_10;
  MOD_Reg<tUInt32> INST_ofb_enc_l_11;
  MOD_Reg<tUInt32> INST_ofb_enc_l_12;
  MOD_Reg<tUInt32> INST_ofb_enc_l_13;
  MOD_Reg<tUInt32> INST_ofb_enc_l_14;
  MOD_Reg<tUInt32> INST_ofb_enc_l_15;
  MOD_Reg<tUInt32> INST_ofb_enc_l_16;
  MOD_Reg<tUInt32> INST_ofb_enc_l_17;
  MOD_Reg<tUInt32> INST_ofb_enc_l_18;
  MOD_Reg<tUInt32> INST_ofb_enc_l_19;
  MOD_Reg<tUInt32> INST_ofb_enc_l_2;
  MOD_Reg<tUInt32> INST_ofb_enc_l_20;
  MOD_Reg<tUInt32> INST_ofb_enc_l_21;
  MOD_Reg<tUInt32> INST_ofb_enc_l_22;
  MOD_Reg<tUInt32> INST_ofb_enc_l_23;
  MOD_Reg<tUInt32> INST_ofb_enc_l_24;
  MOD_Reg<tUInt32> INST_ofb_enc_l_25;
  MOD_Reg<tUInt32> INST_ofb_enc_l_3;
  MOD_Reg<tUInt32> INST_ofb_enc_l_4;
  MOD_Reg<tUInt32> INST_ofb_enc_l_5;
  MOD_Reg<tUInt32> INST_ofb_enc_l_6;
  MOD_Reg<tUInt32> INST_ofb_enc_l_7;
  MOD_Reg<tUInt32> INST_ofb_enc_l_8;
  MOD_Reg<tUInt32> INST_ofb_enc_l_9;
  MOD_Fifo<tUInt64> INST_ofb_enc_plaintextFIFO;
  MOD_Reg<tUInt32> INST_ofb_enc_round;
  MOD_Reg<tUInt32> INST_ofb_enc_roundkey;
  MOD_Reg<tUInt64> INST_ofb_enc_xyReg;
  MOD_Fifo<tUInt64> INST_ofb_inputFIFO;
  MOD_Fifo<tUInt64> INST_ofb_outputFIFO;
  MOD_Reg<tUInt8> INST_ofb_started;
  MOD_SyncReset INST_rst_usr;
  MOD_SyncFIFO<tUWide,tUInt8> INST_toKeySyncQ;
  MOD_SyncFIFO<tUInt64,tUInt8> INST_toSyncQ;
 
 /* Constructor */
 public:
  MOD_mkDutWrapper(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_rst_usr$OUT_RST;
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUInt8 PORT_EN_dut_request_put;
  tUInt8 PORT_EN_dut_response_get;
  tUInt8 PORT_EN_setkeyandIV_put;
  tUInt64 PORT_dut_request_put;
  tUWide PORT_setkeyandIV_put;
  tUInt8 PORT_RDY_dut_request_put;
  tUInt64 PORT_dut_response_get;
  tUInt8 PORT_RDY_dut_response_get;
  tUInt8 PORT_RDY_setkeyandIV_put;
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_WILL_FIRE_setkeyandIV_put;
  tUInt8 DEF_WILL_FIRE_dut_response_get;
  tUInt8 DEF_WILL_FIRE_dut_request_put;
  tUInt8 DEF_WILL_FIRE_RL_putKey;
  tUInt8 DEF_CAN_FIRE_RL_putKey;
  tUInt8 DEF_WILL_FIRE_RL_getResponse;
  tUInt8 DEF_CAN_FIRE_RL_getResponse;
  tUInt8 DEF_WILL_FIRE_RL_enqRequest;
  tUInt8 DEF_CAN_FIRE_RL_enqRequest;
  tUInt8 DEF_WILL_FIRE_RL_ofb_empty;
  tUInt8 DEF_CAN_FIRE_RL_ofb_empty;
  tUInt8 DEF_WILL_FIRE_RL_ofb_do_xor;
  tUInt8 DEF_CAN_FIRE_RL_ofb_do_xor;
  tUInt8 DEF_WILL_FIRE_RL_ofb_enc_pipeline;
  tUInt8 DEF_CAN_FIRE_RL_ofb_enc_pipeline;
  tUInt8 DEF_CAN_FIRE_setkeyandIV_put;
  tUInt8 DEF_CAN_FIRE_dut_response_get;
  tUInt8 DEF_CAN_FIRE_dut_request_put;
  tUInt32 DEF_x__h10822;
  tUInt8 DEF_ofb_enc_round_EQ_22___d2;
  tUInt8 DEF_ofb_enc_round_EQ_0___d8;
  tUInt8 DEF_NOT_ofb_enc_round_EQ_22___d3;
 
 /* Local definitions */
 private:
  tUWide DEF_toKeySyncQ_first____d512;
 
 /* Rules */
 public:
  void RL_ofb_enc_pipeline();
  void RL_ofb_do_xor();
  void RL_ofb_empty();
  void RL_enqRequest();
  void RL_getResponse();
  void RL_putKey();
 
 /* Methods */
 public:
  void METH_dut_request_put(tUInt64 ARG_dut_request_put);
  tUInt8 METH_RDY_dut_request_put();
  tUInt64 METH_dut_response_get();
  tUInt8 METH_RDY_dut_response_get();
  void METH_setkeyandIV_put(tUWide ARG_setkeyandIV_put);
  tUInt8 METH_RDY_setkeyandIV_put();
 
 /* Reset routines */
 public:
  void reset_rst_usr$OUT_RST(tUInt8 ARG_rst_in);
  void reset_RST_N(tUInt8 ARG_rst_in);
 
 /* Static handles to reset routines */
 public:
  static void static_reset_rst_usr$OUT_RST(void *my_this, tUInt8 ARG_rst_in);
 
 /* Pointers to reset fns in parent module for asserting output resets */
 private:
 
 /* Functions for the parent module to register its reset fns */
 public:
 
 /* Functions to set the elaborated clock id */
 public:
  void set_clk_0(char const *s);
  void set_clk_1(char const *s);
 
 /* State dumping routine */
 public:
  void dump_state(unsigned int indent);
 
 /* VCD dumping routines */
 public:
  unsigned int dump_VCD_defs(unsigned int levels);
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkDutWrapper &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkDutWrapper &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkDutWrapper &backing);
};

#endif /* ifndef __mkDutWrapper_h__ */