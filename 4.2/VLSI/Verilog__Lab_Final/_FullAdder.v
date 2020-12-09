/* 
Full Adder Module for bit Addition 
*/
module fulladder
(
 input x,
 input y,
 input cin,
 
 output A, 
 output cout
 );
 
assign {cout,A} =  cin + y + x;
 
endmodule
 