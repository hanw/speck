/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Wed Mar  2 23:25:02 EST 2016
 * 
 */
#include "bluesim_primitives.h"
#include "mkSynthesizedIFFT.h"


/* Literal declarations */
static unsigned int const UWide_literal_512_haaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa_arr[] = { 2863311530u,
																							2863311530u,
																							2863311530u,
																							2863311530u,
																							2863311530u,
																							2863311530u,
																							2863311530u,
																							2863311530u,
																							2863311530u,
																							2863311530u,
																							2863311530u,
																							2863311530u,
																							2863311530u,
																							2863311530u,
																							2863311530u,
																							2863311530u };
static tUWide const UWide_literal_512_haaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa(512u,
																					UWide_literal_512_haaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa_arr);


/* Constructor */
MOD_mkSynthesizedIFFT::MOD_mkSynthesizedIFFT(tSimStateHdl simHdl, char const *name, Module *parent)
  : Module(simHdl, name, parent),
    __clk_handle_0(BAD_CLOCK_HANDLE),
    INST_ifft_fft_fft_inputFIFO(simHdl, "ifft_fft_fft_inputFIFO", this, 512u, 2u, 1u, 0u),
    INST_ifft_fft_fft_outputFIFO(simHdl, "ifft_fft_fft_outputFIFO", this, 512u, 2u, 1u, 0u),
    INST_ifft_outfifo(simHdl, "ifft_outfifo", this, 512u, 2u, 1u, 0u),
    PORT_RST_N((tUInt8)1u),
    DEF_ifft_fft_fft_outputFIFO_first____d7(512u),
    DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d46(512u),
    DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d36(384u),
    DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d58(512u),
    DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d55(384u),
    DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d26(256u),
    DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d52(256u),
    DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d16(128u),
    DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d49(128u),
    DEF_response_get__avValue1(512u)
{
  PORT_EN_request_put = false;
  PORT_EN_response_get = false;
  PORT_request_put.setSize(512u);
  PORT_request_put.clear();
  PORT_RDY_request_put = false;
  PORT_response_get.setSize(512u);
  PORT_response_get.clear();
  PORT_RDY_response_get = false;
  symbol_count = 19u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mkSynthesizedIFFT::init_symbols_0()
{
  init_symbol(&symbols[0u],
	      "CAN_FIRE_RL_ifft_fft_fft_comb_fft",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_ifft_fft_fft_comb_fft,
	      1u);
  init_symbol(&symbols[1u],
	      "CAN_FIRE_RL_ifft_inversify",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_ifft_inversify,
	      1u);
  init_symbol(&symbols[2u], "CAN_FIRE_request_put", SYM_DEF, &DEF_CAN_FIRE_request_put, 1u);
  init_symbol(&symbols[3u], "CAN_FIRE_response_get", SYM_DEF, &DEF_CAN_FIRE_response_get, 1u);
  init_symbol(&symbols[4u], "EN_request_put", SYM_PORT, &PORT_EN_request_put, 1u);
  init_symbol(&symbols[5u], "EN_response_get", SYM_PORT, &PORT_EN_response_get, 1u);
  init_symbol(&symbols[6u], "ifft_fft_fft_inputFIFO", SYM_MODULE, &INST_ifft_fft_fft_inputFIFO);
  init_symbol(&symbols[7u], "ifft_fft_fft_outputFIFO", SYM_MODULE, &INST_ifft_fft_fft_outputFIFO);
  init_symbol(&symbols[8u], "ifft_outfifo", SYM_MODULE, &INST_ifft_outfifo);
  init_symbol(&symbols[9u], "RDY_request_put", SYM_PORT, &PORT_RDY_request_put, 1u);
  init_symbol(&symbols[10u], "RDY_response_get", SYM_PORT, &PORT_RDY_response_get, 1u);
  init_symbol(&symbols[11u], "RL_ifft_fft_fft_comb_fft", SYM_RULE);
  init_symbol(&symbols[12u], "RL_ifft_inversify", SYM_RULE);
  init_symbol(&symbols[13u], "request_put", SYM_PORT, &PORT_request_put, 512u);
  init_symbol(&symbols[14u], "response_get", SYM_PORT, &PORT_response_get, 512u);
  init_symbol(&symbols[15u],
	      "WILL_FIRE_RL_ifft_fft_fft_comb_fft",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_ifft_fft_fft_comb_fft,
	      1u);
  init_symbol(&symbols[16u],
	      "WILL_FIRE_RL_ifft_inversify",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_ifft_inversify,
	      1u);
  init_symbol(&symbols[17u], "WILL_FIRE_request_put", SYM_DEF, &DEF_WILL_FIRE_request_put, 1u);
  init_symbol(&symbols[18u], "WILL_FIRE_response_get", SYM_DEF, &DEF_WILL_FIRE_response_get, 1u);
}


/* Rule actions */

void MOD_mkSynthesizedIFFT::RL_ifft_fft_fft_comb_fft()
{
  INST_ifft_fft_fft_inputFIFO.METH_deq();
  INST_ifft_fft_fft_outputFIFO.METH_enq(UWide_literal_512_haaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa);
}

void MOD_mkSynthesizedIFFT::RL_ifft_inversify()
{
  tUInt32 DEF_x__h3420;
  tUInt32 DEF_x__h3330;
  tUInt32 DEF_x__h3062;
  tUInt32 DEF_x__h2972;
  tUInt32 DEF_x__h3778;
  tUInt32 DEF_x__h3688;
  tUInt32 DEF_x__h2883;
  tUInt32 DEF_x__h2793;
  tUInt32 DEF_x__h2704;
  tUInt32 DEF_x__h2434;
  tUInt32 DEF_x__h3241;
  tUInt32 DEF_x__h3151;
  tUInt32 DEF_x__h3599;
  tUInt32 DEF_x__h3509;
  tUInt32 DEF_x__h3957;
  tUInt32 DEF_x__h3867;
  DEF_ifft_fft_fft_outputFIFO_first____d7 = INST_ifft_fft_fft_outputFIFO.METH_first();
  DEF_x__h3867 = primShiftRA32(32u,
			       32u,
			       (tUInt32)(DEF_ifft_fft_fft_outputFIFO_first____d7.get_whole_word(1u)),
			       32u,
			       3u);
  DEF_x__h3957 = primShiftRA32(32u,
			       32u,
			       (tUInt32)(DEF_ifft_fft_fft_outputFIFO_first____d7.get_whole_word(0u)),
			       32u,
			       3u);
  DEF_x__h3509 = primShiftRA32(32u,
			       32u,
			       (tUInt32)(DEF_ifft_fft_fft_outputFIFO_first____d7.get_whole_word(13u)),
			       32u,
			       3u);
  DEF_x__h3599 = primShiftRA32(32u,
			       32u,
			       (tUInt32)(DEF_ifft_fft_fft_outputFIFO_first____d7.get_whole_word(12u)),
			       32u,
			       3u);
  DEF_x__h3151 = primShiftRA32(32u,
			       32u,
			       (tUInt32)(DEF_ifft_fft_fft_outputFIFO_first____d7.get_whole_word(9u)),
			       32u,
			       3u);
  DEF_x__h3241 = primShiftRA32(32u,
			       32u,
			       (tUInt32)(DEF_ifft_fft_fft_outputFIFO_first____d7.get_whole_word(8u)),
			       32u,
			       3u);
  DEF_x__h2434 = primShiftRA32(32u,
			       32u,
			       (tUInt32)(DEF_ifft_fft_fft_outputFIFO_first____d7.get_whole_word(3u)),
			       32u,
			       3u);
  DEF_x__h2704 = primShiftRA32(32u,
			       32u,
			       (tUInt32)(DEF_ifft_fft_fft_outputFIFO_first____d7.get_whole_word(2u)),
			       32u,
			       3u);
  DEF_x__h2793 = primShiftRA32(32u,
			       32u,
			       (tUInt32)(DEF_ifft_fft_fft_outputFIFO_first____d7.get_whole_word(5u)),
			       32u,
			       3u);
  DEF_x__h2883 = primShiftRA32(32u,
			       32u,
			       (tUInt32)(DEF_ifft_fft_fft_outputFIFO_first____d7.get_whole_word(4u)),
			       32u,
			       3u);
  DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d16.set_whole_word(DEF_x__h2434,
									      3u).set_whole_word(DEF_x__h2704,
												 2u).set_whole_word(DEF_x__h2793,
														    1u).set_whole_word(DEF_x__h2883,
																       0u);
  DEF_x__h3688 = primShiftRA32(32u,
			       32u,
			       (tUInt32)(DEF_ifft_fft_fft_outputFIFO_first____d7.get_whole_word(15u)),
			       32u,
			       3u);
  DEF_x__h3778 = primShiftRA32(32u,
			       32u,
			       (tUInt32)(DEF_ifft_fft_fft_outputFIFO_first____d7.get_whole_word(14u)),
			       32u,
			       3u);
  DEF_x__h2972 = primShiftRA32(32u,
			       32u,
			       (tUInt32)(DEF_ifft_fft_fft_outputFIFO_first____d7.get_whole_word(7u)),
			       32u,
			       3u);
  DEF_x__h3062 = primShiftRA32(32u,
			       32u,
			       (tUInt32)(DEF_ifft_fft_fft_outputFIFO_first____d7.get_whole_word(6u)),
			       32u,
			       3u);
  DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d26.set_whole_word(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d16.get_whole_word(3u),
									      7u).set_whole_word(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d16.get_whole_word(2u),
												 6u).set_whole_word(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d16.get_whole_word(1u),
														    5u).build_concat(bs_wide_tmp(160u).set_whole_word(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d16.get_whole_word(0u),
																				      4u).set_whole_word(DEF_x__h2972,
																							 3u).set_whole_word(DEF_x__h3062,
																									    2u).set_whole_word(DEF_x__h3151,
																											       1u).set_whole_word(DEF_x__h3241,
																														  0u),
																     0u,
																     160u);
  DEF_x__h3330 = primShiftRA32(32u,
			       32u,
			       (tUInt32)(DEF_ifft_fft_fft_outputFIFO_first____d7.get_whole_word(11u)),
			       32u,
			       3u);
  INST_ifft_fft_fft_outputFIFO.METH_deq();
  DEF_x__h3420 = primShiftRA32(32u,
			       32u,
			       (tUInt32)(DEF_ifft_fft_fft_outputFIFO_first____d7.get_whole_word(10u)),
			       32u,
			       3u);
  DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d36.set_whole_word(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d26.get_whole_word(7u),
									      11u).set_whole_word(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d26.get_whole_word(6u),
												  10u).set_whole_word(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d26.get_whole_word(5u),
														      9u).set_whole_word(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d26.get_whole_word(4u),
																	 8u).set_whole_word(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d26.get_whole_word(3u),
																			    7u).set_whole_word(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d26.get_whole_word(2u),
																					       6u).set_whole_word(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d26.get_whole_word(1u),
																								  5u).build_concat(bs_wide_tmp(160u).set_whole_word(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d26.get_whole_word(0u),
																														    4u).set_whole_word(DEF_x__h3330,
																																       3u).set_whole_word(DEF_x__h3420,
																																			  2u).set_whole_word(DEF_x__h3509,
																																					     1u).set_whole_word(DEF_x__h3599,
																																								0u),
																										   0u,
																										   160u);
  DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d46.set_whole_word(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d36.get_whole_word(11u),
									      15u).set_whole_word(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d36.get_whole_word(10u),
												  14u).set_whole_word(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d36.get_whole_word(9u),
														      13u).set_whole_word(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d36.get_whole_word(8u),
																	  12u).set_whole_word(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d36.get_whole_word(7u),
																			      11u).set_whole_word(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d36.get_whole_word(6u),
																						  10u).set_whole_word(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d36.get_whole_word(5u),
																								      9u).set_whole_word(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d36.get_whole_word(4u),
																											 8u).set_whole_word(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d36.get_whole_word(3u),
																													    7u).set_whole_word(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d36.get_whole_word(2u),
																															       6u).set_whole_word(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d36.get_whole_word(1u),
																																		  5u).build_concat(bs_wide_tmp(160u).set_whole_word(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d36.get_whole_word(0u),
																																								    4u).set_whole_word(DEF_x__h3688,
																																										       3u).set_whole_word(DEF_x__h3778,
																																													  2u).set_whole_word(DEF_x__h3867,
																																															     1u).set_whole_word(DEF_x__h3957,
																																																		0u),
																																				   0u,
																																				   160u);
  INST_ifft_outfifo.METH_enq(DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d46);
}


/* Methods */

void MOD_mkSynthesizedIFFT::METH_request_put(tUWide ARG_request_put)
{
  PORT_EN_request_put = (tUInt8)1u;
  DEF_WILL_FIRE_request_put = (tUInt8)1u;
  PORT_request_put = ARG_request_put;
  DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d49.set_whole_word(ARG_request_put.get_whole_word(15u),
									      3u).build_concat((((tUInt64)(ARG_request_put.get_whole_word(14u))) << 32u) | (tUInt64)(ARG_request_put.get_whole_word(7u)),
											       32u,
											       64u).set_whole_word(ARG_request_put.get_whole_word(6u),
														   0u);
  DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d52.set_whole_word(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d49.get_whole_word(3u),
									      7u).set_whole_word(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d49.get_whole_word(2u),
												 6u).set_whole_word(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d49.get_whole_word(1u),
														    5u).build_concat((((tUInt64)(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d49.get_whole_word(0u))) << 32u) | (tUInt64)(ARG_request_put.get_whole_word(11u)),
																     96u,
																     64u).build_concat((((tUInt64)(ARG_request_put.get_whole_word(10u))) << 32u) | (tUInt64)(ARG_request_put.get_whole_word(3u)),
																		       32u,
																		       64u).set_whole_word(ARG_request_put.get_whole_word(2u),
																					   0u);
  DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d55.set_whole_word(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d52.get_whole_word(7u),
									      11u).set_whole_word(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d52.get_whole_word(6u),
												  10u).set_whole_word(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d52.get_whole_word(5u),
														      9u).set_whole_word(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d52.get_whole_word(4u),
																	 8u).set_whole_word(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d52.get_whole_word(3u),
																			    7u).set_whole_word(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d52.get_whole_word(2u),
																					       6u).set_whole_word(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d52.get_whole_word(1u),
																								  5u).build_concat((((tUInt64)(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d52.get_whole_word(0u))) << 32u) | (tUInt64)(ARG_request_put.get_whole_word(13u)),
																										   96u,
																										   64u).build_concat((((tUInt64)(ARG_request_put.get_whole_word(12u))) << 32u) | (tUInt64)(ARG_request_put.get_whole_word(5u)),
																												     32u,
																												     64u).set_whole_word(ARG_request_put.get_whole_word(4u),
																															 0u);
  DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d58.set_whole_word(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d55.get_whole_word(11u),
									      15u).set_whole_word(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d55.get_whole_word(10u),
												  14u).set_whole_word(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d55.get_whole_word(9u),
														      13u).set_whole_word(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d55.get_whole_word(8u),
																	  12u).set_whole_word(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d55.get_whole_word(7u),
																			      11u).set_whole_word(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d55.get_whole_word(6u),
																						  10u).set_whole_word(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d55.get_whole_word(5u),
																								      9u).set_whole_word(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d55.get_whole_word(4u),
																											 8u).set_whole_word(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d55.get_whole_word(3u),
																													    7u).set_whole_word(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d55.get_whole_word(2u),
																															       6u).set_whole_word(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d55.get_whole_word(1u),
																																		  5u).build_concat((((tUInt64)(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d55.get_whole_word(0u))) << 32u) | (tUInt64)(ARG_request_put.get_whole_word(9u)),
																																				   96u,
																																				   64u).build_concat((((tUInt64)(ARG_request_put.get_whole_word(8u))) << 32u) | (tUInt64)(ARG_request_put.get_whole_word(1u)),
																																						     32u,
																																						     64u).set_whole_word(ARG_request_put.get_whole_word(0u),
																																									 0u);
  INST_ifft_fft_fft_inputFIFO.METH_enq(DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d58);
}

tUInt8 MOD_mkSynthesizedIFFT::METH_RDY_request_put()
{
  DEF_CAN_FIRE_request_put = INST_ifft_fft_fft_inputFIFO.METH_i_notFull();
  PORT_RDY_request_put = DEF_CAN_FIRE_request_put;
  return PORT_RDY_request_put;
}

tUWide MOD_mkSynthesizedIFFT::METH_response_get()
{
  PORT_EN_response_get = (tUInt8)1u;
  DEF_WILL_FIRE_response_get = (tUInt8)1u;
  DEF_response_get__avValue1 = INST_ifft_outfifo.METH_first();
  PORT_response_get = DEF_response_get__avValue1;
  INST_ifft_outfifo.METH_deq();
  return PORT_response_get;
}

tUInt8 MOD_mkSynthesizedIFFT::METH_RDY_response_get()
{
  DEF_CAN_FIRE_response_get = INST_ifft_outfifo.METH_i_notEmpty();
  PORT_RDY_response_get = DEF_CAN_FIRE_response_get;
  return PORT_RDY_response_get;
}


/* Reset routines */

void MOD_mkSynthesizedIFFT::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
  INST_ifft_outfifo.reset_RST(ARG_rst_in);
  INST_ifft_fft_fft_outputFIFO.reset_RST(ARG_rst_in);
  INST_ifft_fft_fft_inputFIFO.reset_RST(ARG_rst_in);
}


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */

void MOD_mkSynthesizedIFFT::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mkSynthesizedIFFT::dump_state(unsigned int indent)
{
  printf("%*s%s:\n", indent, "", inst_name);
  INST_ifft_fft_fft_inputFIFO.dump_state(indent + 2u);
  INST_ifft_fft_fft_outputFIFO.dump_state(indent + 2u);
  INST_ifft_outfifo.dump_state(indent + 2u);
}


/* VCD dumping routines */

unsigned int MOD_mkSynthesizedIFFT::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 28u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_ifft_fft_fft_comb_fft", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_ifft_inversify", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_request_put", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_response_get", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_ifft_fft_fft_comb_fft", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_ifft_inversify", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_request_put", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_response_get", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d16", 128u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d26", 256u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d36", 384u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d46", 512u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "ifft_fft_fft_outputFIFO_first____d7", 512u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d49", 128u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d52", 256u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d55", 384u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d58", 512u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "response_get__avValue1", 512u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "EN_request_put", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "EN_response_get", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "RDY_request_put", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "RDY_response_get", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "request_put", 512u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "response_get", 512u);
  num = INST_ifft_fft_fft_inputFIFO.dump_VCD_defs(num);
  num = INST_ifft_fft_fft_outputFIFO.dump_VCD_defs(num);
  num = INST_ifft_outfifo.dump_VCD_defs(num);
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mkSynthesizedIFFT::dump_VCD(tVCDDumpType dt,
				     unsigned int levels,
				     MOD_mkSynthesizedIFFT &backing)
{
  vcd_defs(dt, backing);
  vcd_prims(dt, backing);
}

void MOD_mkSynthesizedIFFT::vcd_defs(tVCDDumpType dt, MOD_mkSynthesizedIFFT &backing)
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
    vcd_write_x(sim_hdl, num++, 128u);
    vcd_write_x(sim_hdl, num++, 256u);
    vcd_write_x(sim_hdl, num++, 384u);
    vcd_write_x(sim_hdl, num++, 512u);
    vcd_write_x(sim_hdl, num++, 512u);
    vcd_write_x(sim_hdl, num++, 128u);
    vcd_write_x(sim_hdl, num++, 256u);
    vcd_write_x(sim_hdl, num++, 384u);
    vcd_write_x(sim_hdl, num++, 512u);
    vcd_write_x(sim_hdl, num++, 512u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 512u);
    vcd_write_x(sim_hdl, num++, 512u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.DEF_CAN_FIRE_RL_ifft_fft_fft_comb_fft) != DEF_CAN_FIRE_RL_ifft_fft_fft_comb_fft)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_ifft_fft_fft_comb_fft, 1u);
	backing.DEF_CAN_FIRE_RL_ifft_fft_fft_comb_fft = DEF_CAN_FIRE_RL_ifft_fft_fft_comb_fft;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_ifft_inversify) != DEF_CAN_FIRE_RL_ifft_inversify)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_ifft_inversify, 1u);
	backing.DEF_CAN_FIRE_RL_ifft_inversify = DEF_CAN_FIRE_RL_ifft_inversify;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_request_put) != DEF_CAN_FIRE_request_put)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_request_put, 1u);
	backing.DEF_CAN_FIRE_request_put = DEF_CAN_FIRE_request_put;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_response_get) != DEF_CAN_FIRE_response_get)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_response_get, 1u);
	backing.DEF_CAN_FIRE_response_get = DEF_CAN_FIRE_response_get;
      }
      ++num;
      if ((backing.PORT_RST_N) != PORT_RST_N)
      {
	vcd_write_val(sim_hdl, num, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_ifft_fft_fft_comb_fft) != DEF_WILL_FIRE_RL_ifft_fft_fft_comb_fft)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_ifft_fft_fft_comb_fft, 1u);
	backing.DEF_WILL_FIRE_RL_ifft_fft_fft_comb_fft = DEF_WILL_FIRE_RL_ifft_fft_fft_comb_fft;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_ifft_inversify) != DEF_WILL_FIRE_RL_ifft_inversify)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_ifft_inversify, 1u);
	backing.DEF_WILL_FIRE_RL_ifft_inversify = DEF_WILL_FIRE_RL_ifft_inversify;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_request_put) != DEF_WILL_FIRE_request_put)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_request_put, 1u);
	backing.DEF_WILL_FIRE_request_put = DEF_WILL_FIRE_request_put;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_response_get) != DEF_WILL_FIRE_response_get)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_response_get, 1u);
	backing.DEF_WILL_FIRE_response_get = DEF_WILL_FIRE_response_get;
      }
      ++num;
      if ((backing.DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d16) != DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d16)
      {
	vcd_write_val(sim_hdl, num, DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d16, 128u);
	backing.DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d16 = DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d16;
      }
      ++num;
      if ((backing.DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d26) != DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d26)
      {
	vcd_write_val(sim_hdl, num, DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d26, 256u);
	backing.DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d26 = DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d26;
      }
      ++num;
      if ((backing.DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d36) != DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d36)
      {
	vcd_write_val(sim_hdl, num, DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d36, 384u);
	backing.DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d36 = DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d36;
      }
      ++num;
      if ((backing.DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d46) != DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d46)
      {
	vcd_write_val(sim_hdl, num, DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d46, 512u);
	backing.DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d46 = DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d46;
      }
      ++num;
      if ((backing.DEF_ifft_fft_fft_outputFIFO_first____d7) != DEF_ifft_fft_fft_outputFIFO_first____d7)
      {
	vcd_write_val(sim_hdl, num, DEF_ifft_fft_fft_outputFIFO_first____d7, 512u);
	backing.DEF_ifft_fft_fft_outputFIFO_first____d7 = DEF_ifft_fft_fft_outputFIFO_first____d7;
      }
      ++num;
      if ((backing.DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d49) != DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d49)
      {
	vcd_write_val(sim_hdl, num, DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d49, 128u);
	backing.DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d49 = DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d49;
      }
      ++num;
      if ((backing.DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d52) != DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d52)
      {
	vcd_write_val(sim_hdl, num, DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d52, 256u);
	backing.DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d52 = DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d52;
      }
      ++num;
      if ((backing.DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d55) != DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d55)
      {
	vcd_write_val(sim_hdl, num, DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d55, 384u);
	backing.DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d55 = DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d55;
      }
      ++num;
      if ((backing.DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d58) != DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d58)
      {
	vcd_write_val(sim_hdl, num, DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d58, 512u);
	backing.DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d58 = DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d58;
      }
      ++num;
      if ((backing.DEF_response_get__avValue1) != DEF_response_get__avValue1)
      {
	vcd_write_val(sim_hdl, num, DEF_response_get__avValue1, 512u);
	backing.DEF_response_get__avValue1 = DEF_response_get__avValue1;
      }
      ++num;
      if ((backing.PORT_EN_request_put) != PORT_EN_request_put)
      {
	vcd_write_val(sim_hdl, num, PORT_EN_request_put, 1u);
	backing.PORT_EN_request_put = PORT_EN_request_put;
      }
      ++num;
      if ((backing.PORT_EN_response_get) != PORT_EN_response_get)
      {
	vcd_write_val(sim_hdl, num, PORT_EN_response_get, 1u);
	backing.PORT_EN_response_get = PORT_EN_response_get;
      }
      ++num;
      if ((backing.PORT_RDY_request_put) != PORT_RDY_request_put)
      {
	vcd_write_val(sim_hdl, num, PORT_RDY_request_put, 1u);
	backing.PORT_RDY_request_put = PORT_RDY_request_put;
      }
      ++num;
      if ((backing.PORT_RDY_response_get) != PORT_RDY_response_get)
      {
	vcd_write_val(sim_hdl, num, PORT_RDY_response_get, 1u);
	backing.PORT_RDY_response_get = PORT_RDY_response_get;
      }
      ++num;
      if ((backing.PORT_request_put) != PORT_request_put)
      {
	vcd_write_val(sim_hdl, num, PORT_request_put, 512u);
	backing.PORT_request_put = PORT_request_put;
      }
      ++num;
      if ((backing.PORT_response_get) != PORT_response_get)
      {
	vcd_write_val(sim_hdl, num, PORT_response_get, 512u);
	backing.PORT_response_get = PORT_response_get;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_ifft_fft_fft_comb_fft, 1u);
      backing.DEF_CAN_FIRE_RL_ifft_fft_fft_comb_fft = DEF_CAN_FIRE_RL_ifft_fft_fft_comb_fft;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_ifft_inversify, 1u);
      backing.DEF_CAN_FIRE_RL_ifft_inversify = DEF_CAN_FIRE_RL_ifft_inversify;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_request_put, 1u);
      backing.DEF_CAN_FIRE_request_put = DEF_CAN_FIRE_request_put;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_response_get, 1u);
      backing.DEF_CAN_FIRE_response_get = DEF_CAN_FIRE_response_get;
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_ifft_fft_fft_comb_fft, 1u);
      backing.DEF_WILL_FIRE_RL_ifft_fft_fft_comb_fft = DEF_WILL_FIRE_RL_ifft_fft_fft_comb_fft;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_ifft_inversify, 1u);
      backing.DEF_WILL_FIRE_RL_ifft_inversify = DEF_WILL_FIRE_RL_ifft_inversify;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_request_put, 1u);
      backing.DEF_WILL_FIRE_request_put = DEF_WILL_FIRE_request_put;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_response_get, 1u);
      backing.DEF_WILL_FIRE_response_get = DEF_WILL_FIRE_response_get;
      vcd_write_val(sim_hdl, num++, DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d16, 128u);
      backing.DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d16 = DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d16;
      vcd_write_val(sim_hdl, num++, DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d26, 256u);
      backing.DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d26 = DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d26;
      vcd_write_val(sim_hdl, num++, DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d36, 384u);
      backing.DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d36 = DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d36;
      vcd_write_val(sim_hdl, num++, DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d46, 512u);
      backing.DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d46 = DEF_ifft_fft_fft_outputFIFO_first_BITS_127_TO_96_S_ETC___d46;
      vcd_write_val(sim_hdl, num++, DEF_ifft_fft_fft_outputFIFO_first____d7, 512u);
      backing.DEF_ifft_fft_fft_outputFIFO_first____d7 = DEF_ifft_fft_fft_outputFIFO_first____d7;
      vcd_write_val(sim_hdl, num++, DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d49, 128u);
      backing.DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d49 = DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d49;
      vcd_write_val(sim_hdl, num++, DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d52, 256u);
      backing.DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d52 = DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d52;
      vcd_write_val(sim_hdl, num++, DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d55, 384u);
      backing.DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d55 = DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d55;
      vcd_write_val(sim_hdl, num++, DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d58, 512u);
      backing.DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d58 = DEF_request_put_BITS_511_TO_448_7_CONCAT_request_p_ETC___d58;
      vcd_write_val(sim_hdl, num++, DEF_response_get__avValue1, 512u);
      backing.DEF_response_get__avValue1 = DEF_response_get__avValue1;
      vcd_write_val(sim_hdl, num++, PORT_EN_request_put, 1u);
      backing.PORT_EN_request_put = PORT_EN_request_put;
      vcd_write_val(sim_hdl, num++, PORT_EN_response_get, 1u);
      backing.PORT_EN_response_get = PORT_EN_response_get;
      vcd_write_val(sim_hdl, num++, PORT_RDY_request_put, 1u);
      backing.PORT_RDY_request_put = PORT_RDY_request_put;
      vcd_write_val(sim_hdl, num++, PORT_RDY_response_get, 1u);
      backing.PORT_RDY_response_get = PORT_RDY_response_get;
      vcd_write_val(sim_hdl, num++, PORT_request_put, 512u);
      backing.PORT_request_put = PORT_request_put;
      vcd_write_val(sim_hdl, num++, PORT_response_get, 512u);
      backing.PORT_response_get = PORT_response_get;
    }
}

void MOD_mkSynthesizedIFFT::vcd_prims(tVCDDumpType dt, MOD_mkSynthesizedIFFT &backing)
{
  INST_ifft_fft_fft_inputFIFO.dump_VCD(dt, backing.INST_ifft_fft_fft_inputFIFO);
  INST_ifft_fft_fft_outputFIFO.dump_VCD(dt, backing.INST_ifft_fft_fft_outputFIFO);
  INST_ifft_outfifo.dump_VCD(dt, backing.INST_ifft_outfifo);
}
