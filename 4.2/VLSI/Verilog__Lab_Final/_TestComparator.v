// `timescale 1ns / 1ps
 
/* Stimulus
Example showing two bit comparator
*/
 
module stimulus1;
 
	reg  x;
	reg  y;
    wire z; 
 
	// Instantiate the Unit Under Test (UUT)
	comparator uut (
		.x(x),
		.y(y),
		.z(z)
	);
	 initial begin
    // Initialize Inputs
    x = 0;
    y = 0;
 
    // Wait 100 ns for global reset to finish
    #100;
    #50 x = 1;
    #60 y = 1;
    #70 y = 1;	
    #80 x = 0;	
    end
 
 
initial begin
$monitor("x=%d,y=%d,z=%d \n",x,y,z);
end
 
endmodule