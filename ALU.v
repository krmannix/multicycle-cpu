



module ALU(R1, R2, R3, Opcode, ShouldClear);

input ShouldClear;
input [2:0] Opcode;
input [31:0] R2, R3;
output reg [31:0] R1;

always @ (*)
if (Opcode[2:0] == 3'h0) begin
	R1 = R2;
	end else if (Opcode[2:0] == 3'h1) begin
	R1 = ~R2;
	end else if (Opcode[2:0] == 3'h2) begin
	R1 = (R2 + R3);
	end else if (Opcode[2:0] == 3'h3) begin
	R1 = (R2 - R3);
	end else if (Opcode[2:0] == 3'h4) begin
	if (ShouldClear) begin
	R1 = ((R2 & 32'b0) | R3);
	end else begin
	R1 = (R2 | R3);
	end
	end else if (Opcode[2:0] == 3'h5) begin
	R1 = (R2 & R3);
	end else if (Opcode[2:0] == 3'h6) begin
	R1 = (R2^R3);
	end else if (Opcode[2:0] == 3'h7) begin
	R1 = (($signed(R2) < $signed(R3))? 1:0);	
end



endmodule