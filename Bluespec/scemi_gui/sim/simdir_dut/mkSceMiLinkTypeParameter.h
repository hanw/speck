/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Mon May  2 16:08:02 EDT 2016
 * 
 */

/* Generation options: keep-fires */
#ifndef __mkSceMiLinkTypeParameter_h__
#define __mkSceMiLinkTypeParameter_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkSceMiLinkTypeParameter module */
class MOD_mkSceMiLinkTypeParameter : public Module {
 
 /* Clock handles */
 private:
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
  tUInt8 const PARAM_link_type;
 
 /* Module state */
 public:
 
 /* Constructor */
 public:
  MOD_mkSceMiLinkTypeParameter(tSimStateHdl simHdl,
			       char const *name,
			       Module *parent,
			       tUInt8 ARG_link_type);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
 
 /* Port definitions */
 public:
  tUInt8 PORT_not_used;
  tUInt8 PORT_RDY_not_used;
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_CAN_FIRE_not_used;
 
 /* Local definitions */
 private:
 
 /* Rules */
 public:
 
 /* Methods */
 public:
  tUInt8 METH_not_used();
  tUInt8 METH_RDY_not_used();
 
 /* Reset routines */
 public:
 
 /* Static handles to reset routines */
 public:
 
 /* Pointers to reset fns in parent module for asserting output resets */
 private:
 
 /* Functions for the parent module to register its reset fns */
 public:
 
 /* Functions to set the elaborated clock id */
 public:
 
 /* State dumping routine */
 public:
  void dump_state(unsigned int indent);
 
 /* VCD dumping routines */
 public:
  unsigned int dump_VCD_defs(unsigned int levels);
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkSceMiLinkTypeParameter &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkSceMiLinkTypeParameter &backing);
};

#endif /* ifndef __mkSceMiLinkTypeParameter_h__ */
