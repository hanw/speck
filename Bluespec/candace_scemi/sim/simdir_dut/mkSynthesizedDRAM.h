/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Tue Apr 19 10:48:19 EDT 2016
 * 
 */

/* Generation options: keep-fires */
#ifndef __mkSynthesizedDRAM_h__
#define __mkSynthesizedDRAM_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"
#include "mkSynthesizedEncrypt.h"


/* Class declaration for the mkSynthesizedDRAM module */
class MOD_mkSynthesizedDRAM : public Module {
 
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
  MOD_mkSynthesizedEncrypt INST_decrypt;
  MOD_mkSynthesizedEncrypt INST_encrypt;
 
 /* Constructor */
 public:
  MOD_mkSynthesizedDRAM(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUInt8 PORT_EN_encrypt_setKey;
  tUInt8 PORT_EN_encrypt_inputMessage;
  tUInt8 PORT_EN_encrypt_getResult;
  tUInt8 PORT_EN_decrypt_setKey;
  tUInt8 PORT_EN_decrypt_inputMessage;
  tUInt8 PORT_EN_decrypt_getResult;
  tUWide PORT_encrypt_setKey_key;
  tUInt64 PORT_encrypt_inputMessage_text;
  tUWide PORT_decrypt_setKey_key;
  tUInt64 PORT_decrypt_inputMessage_text;
  tUInt8 PORT_RDY_encrypt_setKey;
  tUInt8 PORT_RDY_encrypt_inputMessage;
  tUInt64 PORT_encrypt_getResult;
  tUInt8 PORT_RDY_encrypt_getResult;
  tUInt8 PORT_RDY_decrypt_setKey;
  tUInt8 PORT_RDY_decrypt_inputMessage;
  tUInt64 PORT_decrypt_getResult;
  tUInt8 PORT_RDY_decrypt_getResult;
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_WILL_FIRE_decrypt_getResult;
  tUInt8 DEF_WILL_FIRE_decrypt_inputMessage;
  tUInt8 DEF_WILL_FIRE_decrypt_setKey;
  tUInt8 DEF_WILL_FIRE_encrypt_getResult;
  tUInt8 DEF_WILL_FIRE_encrypt_inputMessage;
  tUInt8 DEF_WILL_FIRE_encrypt_setKey;
  tUInt8 DEF_CAN_FIRE_decrypt_getResult;
  tUInt8 DEF_CAN_FIRE_decrypt_inputMessage;
  tUInt8 DEF_CAN_FIRE_decrypt_setKey;
  tUInt8 DEF_CAN_FIRE_encrypt_getResult;
  tUInt8 DEF_CAN_FIRE_encrypt_inputMessage;
  tUInt8 DEF_CAN_FIRE_encrypt_setKey;
 
 /* Local definitions */
 private:
 
 /* Rules */
 public:
 
 /* Methods */
 public:
  void METH_encrypt_setKey(tUWide ARG_encrypt_setKey_key);
  tUInt8 METH_RDY_encrypt_setKey();
  void METH_encrypt_inputMessage(tUInt64 ARG_encrypt_inputMessage_text);
  tUInt8 METH_RDY_encrypt_inputMessage();
  tUInt64 METH_encrypt_getResult();
  tUInt8 METH_RDY_encrypt_getResult();
  void METH_decrypt_setKey(tUWide ARG_decrypt_setKey_key);
  tUInt8 METH_RDY_decrypt_setKey();
  void METH_decrypt_inputMessage(tUInt64 ARG_decrypt_inputMessage_text);
  tUInt8 METH_RDY_decrypt_inputMessage();
  tUInt64 METH_decrypt_getResult();
  tUInt8 METH_RDY_decrypt_getResult();
 
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
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkSynthesizedDRAM &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkSynthesizedDRAM &backing);
  void vcd_submodules(tVCDDumpType dt, unsigned int levels, MOD_mkSynthesizedDRAM &backing);
};

#endif /* ifndef __mkSynthesizedDRAM_h__ */
