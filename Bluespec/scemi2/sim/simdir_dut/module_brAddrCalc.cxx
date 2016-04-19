/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Sat Mar 12 13:28:57 EST 2016
 * 
 */
#include "bluesim_primitives.h"
#include "module_brAddrCalc.h"


/* Constructor */
MOD_module_brAddrCalc::MOD_module_brAddrCalc(tSimStateHdl simHdl, char const *name, Module *parent)
  : Module(simHdl, name, parent)
{
  PORT_brAddrCalc_pc = 0u;
  PORT_brAddrCalc_val = 0u;
  PORT_brAddrCalc_iType = 0u;
  PORT_brAddrCalc_imm = 0u;
  PORT_brAddrCalc_taken = false;
  PORT_brAddrCalc = 0u;
  PORT_RDY_brAddrCalc = false;
  symbol_count = 8u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_module_brAddrCalc::init_symbols_0()
{
  init_symbol(&symbols[0u], "brAddrCalc", SYM_PORT, &PORT_brAddrCalc, 32u);
  init_symbol(&symbols[1u], "brAddrCalc_imm", SYM_PORT, &PORT_brAddrCalc_imm, 32u);
  init_symbol(&symbols[2u], "brAddrCalc_iType", SYM_PORT, &PORT_brAddrCalc_iType, 4u);
  init_symbol(&symbols[3u], "brAddrCalc_pc", SYM_PORT, &PORT_brAddrCalc_pc, 32u);
  init_symbol(&symbols[4u], "brAddrCalc_taken", SYM_PORT, &PORT_brAddrCalc_taken, 1u);
  init_symbol(&symbols[5u], "brAddrCalc_val", SYM_PORT, &PORT_brAddrCalc_val, 32u);
  init_symbol(&symbols[6u], "CAN_FIRE_brAddrCalc", SYM_DEF, &DEF_CAN_FIRE_brAddrCalc, 1u);
  init_symbol(&symbols[7u], "RDY_brAddrCalc", SYM_PORT, &PORT_RDY_brAddrCalc, 1u);
}


/* Rule actions */


/* Methods */

tUInt32 MOD_module_brAddrCalc::METH_brAddrCalc(tUInt32 ARG_brAddrCalc_pc,
					       tUInt32 ARG_brAddrCalc_val,
					       tUInt8 ARG_brAddrCalc_iType,
					       tUInt32 ARG_brAddrCalc_imm,
					       tUInt8 ARG_brAddrCalc_taken)
{
  tUInt32 DEF_brAddrCalc_pc_PLUS_brAddrCalc_imm___d2;
  tUInt32 DEF_brAddrCalc_val_PLUS_brAddrCalc_imm_BITS_31_TO__ETC___d6;
  tUInt32 DEF_pcPlus4__h27;
  tUInt32 DEF_IF_brAddrCalc_taken_THEN_brAddrCalc_pc_PLUS_br_ETC___d9;
  tUInt32 DEF_x__h58;
  tUInt32 DEF_x_BITS_31_TO_1___h60;
  PORT_brAddrCalc_pc = ARG_brAddrCalc_pc;
  PORT_brAddrCalc_val = ARG_brAddrCalc_val;
  PORT_brAddrCalc_iType = ARG_brAddrCalc_iType;
  PORT_brAddrCalc_imm = ARG_brAddrCalc_imm;
  PORT_brAddrCalc_taken = ARG_brAddrCalc_taken;
  DEF_x__h58 = ARG_brAddrCalc_val + ARG_brAddrCalc_imm;
  DEF_x_BITS_31_TO_1___h60 = (tUInt32)(DEF_x__h58 >> 1u);
  DEF_pcPlus4__h27 = ARG_brAddrCalc_pc + 4u;
  DEF_brAddrCalc_val_PLUS_brAddrCalc_imm_BITS_31_TO__ETC___d6 = (DEF_x_BITS_31_TO_1___h60 << 1u) | (tUInt32)((tUInt8)0u);
  DEF_brAddrCalc_pc_PLUS_brAddrCalc_imm___d2 = ARG_brAddrCalc_pc + ARG_brAddrCalc_imm;
  DEF_IF_brAddrCalc_taken_THEN_brAddrCalc_pc_PLUS_br_ETC___d9 = ARG_brAddrCalc_taken ? DEF_brAddrCalc_pc_PLUS_brAddrCalc_imm___d2 : DEF_pcPlus4__h27;
  switch (ARG_brAddrCalc_iType) {
  case (tUInt8)4u:
    PORT_brAddrCalc = DEF_brAddrCalc_pc_PLUS_brAddrCalc_imm___d2;
    break;
  case (tUInt8)5u:
    PORT_brAddrCalc = DEF_brAddrCalc_val_PLUS_brAddrCalc_imm_BITS_31_TO__ETC___d6;
    break;
  case (tUInt8)6u:
    PORT_brAddrCalc = DEF_IF_brAddrCalc_taken_THEN_brAddrCalc_pc_PLUS_br_ETC___d9;
    break;
  default:
    PORT_brAddrCalc = DEF_pcPlus4__h27;
  }
  return PORT_brAddrCalc;
}

tUInt8 MOD_module_brAddrCalc::METH_RDY_brAddrCalc()
{
  DEF_CAN_FIRE_brAddrCalc = (tUInt8)1u;
  PORT_RDY_brAddrCalc = DEF_CAN_FIRE_brAddrCalc;
  return PORT_RDY_brAddrCalc;
}


/* Reset routines */


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */


/* State dumping routine */
void MOD_module_brAddrCalc::dump_state(unsigned int indent)
{
}


/* VCD dumping routines */

unsigned int MOD_module_brAddrCalc::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 8u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_brAddrCalc", 1u);
  vcd_write_def(sim_hdl, num++, "RDY_brAddrCalc", 1u);
  vcd_write_def(sim_hdl, num++, "brAddrCalc", 32u);
  vcd_write_def(sim_hdl, num++, "brAddrCalc_iType", 4u);
  vcd_write_def(sim_hdl, num++, "brAddrCalc_imm", 32u);
  vcd_write_def(sim_hdl, num++, "brAddrCalc_pc", 32u);
  vcd_write_def(sim_hdl, num++, "brAddrCalc_taken", 1u);
  vcd_write_def(sim_hdl, num++, "brAddrCalc_val", 32u);
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_module_brAddrCalc::dump_VCD(tVCDDumpType dt,
				     unsigned int levels,
				     MOD_module_brAddrCalc &backing)
{
  vcd_defs(dt, backing);
}

void MOD_module_brAddrCalc::vcd_defs(tVCDDumpType dt, MOD_module_brAddrCalc &backing)
{
  unsigned int num = vcd_num;
  if (dt == VCD_DUMP_XS)
  {
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 4u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 32u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.DEF_CAN_FIRE_brAddrCalc) != DEF_CAN_FIRE_brAddrCalc)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_brAddrCalc, 1u);
	backing.DEF_CAN_FIRE_brAddrCalc = DEF_CAN_FIRE_brAddrCalc;
      }
      ++num;
      if ((backing.PORT_RDY_brAddrCalc) != PORT_RDY_brAddrCalc)
      {
	vcd_write_val(sim_hdl, num, PORT_RDY_brAddrCalc, 1u);
	backing.PORT_RDY_brAddrCalc = PORT_RDY_brAddrCalc;
      }
      ++num;
      if ((backing.PORT_brAddrCalc) != PORT_brAddrCalc)
      {
	vcd_write_val(sim_hdl, num, PORT_brAddrCalc, 32u);
	backing.PORT_brAddrCalc = PORT_brAddrCalc;
      }
      ++num;
      if ((backing.PORT_brAddrCalc_iType) != PORT_brAddrCalc_iType)
      {
	vcd_write_val(sim_hdl, num, PORT_brAddrCalc_iType, 4u);
	backing.PORT_brAddrCalc_iType = PORT_brAddrCalc_iType;
      }
      ++num;
      if ((backing.PORT_brAddrCalc_imm) != PORT_brAddrCalc_imm)
      {
	vcd_write_val(sim_hdl, num, PORT_brAddrCalc_imm, 32u);
	backing.PORT_brAddrCalc_imm = PORT_brAddrCalc_imm;
      }
      ++num;
      if ((backing.PORT_brAddrCalc_pc) != PORT_brAddrCalc_pc)
      {
	vcd_write_val(sim_hdl, num, PORT_brAddrCalc_pc, 32u);
	backing.PORT_brAddrCalc_pc = PORT_brAddrCalc_pc;
      }
      ++num;
      if ((backing.PORT_brAddrCalc_taken) != PORT_brAddrCalc_taken)
      {
	vcd_write_val(sim_hdl, num, PORT_brAddrCalc_taken, 1u);
	backing.PORT_brAddrCalc_taken = PORT_brAddrCalc_taken;
      }
      ++num;
      if ((backing.PORT_brAddrCalc_val) != PORT_brAddrCalc_val)
      {
	vcd_write_val(sim_hdl, num, PORT_brAddrCalc_val, 32u);
	backing.PORT_brAddrCalc_val = PORT_brAddrCalc_val;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_brAddrCalc, 1u);
      backing.DEF_CAN_FIRE_brAddrCalc = DEF_CAN_FIRE_brAddrCalc;
      vcd_write_val(sim_hdl, num++, PORT_RDY_brAddrCalc, 1u);
      backing.PORT_RDY_brAddrCalc = PORT_RDY_brAddrCalc;
      vcd_write_val(sim_hdl, num++, PORT_brAddrCalc, 32u);
      backing.PORT_brAddrCalc = PORT_brAddrCalc;
      vcd_write_val(sim_hdl, num++, PORT_brAddrCalc_iType, 4u);
      backing.PORT_brAddrCalc_iType = PORT_brAddrCalc_iType;
      vcd_write_val(sim_hdl, num++, PORT_brAddrCalc_imm, 32u);
      backing.PORT_brAddrCalc_imm = PORT_brAddrCalc_imm;
      vcd_write_val(sim_hdl, num++, PORT_brAddrCalc_pc, 32u);
      backing.PORT_brAddrCalc_pc = PORT_brAddrCalc_pc;
      vcd_write_val(sim_hdl, num++, PORT_brAddrCalc_taken, 1u);
      backing.PORT_brAddrCalc_taken = PORT_brAddrCalc_taken;
      vcd_write_val(sim_hdl, num++, PORT_brAddrCalc_val, 32u);
      backing.PORT_brAddrCalc_val = PORT_brAddrCalc_val;
    }
}