/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Wed Apr 20 18:40:43 EDT 2016
 * 
 */
#include "bluesim_primitives.h"
#include "mkSceMiUInt32Parameter.h"


/* Constructor */
MOD_mkSceMiUInt32Parameter::MOD_mkSceMiUInt32Parameter(tSimStateHdl simHdl,
						       char const *name,
						       Module *parent,
						       tUInt32 ARG_n)
  : Module(simHdl, name, parent), PARAM_n(ARG_n)
{
  PORT_not_used = false;
  PORT_RDY_not_used = false;
  symbol_count = 4u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mkSceMiUInt32Parameter::init_symbols_0()
{
  init_symbol(&symbols[0u], "CAN_FIRE_not_used", SYM_DEF, &DEF_CAN_FIRE_not_used, 1u);
  init_symbol(&symbols[1u], "n", SYM_PARAM, (void *)(&PARAM_n), 32u);
  init_symbol(&symbols[2u], "not_used", SYM_PORT, &PORT_not_used, 1u);
  init_symbol(&symbols[3u], "RDY_not_used", SYM_PORT, &PORT_RDY_not_used, 1u);
}


/* Rule actions */


/* Methods */

tUInt8 MOD_mkSceMiUInt32Parameter::METH_not_used()
{
  PORT_not_used = (tUInt8)0u;
  return PORT_not_used;
}

tUInt8 MOD_mkSceMiUInt32Parameter::METH_RDY_not_used()
{
  DEF_CAN_FIRE_not_used = (tUInt8)1u;
  PORT_RDY_not_used = DEF_CAN_FIRE_not_used;
  return PORT_RDY_not_used;
}


/* Reset routines */


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */


/* State dumping routine */
void MOD_mkSceMiUInt32Parameter::dump_state(unsigned int indent)
{
}


/* VCD dumping routines */

unsigned int MOD_mkSceMiUInt32Parameter::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 3u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_not_used", 1u);
  vcd_write_def(sim_hdl, num++, "RDY_not_used", 1u);
  vcd_write_def(sim_hdl, num++, "not_used", 1u);
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mkSceMiUInt32Parameter::dump_VCD(tVCDDumpType dt,
					  unsigned int levels,
					  MOD_mkSceMiUInt32Parameter &backing)
{
  vcd_defs(dt, backing);
}

void MOD_mkSceMiUInt32Parameter::vcd_defs(tVCDDumpType dt, MOD_mkSceMiUInt32Parameter &backing)
{
  unsigned int num = vcd_num;
  if (dt == VCD_DUMP_XS)
  {
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.DEF_CAN_FIRE_not_used) != DEF_CAN_FIRE_not_used)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_not_used, 1u);
	backing.DEF_CAN_FIRE_not_used = DEF_CAN_FIRE_not_used;
      }
      ++num;
      if ((backing.PORT_RDY_not_used) != PORT_RDY_not_used)
      {
	vcd_write_val(sim_hdl, num, PORT_RDY_not_used, 1u);
	backing.PORT_RDY_not_used = PORT_RDY_not_used;
      }
      ++num;
      if ((backing.PORT_not_used) != PORT_not_used)
      {
	vcd_write_val(sim_hdl, num, PORT_not_used, 1u);
	backing.PORT_not_used = PORT_not_used;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_not_used, 1u);
      backing.DEF_CAN_FIRE_not_used = DEF_CAN_FIRE_not_used;
      vcd_write_val(sim_hdl, num++, PORT_RDY_not_used, 1u);
      backing.PORT_RDY_not_used = PORT_RDY_not_used;
      vcd_write_val(sim_hdl, num++, PORT_not_used, 1u);
      backing.PORT_not_used = PORT_not_used;
    }
}