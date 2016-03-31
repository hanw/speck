/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Wed Mar  2 23:25:02 EST 2016
 * 
 */

/* Generation options: keep-fires */
#ifndef __mkDutWrapper_h__
#define __mkDutWrapper_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"
#include "mkSynthesizedFFT.h"
#include "mkSynthesizedFIRFilter.h"
#include "mkSynthesizedFromMP.h"
#include "mkSynthesizedIFFT.h"
#include "mkSynthesizedSettablePitchAdjust.h"
#include "mkSynthesizedToMP.h"


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
  MOD_SyncFIFO<tUInt32,tUInt8> INST_fromApSyncQ;
  MOD_Reg<tUInt8> INST_p_chunker_index;
  MOD_Fifo<tUInt64> INST_p_chunker_infifo;
  MOD_Fifo<tUWide> INST_p_chunker_outfifo;
  MOD_Reg<tUWide> INST_p_chunker_pending;
  MOD_mkSynthesizedFFT INST_p_fft;
  MOD_mkSynthesizedFIRFilter INST_p_fir;
  MOD_mkSynthesizedFromMP INST_p_from_mp;
  MOD_mkSynthesizedIFFT INST_p_ifft;
  MOD_mkSynthesizedSettablePitchAdjust INST_p_settablepitchadjust;
  MOD_Reg<tUInt8> INST_p_splitter_index;
  MOD_Fifo<tUWide> INST_p_splitter_infifo;
  MOD_Fifo<tUInt64> INST_p_splitter_outfifo;
  MOD_mkSynthesizedToMP INST_p_to_mp;
  MOD_SyncReset INST_rst_usr;
  MOD_SyncFIFO<tUInt32,tUInt8> INST_toApFactorSyncQ;
  MOD_SyncFIFO<tUInt32,tUInt8> INST_toApSyncQ;
 
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
  tUInt8 PORT_EN_setfactor_put;
  tUInt32 PORT_dut_request_put;
  tUInt32 PORT_setfactor_put;
  tUInt8 PORT_RDY_dut_request_put;
  tUInt32 PORT_dut_response_get;
  tUInt8 PORT_RDY_dut_response_get;
  tUInt8 PORT_RDY_setfactor_put;
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_WILL_FIRE_setfactor_put;
  tUInt8 DEF_WILL_FIRE_dut_response_get;
  tUInt8 DEF_WILL_FIRE_dut_request_put;
  tUInt8 DEF_WILL_FIRE_RL_getAPResponse;
  tUInt8 DEF_CAN_FIRE_RL_getAPResponse;
  tUInt8 DEF_WILL_FIRE_RL_enqAPRequest;
  tUInt8 DEF_CAN_FIRE_RL_enqAPRequest;
  tUInt8 DEF_WILL_FIRE_RL_p_ifft_to_splitter;
  tUInt8 DEF_CAN_FIRE_RL_p_ifft_to_splitter;
  tUInt8 DEF_WILL_FIRE_RL_p_frommp_to_ifft;
  tUInt8 DEF_CAN_FIRE_RL_p_frommp_to_ifft;
  tUInt8 DEF_WILL_FIRE_RL_p_pitchadjust_to_frommp;
  tUInt8 DEF_CAN_FIRE_RL_p_pitchadjust_to_frommp;
  tUInt8 DEF_WILL_FIRE_RL_p_to_mp_to_pitchadjust;
  tUInt8 DEF_CAN_FIRE_RL_p_to_mp_to_pitchadjust;
  tUInt8 DEF_WILL_FIRE_RL_p_fft_to_to_mp;
  tUInt8 DEF_CAN_FIRE_RL_p_fft_to_to_mp;
  tUInt8 DEF_WILL_FIRE_RL_p_chunker_to_fft;
  tUInt8 DEF_CAN_FIRE_RL_p_chunker_to_fft;
  tUInt8 DEF_WILL_FIRE_RL_p_fir_to_chunker;
  tUInt8 DEF_CAN_FIRE_RL_p_fir_to_chunker;
  tUInt8 DEF_WILL_FIRE_RL_p_splitter_iterate;
  tUInt8 DEF_CAN_FIRE_RL_p_splitter_iterate;
  tUInt8 DEF_WILL_FIRE_RL_p_chunker_iterate;
  tUInt8 DEF_CAN_FIRE_RL_p_chunker_iterate;
  tUInt8 DEF_CAN_FIRE_setfactor_put;
  tUInt8 DEF_CAN_FIRE_dut_response_get;
  tUInt8 DEF_CAN_FIRE_dut_request_put;
  tUInt8 DEF_x__h1208;
  tUInt8 DEF_p_chunker_index_EQ_7___d3;
  tUInt8 DEF_NOT_p_chunker_index_EQ_7___d4;
 
 /* Local definitions */
 private:
  tUWide DEF_p_from_mp_response_get___d112;
  tUWide DEF_p_ifft_response_get___d116;
  tUWide DEF_p_fft_response_get___d100;
  tUWide DEF_p_settablepitchadjust_adjust_response_get___d108;
  tUWide DEF_p_to_mp_response_get___d104;
  tUWide DEF_p_splitter_infifo_first____d42;
  tUWide DEF_p_chunker_pending__h2271;
  tUWide DEF_p_chunker_outfifo_first____d96;
  tUWide DEF_IF_p_chunker_index_EQ_7_THEN_p_chunker_infifo__ETC___d38;
  tUWide DEF_IF_p_chunker_index_EQ_7_THEN_p_chunker_infifo__ETC___d31;
  tUWide DEF_IF_p_chunker_index_EQ_7_THEN_p_chunker_infifo__ETC___d24;
  tUWide DEF_IF_p_chunker_index_EQ_7_THEN_p_chunker_infifo__ETC___d17;
 
 /* Rules */
 public:
  void RL_p_chunker_iterate();
  void RL_p_splitter_iterate();
  void RL_p_fir_to_chunker();
  void RL_p_chunker_to_fft();
  void RL_p_fft_to_to_mp();
  void RL_p_to_mp_to_pitchadjust();
  void RL_p_pitchadjust_to_frommp();
  void RL_p_frommp_to_ifft();
  void RL_p_ifft_to_splitter();
  void RL_enqAPRequest();
  void RL_getAPResponse();
 
 /* Methods */
 public:
  void METH_dut_request_put(tUInt32 ARG_dut_request_put);
  tUInt8 METH_RDY_dut_request_put();
  tUInt32 METH_dut_response_get();
  tUInt8 METH_RDY_dut_response_get();
  void METH_setfactor_put(tUInt32 ARG_setfactor_put);
  tUInt8 METH_RDY_setfactor_put();
 
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
  void vcd_submodules(tVCDDumpType dt, unsigned int levels, MOD_mkDutWrapper &backing);
};

#endif /* ifndef __mkDutWrapper_h__ */
