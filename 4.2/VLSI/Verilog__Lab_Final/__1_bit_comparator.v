// `include "xor_gate.v"
`include "tri_state.v"

module one_bit_tb;
	reg A_t, B_t;
	wire F_t;
	_gate uut(F_t, A_t, B_t);
	initial begin
		$dumpfile("one_bit_gate.vcd");
		$dumpvars(0, one_bit_tb);
		/*
		A_t <= 0; B_t <= 0;
		#1 $display("Case 0: A = %b, B = %b, F = %b", A_t, B_t, F_t);
		A_t <= 0; B_t <= 1;
		#1 $display("Case 1: A = %b, B = %b, F = %b", A_t, B_t, F_t);
		A_t <= 1; B_t <= 0;
		#1 $display("Case 2: A = %b, B = %b, F = %b", A_t, B_t, F_t);
		A_t <= 1; B_t <= 1;
		#1 $display("Case 3: A = %b, B = %b, F = %b", A_t, B_t, F_t);
		*/
		$monitor("A = %b, en = %b, F = %b", A_t, B_t, F_t);
		{A_t, B_t} = 2'd0; #10;		
		{A_t, B_t} = 2'd1; #10;
		{A_t, B_t} = 2'd2; #10;
		{A_t, B_t} = 2'd3; #10;
	end
endmodule