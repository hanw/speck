/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Wed Mar  2 23:25:02 EST 2016
 * 
 */
#include "bluesim_primitives.h"
#include "mkSynthesizedFIRFilter.h"


/* Constructor */
MOD_mkSynthesizedFIRFilter::MOD_mkSynthesizedFIRFilter(tSimStateHdl simHdl,
						       char const *name,
						       Module *parent)
  : Module(simHdl, name, parent),
    __clk_handle_0(BAD_CLOCK_HANDLE),
    INST_fir_infifo(simHdl, "fir_infifo", this, 16u, 2u, 1u, 0u),
    INST_fir_m_0(simHdl, "fir_m_0", this),
    INST_fir_m_1(simHdl, "fir_m_1", this),
    INST_fir_m_2(simHdl, "fir_m_2", this),
    INST_fir_m_3(simHdl, "fir_m_3", this),
    INST_fir_m_4(simHdl, "fir_m_4", this),
    INST_fir_m_5(simHdl, "fir_m_5", this),
    INST_fir_m_6(simHdl, "fir_m_6", this),
    INST_fir_m_7(simHdl, "fir_m_7", this),
    INST_fir_m_8(simHdl, "fir_m_8", this),
    INST_fir_outfifo(simHdl, "fir_outfifo", this, 16u, 2u, 1u, 0u),
    INST_fir_r_0(simHdl, "fir_r_0", this, 16u, 0u, (tUInt8)0u),
    INST_fir_r_1(simHdl, "fir_r_1", this, 16u, 0u, (tUInt8)0u),
    INST_fir_r_2(simHdl, "fir_r_2", this, 16u, 0u, (tUInt8)0u),
    INST_fir_r_3(simHdl, "fir_r_3", this, 16u, 0u, (tUInt8)0u),
    INST_fir_r_4(simHdl, "fir_r_4", this, 16u, 0u, (tUInt8)0u),
    INST_fir_r_5(simHdl, "fir_r_5", this, 16u, 0u, (tUInt8)0u),
    INST_fir_r_6(simHdl, "fir_r_6", this, 16u, 0u, (tUInt8)0u),
    INST_fir_r_7(simHdl, "fir_r_7", this, 16u, 0u, (tUInt8)0u),
    PORT_RST_N((tUInt8)1u)
{
  PORT_EN_setfactor_put = false;
  PORT_EN_putSampleInput = false;
  PORT_EN_getSampleOutput = false;
  PORT_setfactor_put = 0u;
  PORT_putSampleInput_in = 0u;
  PORT_RDY_setfactor_put = false;
  PORT_RDY_putSampleInput = false;
  PORT_getSampleOutput = 0u;
  PORT_RDY_getSampleOutput = false;
  symbol_count = 40u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mkSynthesizedFIRFilter::init_symbols_0()
{
  init_symbol(&symbols[0u], "CAN_FIRE_getSampleOutput", SYM_DEF, &DEF_CAN_FIRE_getSampleOutput, 1u);
  init_symbol(&symbols[1u], "CAN_FIRE_putSampleInput", SYM_DEF, &DEF_CAN_FIRE_putSampleInput, 1u);
  init_symbol(&symbols[2u], "CAN_FIRE_RL_fir_getSum", SYM_DEF, &DEF_CAN_FIRE_RL_fir_getSum, 1u);
  init_symbol(&symbols[3u], "CAN_FIRE_RL_fir_process", SYM_DEF, &DEF_CAN_FIRE_RL_fir_process, 1u);
  init_symbol(&symbols[4u], "CAN_FIRE_setfactor_put", SYM_DEF, &DEF_CAN_FIRE_setfactor_put, 1u);
  init_symbol(&symbols[5u], "EN_getSampleOutput", SYM_PORT, &PORT_EN_getSampleOutput, 1u);
  init_symbol(&symbols[6u], "EN_putSampleInput", SYM_PORT, &PORT_EN_putSampleInput, 1u);
  init_symbol(&symbols[7u], "EN_setfactor_put", SYM_PORT, &PORT_EN_setfactor_put, 1u);
  init_symbol(&symbols[8u], "fir_infifo", SYM_MODULE, &INST_fir_infifo);
  init_symbol(&symbols[9u], "fir_m_0", SYM_MODULE, &INST_fir_m_0);
  init_symbol(&symbols[10u], "fir_m_1", SYM_MODULE, &INST_fir_m_1);
  init_symbol(&symbols[11u], "fir_m_2", SYM_MODULE, &INST_fir_m_2);
  init_symbol(&symbols[12u], "fir_m_3", SYM_MODULE, &INST_fir_m_3);
  init_symbol(&symbols[13u], "fir_m_4", SYM_MODULE, &INST_fir_m_4);
  init_symbol(&symbols[14u], "fir_m_5", SYM_MODULE, &INST_fir_m_5);
  init_symbol(&symbols[15u], "fir_m_6", SYM_MODULE, &INST_fir_m_6);
  init_symbol(&symbols[16u], "fir_m_7", SYM_MODULE, &INST_fir_m_7);
  init_symbol(&symbols[17u], "fir_m_8", SYM_MODULE, &INST_fir_m_8);
  init_symbol(&symbols[18u], "fir_outfifo", SYM_MODULE, &INST_fir_outfifo);
  init_symbol(&symbols[19u], "fir_r_0", SYM_MODULE, &INST_fir_r_0);
  init_symbol(&symbols[20u], "fir_r_1", SYM_MODULE, &INST_fir_r_1);
  init_symbol(&symbols[21u], "fir_r_2", SYM_MODULE, &INST_fir_r_2);
  init_symbol(&symbols[22u], "fir_r_3", SYM_MODULE, &INST_fir_r_3);
  init_symbol(&symbols[23u], "fir_r_4", SYM_MODULE, &INST_fir_r_4);
  init_symbol(&symbols[24u], "fir_r_5", SYM_MODULE, &INST_fir_r_5);
  init_symbol(&symbols[25u], "fir_r_6", SYM_MODULE, &INST_fir_r_6);
  init_symbol(&symbols[26u], "fir_r_7", SYM_MODULE, &INST_fir_r_7);
  init_symbol(&symbols[27u], "getSampleOutput", SYM_PORT, &PORT_getSampleOutput, 16u);
  init_symbol(&symbols[28u], "putSampleInput_in", SYM_PORT, &PORT_putSampleInput_in, 16u);
  init_symbol(&symbols[29u], "RDY_getSampleOutput", SYM_PORT, &PORT_RDY_getSampleOutput, 1u);
  init_symbol(&symbols[30u], "RDY_putSampleInput", SYM_PORT, &PORT_RDY_putSampleInput, 1u);
  init_symbol(&symbols[31u], "RDY_setfactor_put", SYM_PORT, &PORT_RDY_setfactor_put, 1u);
  init_symbol(&symbols[32u], "RL_fir_getSum", SYM_RULE);
  init_symbol(&symbols[33u], "RL_fir_process", SYM_RULE);
  init_symbol(&symbols[34u], "setfactor_put", SYM_PORT, &PORT_setfactor_put, 32u);
  init_symbol(&symbols[35u],
	      "WILL_FIRE_getSampleOutput",
	      SYM_DEF,
	      &DEF_WILL_FIRE_getSampleOutput,
	      1u);
  init_symbol(&symbols[36u], "WILL_FIRE_putSampleInput", SYM_DEF, &DEF_WILL_FIRE_putSampleInput, 1u);
  init_symbol(&symbols[37u], "WILL_FIRE_RL_fir_getSum", SYM_DEF, &DEF_WILL_FIRE_RL_fir_getSum, 1u);
  init_symbol(&symbols[38u], "WILL_FIRE_RL_fir_process", SYM_DEF, &DEF_WILL_FIRE_RL_fir_process, 1u);
  init_symbol(&symbols[39u], "WILL_FIRE_setfactor_put", SYM_DEF, &DEF_WILL_FIRE_setfactor_put, 1u);
}


/* Rule actions */

void MOD_mkSynthesizedFIRFilter::RL_fir_process()
{
  tUInt32 DEF_fir_infifo_first____d20;
  tUInt32 DEF_b__h1907;
  tUInt32 DEF_b__h1995;
  tUInt32 DEF_b__h2083;
  tUInt32 DEF_b__h2171;
  tUInt32 DEF_b__h2259;
  tUInt32 DEF_b__h2347;
  tUInt32 DEF_b__h2435;
  tUInt32 DEF_b__h5706;
  DEF_b__h5706 = INST_fir_r_7.METH_read();
  DEF_b__h2435 = INST_fir_r_6.METH_read();
  DEF_b__h2347 = INST_fir_r_5.METH_read();
  DEF_b__h2259 = INST_fir_r_4.METH_read();
  DEF_b__h2171 = INST_fir_r_3.METH_read();
  DEF_b__h1995 = INST_fir_r_1.METH_read();
  DEF_b__h2083 = INST_fir_r_2.METH_read();
  DEF_b__h1907 = INST_fir_r_0.METH_read();
  DEF_fir_infifo_first____d20 = INST_fir_infifo.METH_first();
  INST_fir_infifo.METH_deq();
  INST_fir_r_0.METH_write(DEF_fir_infifo_first____d20);
  INST_fir_r_1.METH_write(DEF_b__h1907);
  INST_fir_r_3.METH_write(DEF_b__h2083);
  INST_fir_r_2.METH_write(DEF_b__h1995);
  INST_fir_r_4.METH_write(DEF_b__h2171);
  INST_fir_r_5.METH_write(DEF_b__h2259);
  INST_fir_r_6.METH_write(DEF_b__h2347);
  INST_fir_r_7.METH_write(DEF_b__h2435);
  INST_fir_m_0.METH_putOperands(4294966483u, DEF_fir_infifo_first____d20);
  INST_fir_m_2.METH_putOperands(4294966424u, DEF_b__h1995);
  INST_fir_m_1.METH_putOperands(0u, DEF_b__h1907);
  INST_fir_m_3.METH_putOperands(0u, DEF_b__h2083);
  INST_fir_m_4.METH_putOperands(53615u, DEF_b__h2171);
  INST_fir_m_5.METH_putOperands(0u, DEF_b__h2259);
  INST_fir_m_6.METH_putOperands(4294966424u, DEF_b__h2347);
  INST_fir_m_8.METH_putOperands(4294966483u, DEF_b__h5706);
  INST_fir_m_7.METH_putOperands(0u, DEF_b__h2435);
}

void MOD_mkSynthesizedFIRFilter::RL_fir_getSum()
{
  tUInt32 DEF_x__h5880;
  tUInt32 DEF_x__h5943;
  tUInt32 DEF_x__h6006;
  tUInt32 DEF_x__h6069;
  tUInt32 DEF_x__h6132;
  tUInt32 DEF_x__h6195;
  tUInt32 DEF_x__h6258;
  tUInt32 DEF_x__h6321;
  tUInt32 DEF_fir_m_0_getResult_8_PLUS_fir_m_1_getResult_9_0_ETC___d65;
  tUInt32 DEF_x__h5817;
  tUInt32 DEF_AVMeth_fir_m_0_getResult;
  tUInt32 DEF_AVMeth_fir_m_8_getResult;
  tUInt32 DEF_AVMeth_fir_m_7_getResult;
  tUInt32 DEF_AVMeth_fir_m_6_getResult;
  tUInt32 DEF_AVMeth_fir_m_5_getResult;
  tUInt32 DEF_AVMeth_fir_m_4_getResult;
  tUInt32 DEF_AVMeth_fir_m_3_getResult;
  tUInt32 DEF_AVMeth_fir_m_2_getResult;
  tUInt32 DEF_AVMeth_fir_m_1_getResult;
  DEF_AVMeth_fir_m_0_getResult = INST_fir_m_0.METH_getResult();
  DEF_x__h5817 = DEF_AVMeth_fir_m_0_getResult;
  DEF_AVMeth_fir_m_1_getResult = INST_fir_m_1.METH_getResult();
  DEF_x__h5880 = DEF_x__h5817 + DEF_AVMeth_fir_m_1_getResult;
  DEF_AVMeth_fir_m_2_getResult = INST_fir_m_2.METH_getResult();
  DEF_x__h5943 = DEF_x__h5880 + DEF_AVMeth_fir_m_2_getResult;
  DEF_AVMeth_fir_m_3_getResult = INST_fir_m_3.METH_getResult();
  DEF_x__h6006 = DEF_x__h5943 + DEF_AVMeth_fir_m_3_getResult;
  DEF_AVMeth_fir_m_4_getResult = INST_fir_m_4.METH_getResult();
  DEF_x__h6069 = DEF_x__h6006 + DEF_AVMeth_fir_m_4_getResult;
  DEF_AVMeth_fir_m_5_getResult = INST_fir_m_5.METH_getResult();
  DEF_x__h6132 = DEF_x__h6069 + DEF_AVMeth_fir_m_5_getResult;
  DEF_AVMeth_fir_m_6_getResult = INST_fir_m_6.METH_getResult();
  DEF_x__h6195 = DEF_x__h6132 + DEF_AVMeth_fir_m_6_getResult;
  DEF_AVMeth_fir_m_7_getResult = INST_fir_m_7.METH_getResult();
  DEF_x__h6258 = DEF_x__h6195 + DEF_AVMeth_fir_m_7_getResult;
  DEF_AVMeth_fir_m_8_getResult = INST_fir_m_8.METH_getResult();
  DEF_x__h6321 = DEF_x__h6258 + DEF_AVMeth_fir_m_8_getResult;
  DEF_fir_m_0_getResult_8_PLUS_fir_m_1_getResult_9_0_ETC___d65 = (tUInt32)(DEF_x__h6321 >> 16u);
  INST_fir_outfifo.METH_enq(DEF_fir_m_0_getResult_8_PLUS_fir_m_1_getResult_9_0_ETC___d65);
}


/* Methods */

void MOD_mkSynthesizedFIRFilter::METH_putSampleInput(tUInt32 ARG_putSampleInput_in)
{
  PORT_EN_putSampleInput = (tUInt8)1u;
  DEF_WILL_FIRE_putSampleInput = (tUInt8)1u;
  PORT_putSampleInput_in = ARG_putSampleInput_in;
  INST_fir_infifo.METH_enq(ARG_putSampleInput_in);
}

tUInt8 MOD_mkSynthesizedFIRFilter::METH_RDY_putSampleInput()
{
  DEF_CAN_FIRE_putSampleInput = INST_fir_infifo.METH_i_notFull();
  PORT_RDY_putSampleInput = DEF_CAN_FIRE_putSampleInput;
  return PORT_RDY_putSampleInput;
}

tUInt32 MOD_mkSynthesizedFIRFilter::METH_getSampleOutput()
{
  tUInt32 DEF_getSampleOutput__avValue1;
  PORT_EN_getSampleOutput = (tUInt8)1u;
  DEF_WILL_FIRE_getSampleOutput = (tUInt8)1u;
  DEF_getSampleOutput__avValue1 = INST_fir_outfifo.METH_first();
  PORT_getSampleOutput = DEF_getSampleOutput__avValue1;
  INST_fir_outfifo.METH_deq();
  return PORT_getSampleOutput;
}

tUInt8 MOD_mkSynthesizedFIRFilter::METH_RDY_getSampleOutput()
{
  DEF_CAN_FIRE_getSampleOutput = INST_fir_outfifo.METH_i_notEmpty();
  PORT_RDY_getSampleOutput = DEF_CAN_FIRE_getSampleOutput;
  return PORT_RDY_getSampleOutput;
}

void MOD_mkSynthesizedFIRFilter::METH_setfactor_put(tUInt32 ARG_setfactor_put)
{
  PORT_EN_setfactor_put = (tUInt8)1u;
  DEF_WILL_FIRE_setfactor_put = (tUInt8)1u;
  PORT_setfactor_put = ARG_setfactor_put;
}

tUInt8 MOD_mkSynthesizedFIRFilter::METH_RDY_setfactor_put()
{
  DEF_CAN_FIRE_setfactor_put = (tUInt8)1u;
  PORT_RDY_setfactor_put = DEF_CAN_FIRE_setfactor_put;
  return PORT_RDY_setfactor_put;
}


/* Reset routines */

void MOD_mkSynthesizedFIRFilter::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
  INST_fir_r_7.reset_RST(ARG_rst_in);
  INST_fir_r_6.reset_RST(ARG_rst_in);
  INST_fir_r_5.reset_RST(ARG_rst_in);
  INST_fir_r_4.reset_RST(ARG_rst_in);
  INST_fir_r_3.reset_RST(ARG_rst_in);
  INST_fir_r_2.reset_RST(ARG_rst_in);
  INST_fir_r_1.reset_RST(ARG_rst_in);
  INST_fir_r_0.reset_RST(ARG_rst_in);
  INST_fir_outfifo.reset_RST(ARG_rst_in);
  INST_fir_m_8.reset_RST_N(ARG_rst_in);
  INST_fir_m_7.reset_RST_N(ARG_rst_in);
  INST_fir_m_6.reset_RST_N(ARG_rst_in);
  INST_fir_m_5.reset_RST_N(ARG_rst_in);
  INST_fir_m_4.reset_RST_N(ARG_rst_in);
  INST_fir_m_3.reset_RST_N(ARG_rst_in);
  INST_fir_m_2.reset_RST_N(ARG_rst_in);
  INST_fir_m_1.reset_RST_N(ARG_rst_in);
  INST_fir_m_0.reset_RST_N(ARG_rst_in);
  INST_fir_infifo.reset_RST(ARG_rst_in);
}


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */

void MOD_mkSynthesizedFIRFilter::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mkSynthesizedFIRFilter::dump_state(unsigned int indent)
{
  printf("%*s%s:\n", indent, "", inst_name);
  INST_fir_infifo.dump_state(indent + 2u);
  INST_fir_m_0.dump_state(indent + 2u);
  INST_fir_m_1.dump_state(indent + 2u);
  INST_fir_m_2.dump_state(indent + 2u);
  INST_fir_m_3.dump_state(indent + 2u);
  INST_fir_m_4.dump_state(indent + 2u);
  INST_fir_m_5.dump_state(indent + 2u);
  INST_fir_m_6.dump_state(indent + 2u);
  INST_fir_m_7.dump_state(indent + 2u);
  INST_fir_m_8.dump_state(indent + 2u);
  INST_fir_outfifo.dump_state(indent + 2u);
  INST_fir_r_0.dump_state(indent + 2u);
  INST_fir_r_1.dump_state(indent + 2u);
  INST_fir_r_2.dump_state(indent + 2u);
  INST_fir_r_3.dump_state(indent + 2u);
  INST_fir_r_4.dump_state(indent + 2u);
  INST_fir_r_5.dump_state(indent + 2u);
  INST_fir_r_6.dump_state(indent + 2u);
  INST_fir_r_7.dump_state(indent + 2u);
}


/* VCD dumping routines */

unsigned int MOD_mkSynthesizedFIRFilter::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 30u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_fir_getSum", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_fir_process", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_getSampleOutput", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_putSampleInput", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_setfactor_put", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_fir_getSum", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_fir_process", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_getSampleOutput", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_putSampleInput", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_setfactor_put", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "EN_getSampleOutput", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "EN_putSampleInput", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "EN_setfactor_put", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "RDY_getSampleOutput", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "RDY_putSampleInput", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "RDY_setfactor_put", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "getSampleOutput", 16u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "putSampleInput_in", 16u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "setfactor_put", 32u);
  num = INST_fir_infifo.dump_VCD_defs(num);
  num = INST_fir_outfifo.dump_VCD_defs(num);
  num = INST_fir_r_0.dump_VCD_defs(num);
  num = INST_fir_r_1.dump_VCD_defs(num);
  num = INST_fir_r_2.dump_VCD_defs(num);
  num = INST_fir_r_3.dump_VCD_defs(num);
  num = INST_fir_r_4.dump_VCD_defs(num);
  num = INST_fir_r_5.dump_VCD_defs(num);
  num = INST_fir_r_6.dump_VCD_defs(num);
  num = INST_fir_r_7.dump_VCD_defs(num);
  if (levels != 1u)
  {
    unsigned int l = levels == 0u ? 0u : levels - 1u;
    num = INST_fir_m_0.dump_VCD_defs(l);
    num = INST_fir_m_1.dump_VCD_defs(l);
    num = INST_fir_m_2.dump_VCD_defs(l);
    num = INST_fir_m_3.dump_VCD_defs(l);
    num = INST_fir_m_4.dump_VCD_defs(l);
    num = INST_fir_m_5.dump_VCD_defs(l);
    num = INST_fir_m_6.dump_VCD_defs(l);
    num = INST_fir_m_7.dump_VCD_defs(l);
    num = INST_fir_m_8.dump_VCD_defs(l);
  }
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mkSynthesizedFIRFilter::dump_VCD(tVCDDumpType dt,
					  unsigned int levels,
					  MOD_mkSynthesizedFIRFilter &backing)
{
  vcd_defs(dt, backing);
  vcd_prims(dt, backing);
  if (levels != 1u)
    vcd_submodules(dt, levels - 1u, backing);
}

void MOD_mkSynthesizedFIRFilter::vcd_defs(tVCDDumpType dt, MOD_mkSynthesizedFIRFilter &backing)
{
  unsigned int num = vcd_num;
  if (dt == VCD_DUMP_XS)
  {
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 16u);
    vcd_write_x(sim_hdl, num++, 16u);
    vcd_write_x(sim_hdl, num++, 32u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.DEF_CAN_FIRE_RL_fir_getSum) != DEF_CAN_FIRE_RL_fir_getSum)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_fir_getSum, 1u);
	backing.DEF_CAN_FIRE_RL_fir_getSum = DEF_CAN_FIRE_RL_fir_getSum;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_fir_process) != DEF_CAN_FIRE_RL_fir_process)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_fir_process, 1u);
	backing.DEF_CAN_FIRE_RL_fir_process = DEF_CAN_FIRE_RL_fir_process;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_getSampleOutput) != DEF_CAN_FIRE_getSampleOutput)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_getSampleOutput, 1u);
	backing.DEF_CAN_FIRE_getSampleOutput = DEF_CAN_FIRE_getSampleOutput;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_putSampleInput) != DEF_CAN_FIRE_putSampleInput)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_putSampleInput, 1u);
	backing.DEF_CAN_FIRE_putSampleInput = DEF_CAN_FIRE_putSampleInput;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_setfactor_put) != DEF_CAN_FIRE_setfactor_put)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_setfactor_put, 1u);
	backing.DEF_CAN_FIRE_setfactor_put = DEF_CAN_FIRE_setfactor_put;
      }
      ++num;
      if ((backing.PORT_RST_N) != PORT_RST_N)
      {
	vcd_write_val(sim_hdl, num, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_fir_getSum) != DEF_WILL_FIRE_RL_fir_getSum)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_fir_getSum, 1u);
	backing.DEF_WILL_FIRE_RL_fir_getSum = DEF_WILL_FIRE_RL_fir_getSum;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_fir_process) != DEF_WILL_FIRE_RL_fir_process)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_fir_process, 1u);
	backing.DEF_WILL_FIRE_RL_fir_process = DEF_WILL_FIRE_RL_fir_process;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_getSampleOutput) != DEF_WILL_FIRE_getSampleOutput)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_getSampleOutput, 1u);
	backing.DEF_WILL_FIRE_getSampleOutput = DEF_WILL_FIRE_getSampleOutput;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_putSampleInput) != DEF_WILL_FIRE_putSampleInput)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_putSampleInput, 1u);
	backing.DEF_WILL_FIRE_putSampleInput = DEF_WILL_FIRE_putSampleInput;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_setfactor_put) != DEF_WILL_FIRE_setfactor_put)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_setfactor_put, 1u);
	backing.DEF_WILL_FIRE_setfactor_put = DEF_WILL_FIRE_setfactor_put;
      }
      ++num;
      if ((backing.PORT_EN_getSampleOutput) != PORT_EN_getSampleOutput)
      {
	vcd_write_val(sim_hdl, num, PORT_EN_getSampleOutput, 1u);
	backing.PORT_EN_getSampleOutput = PORT_EN_getSampleOutput;
      }
      ++num;
      if ((backing.PORT_EN_putSampleInput) != PORT_EN_putSampleInput)
      {
	vcd_write_val(sim_hdl, num, PORT_EN_putSampleInput, 1u);
	backing.PORT_EN_putSampleInput = PORT_EN_putSampleInput;
      }
      ++num;
      if ((backing.PORT_EN_setfactor_put) != PORT_EN_setfactor_put)
      {
	vcd_write_val(sim_hdl, num, PORT_EN_setfactor_put, 1u);
	backing.PORT_EN_setfactor_put = PORT_EN_setfactor_put;
      }
      ++num;
      if ((backing.PORT_RDY_getSampleOutput) != PORT_RDY_getSampleOutput)
      {
	vcd_write_val(sim_hdl, num, PORT_RDY_getSampleOutput, 1u);
	backing.PORT_RDY_getSampleOutput = PORT_RDY_getSampleOutput;
      }
      ++num;
      if ((backing.PORT_RDY_putSampleInput) != PORT_RDY_putSampleInput)
      {
	vcd_write_val(sim_hdl, num, PORT_RDY_putSampleInput, 1u);
	backing.PORT_RDY_putSampleInput = PORT_RDY_putSampleInput;
      }
      ++num;
      if ((backing.PORT_RDY_setfactor_put) != PORT_RDY_setfactor_put)
      {
	vcd_write_val(sim_hdl, num, PORT_RDY_setfactor_put, 1u);
	backing.PORT_RDY_setfactor_put = PORT_RDY_setfactor_put;
      }
      ++num;
      if ((backing.PORT_getSampleOutput) != PORT_getSampleOutput)
      {
	vcd_write_val(sim_hdl, num, PORT_getSampleOutput, 16u);
	backing.PORT_getSampleOutput = PORT_getSampleOutput;
      }
      ++num;
      if ((backing.PORT_putSampleInput_in) != PORT_putSampleInput_in)
      {
	vcd_write_val(sim_hdl, num, PORT_putSampleInput_in, 16u);
	backing.PORT_putSampleInput_in = PORT_putSampleInput_in;
      }
      ++num;
      if ((backing.PORT_setfactor_put) != PORT_setfactor_put)
      {
	vcd_write_val(sim_hdl, num, PORT_setfactor_put, 32u);
	backing.PORT_setfactor_put = PORT_setfactor_put;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_fir_getSum, 1u);
      backing.DEF_CAN_FIRE_RL_fir_getSum = DEF_CAN_FIRE_RL_fir_getSum;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_fir_process, 1u);
      backing.DEF_CAN_FIRE_RL_fir_process = DEF_CAN_FIRE_RL_fir_process;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_getSampleOutput, 1u);
      backing.DEF_CAN_FIRE_getSampleOutput = DEF_CAN_FIRE_getSampleOutput;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_putSampleInput, 1u);
      backing.DEF_CAN_FIRE_putSampleInput = DEF_CAN_FIRE_putSampleInput;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_setfactor_put, 1u);
      backing.DEF_CAN_FIRE_setfactor_put = DEF_CAN_FIRE_setfactor_put;
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_fir_getSum, 1u);
      backing.DEF_WILL_FIRE_RL_fir_getSum = DEF_WILL_FIRE_RL_fir_getSum;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_fir_process, 1u);
      backing.DEF_WILL_FIRE_RL_fir_process = DEF_WILL_FIRE_RL_fir_process;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_getSampleOutput, 1u);
      backing.DEF_WILL_FIRE_getSampleOutput = DEF_WILL_FIRE_getSampleOutput;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_putSampleInput, 1u);
      backing.DEF_WILL_FIRE_putSampleInput = DEF_WILL_FIRE_putSampleInput;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_setfactor_put, 1u);
      backing.DEF_WILL_FIRE_setfactor_put = DEF_WILL_FIRE_setfactor_put;
      vcd_write_val(sim_hdl, num++, PORT_EN_getSampleOutput, 1u);
      backing.PORT_EN_getSampleOutput = PORT_EN_getSampleOutput;
      vcd_write_val(sim_hdl, num++, PORT_EN_putSampleInput, 1u);
      backing.PORT_EN_putSampleInput = PORT_EN_putSampleInput;
      vcd_write_val(sim_hdl, num++, PORT_EN_setfactor_put, 1u);
      backing.PORT_EN_setfactor_put = PORT_EN_setfactor_put;
      vcd_write_val(sim_hdl, num++, PORT_RDY_getSampleOutput, 1u);
      backing.PORT_RDY_getSampleOutput = PORT_RDY_getSampleOutput;
      vcd_write_val(sim_hdl, num++, PORT_RDY_putSampleInput, 1u);
      backing.PORT_RDY_putSampleInput = PORT_RDY_putSampleInput;
      vcd_write_val(sim_hdl, num++, PORT_RDY_setfactor_put, 1u);
      backing.PORT_RDY_setfactor_put = PORT_RDY_setfactor_put;
      vcd_write_val(sim_hdl, num++, PORT_getSampleOutput, 16u);
      backing.PORT_getSampleOutput = PORT_getSampleOutput;
      vcd_write_val(sim_hdl, num++, PORT_putSampleInput_in, 16u);
      backing.PORT_putSampleInput_in = PORT_putSampleInput_in;
      vcd_write_val(sim_hdl, num++, PORT_setfactor_put, 32u);
      backing.PORT_setfactor_put = PORT_setfactor_put;
    }
}

void MOD_mkSynthesizedFIRFilter::vcd_prims(tVCDDumpType dt, MOD_mkSynthesizedFIRFilter &backing)
{
  INST_fir_infifo.dump_VCD(dt, backing.INST_fir_infifo);
  INST_fir_outfifo.dump_VCD(dt, backing.INST_fir_outfifo);
  INST_fir_r_0.dump_VCD(dt, backing.INST_fir_r_0);
  INST_fir_r_1.dump_VCD(dt, backing.INST_fir_r_1);
  INST_fir_r_2.dump_VCD(dt, backing.INST_fir_r_2);
  INST_fir_r_3.dump_VCD(dt, backing.INST_fir_r_3);
  INST_fir_r_4.dump_VCD(dt, backing.INST_fir_r_4);
  INST_fir_r_5.dump_VCD(dt, backing.INST_fir_r_5);
  INST_fir_r_6.dump_VCD(dt, backing.INST_fir_r_6);
  INST_fir_r_7.dump_VCD(dt, backing.INST_fir_r_7);
}

void MOD_mkSynthesizedFIRFilter::vcd_submodules(tVCDDumpType dt,
						unsigned int levels,
						MOD_mkSynthesizedFIRFilter &backing)
{
  INST_fir_m_0.dump_VCD(dt, levels, backing.INST_fir_m_0);
  INST_fir_m_1.dump_VCD(dt, levels, backing.INST_fir_m_1);
  INST_fir_m_2.dump_VCD(dt, levels, backing.INST_fir_m_2);
  INST_fir_m_3.dump_VCD(dt, levels, backing.INST_fir_m_3);
  INST_fir_m_4.dump_VCD(dt, levels, backing.INST_fir_m_4);
  INST_fir_m_5.dump_VCD(dt, levels, backing.INST_fir_m_5);
  INST_fir_m_6.dump_VCD(dt, levels, backing.INST_fir_m_6);
  INST_fir_m_7.dump_VCD(dt, levels, backing.INST_fir_m_7);
  INST_fir_m_8.dump_VCD(dt, levels, backing.INST_fir_m_8);
}
