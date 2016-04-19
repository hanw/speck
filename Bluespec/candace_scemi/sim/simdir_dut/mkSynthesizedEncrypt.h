/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Tue Apr 19 10:48:19 EDT 2016
 * 
 */

/* Generation options: keep-fires */
#ifndef __mkSynthesizedEncrypt_h__
#define __mkSynthesizedEncrypt_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkSynthesizedEncrypt module */
class MOD_mkSynthesizedEncrypt : public Module {
 
 /* Clock handles */
 private:
  tClock __clk_handle_0;
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
 
 /* Module state */
 public:
  MOD_Reg<tUInt8> INST_enc_alpha;
  MOD_Reg<tUInt8> INST_enc_beta;
  MOD_Fifo<tUInt64> INST_enc_ciphertextFIFO;
  MOD_Reg<tUInt32> INST_enc_k0;
  MOD_Reg<tUWide> INST_enc_l;
  MOD_Fifo<tUInt64> INST_enc_plaintextFIFO;
  MOD_Reg<tUInt32> INST_enc_round;
  MOD_Reg<tUInt32> INST_enc_roundkey;
  MOD_Reg<tUInt64> INST_enc_xyReg;
 
 /* Constructor */
 public:
  MOD_mkSynthesizedEncrypt(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUInt8 PORT_EN_setKey;
  tUInt8 PORT_EN_inputMessage;
  tUInt8 PORT_EN_getResult;
  tUWide PORT_setKey_key;
  tUInt64 PORT_inputMessage_text;
  tUInt8 PORT_RDY_setKey;
  tUInt8 PORT_RDY_inputMessage;
  tUInt64 PORT_getResult;
  tUInt8 PORT_RDY_getResult;
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_WILL_FIRE_getResult;
  tUInt8 DEF_WILL_FIRE_inputMessage;
  tUInt8 DEF_WILL_FIRE_setKey;
  tUInt8 DEF_WILL_FIRE_RL_enc_pipeline;
  tUInt8 DEF_CAN_FIRE_RL_enc_pipeline;
  tUInt8 DEF_CAN_FIRE_getResult;
  tUInt8 DEF_CAN_FIRE_inputMessage;
  tUInt8 DEF_CAN_FIRE_setKey;
  tUInt8 DEF_enc_plaintextFIFO_notEmpty____d12;
  tUInt32 DEF_x__h12177;
  tUInt8 DEF_enc_round_EQ_22___d2;
  tUInt8 DEF_enc_round_EQ_0___d8;
  tUInt8 DEF_NOT_enc_round_EQ_22___d3;
 
 /* Local definitions */
 private:
  tUWide DEF_enc_l__h12931;
  tUWide DEF_setKey_key_BITS_95_TO_24___d511;
  tUWide DEF__0_CONCAT_setKey_key_BITS_95_TO_24_11___d512;
  tUWide DEF_IF_enc_round_EQ_22_THEN_IF_24_MINUS_enc_alpha__ETC___d208;
  tUWide DEF_IF_enc_round_EQ_22_THEN_IF_24_MINUS_enc_alpha__ETC___d203;
  tUWide DEF_IF_enc_round_EQ_22_THEN_IF_24_MINUS_enc_alpha__ETC___d199;
  tUWide DEF_IF_enc_round_EQ_22_THEN_IF_24_MINUS_enc_alpha__ETC___d194;
  tUWide DEF_IF_enc_round_EQ_22_THEN_IF_24_MINUS_enc_alpha__ETC___d189;
  tUWide DEF_IF_enc_round_EQ_22_THEN_IF_24_MINUS_enc_alpha__ETC___d184;
  tUWide DEF_IF_enc_round_EQ_22_THEN_IF_24_MINUS_enc_alpha__ETC___d179;
  tUWide DEF_IF_enc_round_EQ_22_THEN_IF_24_MINUS_enc_alpha__ETC___d174;
  tUWide DEF_IF_enc_round_EQ_22_THEN_IF_24_MINUS_enc_alpha__ETC___d169;
  tUWide DEF_IF_enc_round_EQ_22_THEN_IF_24_MINUS_enc_alpha__ETC___d164;
  tUWide DEF_IF_enc_round_EQ_22_THEN_IF_24_MINUS_enc_alpha__ETC___d159;
  tUWide DEF_IF_enc_round_EQ_22_THEN_IF_24_MINUS_enc_alpha__ETC___d154;
 
 /* Rules */
 public:
  void RL_enc_pipeline();
 
 /* Methods */
 public:
  void METH_setKey(tUWide ARG_setKey_key);
  tUInt8 METH_RDY_setKey();
  void METH_inputMessage(tUInt64 ARG_inputMessage_text);
  tUInt8 METH_RDY_inputMessage();
  tUInt64 METH_getResult();
  tUInt8 METH_RDY_getResult();
 
 /* Reset routines */
 public:
  void reset_RST_N(tUInt8 ARG_rst_in);
 
 /* Static handles to reset routines */
 public:
 
 /* Pointers to reset fns in parent module for asserting output resets */
 private:
 
 /* Functions for the parent module to register its reset fns */
 public:
 
 /* Functions to set the elaborated clock id */
 public:
  void set_clk_0(char const *s);
 
 /* State dumping routine */
 public:
  void dump_state(unsigned int indent);
 
 /* VCD dumping routines */
 public:
  unsigned int dump_VCD_defs(unsigned int levels);
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkSynthesizedEncrypt &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkSynthesizedEncrypt &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkSynthesizedEncrypt &backing);
};

#endif /* ifndef __mkSynthesizedEncrypt_h__ */
