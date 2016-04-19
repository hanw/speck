//
// Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
//
// On Sat Mar 12 14:01:09 EST 2016
//
//
// Ports:
// Name                         I/O  size props
// alu                            O    32
// alu_a                          I    32
// alu_b                          I    32
// alu_func                       I     4
//
// Combinational paths from inputs to outputs:
//   (alu_a, alu_b, alu_func) -> alu
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

module module_alu(alu_a,
		  alu_b,
		  alu_func,
		  alu);
  // value method alu
  input  [31 : 0] alu_a;
  input  [31 : 0] alu_b;
  input  [3 : 0] alu_func;
  output [31 : 0] alu;

  // signals for module outputs
  reg [31 : 0] alu;

  // remaining internal signals
  wire x__h90, x__h98;

  // value method alu
  always@(alu_func or alu_a or alu_b or x__h90 or x__h98)
  begin
    case (alu_func)
      4'd0: alu = alu_a + alu_b;
      4'd1: alu = alu_a - alu_b;
      4'd2: alu = alu_a & alu_b;
      4'd3: alu = alu_a | alu_b;
      4'd4: alu = alu_a ^ alu_b;
      4'd5: alu = { 31'd0, x__h90 };
      4'd6: alu = { 31'd0, x__h98 };
      4'd7: alu = alu_a << alu_b[4:0];
      4'd9: alu = alu_a >> alu_b[4:0];
      default: alu =
		   alu_a >> alu_b[4:0] |
		   ~(32'hFFFFFFFF >> alu_b[4:0]) & {32{alu_a[31]}};
    endcase
  end

  // remaining internal signals
  assign x__h90 = (alu_a ^ 32'h80000000) < (alu_b ^ 32'h80000000) ;
  assign x__h98 = alu_a < alu_b ;
endmodule  // module_alu
