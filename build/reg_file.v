
`define DATA_WIDTH 32
`define ADDR_WIDTH 5
`define REG_NUM 32

module reg_file(
	input                       clk,
	input  [`ADDR_WIDTH - 1:0]  waddr,
	input  [`ADDR_WIDTH - 1:0]  raddr1,
	input  [`ADDR_WIDTH - 1:0]  raddr2,
	input                       wen,
	input  [`DATA_WIDTH - 1:0]  wdata,
	output [`DATA_WIDTH - 1:0]  rdata1,
	output [`DATA_WIDTH - 1:0]  rdata2,

    output [`DATA_WIDTH - 1:0]  gpr_0,
    output [`DATA_WIDTH - 1:0]  gpr_1,
    output [`DATA_WIDTH - 1:0]  gpr_2,
    output [`DATA_WIDTH - 1:0]  gpr_3,
    output [`DATA_WIDTH - 1:0]  gpr_4,
    output [`DATA_WIDTH - 1:0]  gpr_5,
    output [`DATA_WIDTH - 1:0]  gpr_6,
    output [`DATA_WIDTH - 1:0]  gpr_7,
    output [`DATA_WIDTH - 1:0]  gpr_8,
    output [`DATA_WIDTH - 1:0]  gpr_9,
    output [`DATA_WIDTH - 1:0]  gpr_10,
    output [`DATA_WIDTH - 1:0]  gpr_11,
    output [`DATA_WIDTH - 1:0]  gpr_12,
    output [`DATA_WIDTH - 1:0]  gpr_13,
    output [`DATA_WIDTH - 1:0]  gpr_14,
    output [`DATA_WIDTH - 1:0]  gpr_15,
    output [`DATA_WIDTH - 1:0]  gpr_16,
    output [`DATA_WIDTH - 1:0]  gpr_17,
    output [`DATA_WIDTH - 1:0]  gpr_18,
    output [`DATA_WIDTH - 1:0]  gpr_19,
    output [`DATA_WIDTH - 1:0]  gpr_20,
    output [`DATA_WIDTH - 1:0]  gpr_21,
    output [`DATA_WIDTH - 1:0]  gpr_22,
    output [`DATA_WIDTH - 1:0]  gpr_23,
    output [`DATA_WIDTH - 1:0]  gpr_24,
    output [`DATA_WIDTH - 1:0]  gpr_25,
    output [`DATA_WIDTH - 1:0]  gpr_26,
    output [`DATA_WIDTH - 1:0]  gpr_27,
    output [`DATA_WIDTH - 1:0]  gpr_28,
    output [`DATA_WIDTH - 1:0]  gpr_29,
    output [`DATA_WIDTH - 1:0]  gpr_30,
    output [`DATA_WIDTH - 1:0]  gpr_31
);

	// TODO: Please add your logic design here

	reg [`DATA_WIDTH - 1:0] rf [`REG_NUM - 1:0];

	always @(posedge clk) begin
		if (wen == 1'b1 && waddr != `ADDR_WIDTH'b0) begin
			rf[waddr] <= wdata;
		end
	end

	// Judgment signal for whether the address is 0
	wire not_zero_adder1 = | raddr1;
	wire not_zero_adder2 = | raddr2;

	assign rdata1 = {`DATA_WIDTH{not_zero_adder1}} & rf[raddr1];
	assign rdata2 = {`DATA_WIDTH{not_zero_adder2}} & rf[raddr2];

    assign gpr_0 = rf[0];
    assign gpr_1 = rf[1];
    assign gpr_2 = rf[2];
    assign gpr_3 = rf[3];
    assign gpr_4 = rf[4];
    assign gpr_5 = rf[5];
    assign gpr_6 = rf[6];
    assign gpr_7 = rf[7];
    assign gpr_8 = rf[8];
    assign gpr_9 = rf[9];
    assign gpr_10 = rf[10];
    assign gpr_11 = rf[11];
    assign gpr_12 = rf[12];
    assign gpr_13 = rf[13];
    assign gpr_14 = rf[14];
    assign gpr_15 = rf[15];
    assign gpr_16 = rf[16];
    assign gpr_17 = rf[17];
    assign gpr_18 = rf[18];
    assign gpr_19 = rf[19];
    assign gpr_20 = rf[20];
    assign gpr_21 = rf[21];
    assign gpr_22 = rf[22];
    assign gpr_23 = rf[23];
    assign gpr_24 = rf[24];
    assign gpr_25 = rf[25];
    assign gpr_26 = rf[26];
    assign gpr_27 = rf[27];
    assign gpr_28 = rf[28];
    assign gpr_29 = rf[29];
    assign gpr_30 = rf[30];
    assign gpr_31 = rf[31];

endmodule
