`include "and_gate.v"

module and_gate_tb;
	reg A_t, B_t;
	wire F_t;
	_gate uut(F_t, A_t, B_t);
	initial begin
		A_t <= 0; B_t <= 0;
		#1 $display("Case 0: A = %b, B = %b, F = %b", A_t, B_t, F_t);
		A_t <= 0; B_t <= 1;
		#1 $display("Case 1: A = %b, B = %b, F = %b", A_t, B_t, F_t);
		A_t <= 1; B_t <= 0;
		#1 $display("Case 2: A = %b, B = %b, F = %b", A_t, B_t, F_t);
		A_t <= 1; B_t <= 1;
		#1 $display("Case 3: A = %b, B = %b, F = %b", A_t, B_t, F_t);
	end
endmodule