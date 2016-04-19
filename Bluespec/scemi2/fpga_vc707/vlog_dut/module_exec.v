//
// Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
//
// On Sat Mar 12 14:01:09 EST 2016
//
//
// Ports:
// Name                         I/O  size props
// exec                           O    89
// exec_dInst                     I    75
// exec_rVal1                     I    32
// exec_rVal2                     I    32
// exec_pc                        I    32
// exec_ppc                       I    32
// exec_csrVal                    I    32
//
// Combinational paths from inputs to outputs:
//   (exec_dInst, exec_rVal1, exec_rVal2, exec_pc, exec_ppc, exec_csrVal) -> exec
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

module module_exec(exec_dInst,
		   exec_rVal1,
		   exec_rVal2,
		   exec_pc,
		   exec_ppc,
		   exec_csrVal,
		   exec);
  // value method exec
  input  [74 : 0] exec_dInst;
  input  [31 : 0] exec_rVal1;
  input  [31 : 0] exec_rVal2;
  input  [31 : 0] exec_pc;
  input  [31 : 0] exec_ppc;
  input  [31 : 0] exec_csrVal;
  output [88 : 0] exec;

  // signals for module outputs
  wire [88 : 0] exec;

  // remaining internal signals
  reg [31 : 0] x__h253, x__h400;
  wire [78 : 0] exec_dInst_BIT_45_CONCAT_IF_exec_dInst_BIT_45__ETC___d38;
  wire [31 : 0] aluRes__h30, aluVal2__h29, brAddr__h36, exec_pc_PLUS_4___d15;
  wire aluBr___d32;

  // value method exec
  assign exec =
	     { exec_dInst[74:71],
	       exec_dInst[63:58],
	       exec_dInst_BIT_45_CONCAT_IF_exec_dInst_BIT_45__ETC___d38 } ;

  // remaining internal signals
  module_alu instance_alu_1(.alu_a(exec_rVal1),
			    .alu_b(aluVal2__h29),
			    .alu_func(exec_dInst[70:67]),
			    .alu(aluRes__h30));
  module_aluBr instance_aluBr_0(.aluBr_a(exec_rVal1),
				.aluBr_b(exec_rVal2),
				.aluBr_brFunc(exec_dInst[66:64]),
				.aluBr(aluBr___d32));
  module_brAddrCalc instance_brAddrCalc_2(.brAddrCalc_pc(exec_pc),
					  .brAddrCalc_val(exec_rVal1),
					  .brAddrCalc_iType(exec_dInst[74:71]),
					  .brAddrCalc_imm(exec_dInst[31:0]),
					  .brAddrCalc_taken(aluBr___d32),
					  .brAddrCalc(brAddr__h36));
  assign aluVal2__h29 = exec_dInst[32] ? exec_dInst[31:0] : exec_rVal2 ;
  assign exec_dInst_BIT_45_CONCAT_IF_exec_dInst_BIT_45__ETC___d38 =
	     { exec_dInst[45:33],
	       x__h253,
	       x__h400,
	       brAddr__h36 != exec_ppc,
	       aluBr___d32 } ;
  assign exec_pc_PLUS_4___d15 = exec_pc + 32'd4 ;
  always@(exec_dInst or
	  aluRes__h30 or
	  exec_rVal2 or
	  exec_pc_PLUS_4___d15 or exec_csrVal or exec_rVal1 or exec_pc)
  begin
    case (exec_dInst[74:71])
      4'd3: x__h253 = exec_rVal2;
      4'd4, 4'd5: x__h253 = exec_pc_PLUS_4___d15;
      4'd7: x__h253 = exec_csrVal;
      4'd8: x__h253 = exec_rVal1;
      4'd9: x__h253 = exec_pc + exec_dInst[31:0];
      default: x__h253 = aluRes__h30;
    endcase
  end
  always@(exec_dInst or brAddr__h36 or aluRes__h30)
  begin
    case (exec_dInst[74:71])
      4'd2, 4'd3: x__h400 = aluRes__h30;
      default: x__h400 = brAddr__h36;
    endcase
  end
endmodule  // module_exec
