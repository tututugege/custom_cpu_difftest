module SimTop(
    input         clock,
    input         reset,

    input  [63:0] io_logCtrl_log_begin,
    input  [63:0] io_logCtrl_log_end,
    input  [63:0] io_logCtrl_log_level,
    input         io_perfInfo_clean,
    input         io_perfInfo_dump,

    output        io_uart_out_valid,
    output [7:0]  io_uart_out_ch,
    output        io_uart_in_valid,
    input  [7:0]  io_uart_in_ch

);

    wire RF_wen, MemWrite, MemRead;
    wire Inst_Req_Ready, Inst_Req_Valid;
    wire Inst_Ready, Inst_Valid;
    wire Read_data_Ready, Read_data_Valid, valid;
    wire Mem_Req_Ready;
    wire [31:0] RF_wdata, Read_data, Write_data;
    wire [ 3:0] Write_strb;
    wire [4 :0] RF_waddr;
    wire [31:0] PC, Address, now_PC;
    wire [31:0] Instr;
    wire [31:0] IR;
    wire [31:0] gpr [31:0];
    custom_cpu u_cpu(
        .clk(clock),
        .rst(reset),

        .PC(PC),
        .Inst_Req_Valid(Inst_Req_Valid),
        .Inst_Req_Ready(Inst_Req_Ready),
        .IR_wire(IR),

        .Instruction(Instr),
        .Inst_Valid(Inst_Valid),
        .Inst_Ready(Inst_Ready),

        .RF_wen(RF_wen),
        .RF_wdata(RF_wdata),
        .RF_waddr(RF_waddr),
        .now_PC(now_PC),

        .Address(Address),
        .MemWrite(MemWrite),
        .Write_data(Write_data),
        .Write_strb(Write_strb),
        .MemRead(MemRead),
        .Mem_Req_Ready(Mem_Req_Ready),

        .Read_data(Read_data),
        .Read_data_Valid(Read_data_Valid),
        .Read_data_Ready(Read_data_Ready),

        .valid(valid),

        .gpr_0(gpr[0]),
        .gpr_1(gpr[1]),
        .gpr_2(gpr[2]),
        .gpr_3(gpr[3]),
        .gpr_4(gpr[4]),
        .gpr_5(gpr[5]),
        .gpr_6(gpr[6]),
        .gpr_7(gpr[7]),
        .gpr_8(gpr[8]),
        .gpr_9(gpr[9]),
        .gpr_10(gpr[10]),
        .gpr_11(gpr[11]),
        .gpr_12(gpr[12]),
        .gpr_13(gpr[13]),
        .gpr_14(gpr[14]),
        .gpr_15(gpr[15]),
        .gpr_16(gpr[16]),
        .gpr_17(gpr[17]),
        .gpr_18(gpr[18]),
        .gpr_19(gpr[19]),
        .gpr_20(gpr[20]),
        .gpr_21(gpr[21]),
        .gpr_22(gpr[22]),
        .gpr_23(gpr[23]),
        .gpr_24(gpr[24]),
        .gpr_25(gpr[25]),
        .gpr_26(gpr[26]),
        .gpr_27(gpr[27]),
        .gpr_28(gpr[28]),
        .gpr_29(gpr[29]),
        .gpr_30(gpr[30]),
        .gpr_31(gpr[31])
    );

    MY_RAM u_ram(
        .clk(clock),
        .rst(reset),
        .PC(PC),
        .Inst_Req_Ready(Inst_Req_Ready),
        .Inst_Req_Valid(Inst_Req_Valid),

        .Inst_Ready(Inst_Ready),
        .Inst_Valid(Inst_Valid),
        .instr(Instr),

        // DATA PORT
        .Mem_Req_Ready(Mem_Req_Ready),
        .MemRead(MemRead),
        .MemWrite(MemWrite),
        .Write_strb(Write_strb),
        .Address(Address),
        .Write_data(Write_data),
        .Read_data(Read_data),
        .Read_data_Valid(Read_data_Valid),
        .Read_data_Ready(Read_data_Ready)
    );

    reg r_wen;
    reg [7:0]r_waddr;
    reg [31:0]r_wdata,r_pc;
    reg [31:0]r_inst;
    reg r_valid;

    always @(posedge clock) begin
        if (reset)begin
            r_wen     <= 'd0;
            r_waddr   <= 'd0;
            r_wdata   <= 'd0;
            r_pc      <= 'd0;
            r_inst    <= 'd0;
            r_valid   <= 'd0;
        end
        else begin
            r_wen     <= RF_wen; 
            r_waddr   <= {3'd0,RF_waddr};
            r_wdata   <= RF_wdata;
            r_pc      <= now_PC;
            r_inst    <= IR;
            r_valid   <= valid;
            // if (valid)
            //     $display("RF_wen: %h RF_waddr: %h RF_wdata: %h PC: %h IR: %h", RF_wen, RF_waddr, RF_wdata, PC, IR);

        end
    end

    DifftestInstrCommit u_commit(
        .clock    ( clock ),
        .coreid   ( 8'd0 ),//8bit
        .index    ( 8'd0 ),//8bit
        .valid    ( r_valid),
        .pc       ( r_pc ),//32bit
        .instr    ( r_inst ),//32bit
        .skip     ( 1'b0 ),
        .isRVC    ( 1'b0 ),
        .scFailed ( 1'b0 ),
        .wen      ( r_wen   ),
        .wdest    ( r_waddr ),//8bit
        .wdata    ( r_wdata ), //64bit
        .special  (1'b0)
    );

    DifftestArchIntRegState u_reg(
        .clock (clock),
        .coreid (8'b0),

        .gpr_0(gpr[0]),
        .gpr_1(gpr[1]),
        .gpr_2(gpr[2]),
        .gpr_3(gpr[3]),
        .gpr_4(gpr[4]),
        .gpr_5(gpr[5]),
        .gpr_6(gpr[6]),
        .gpr_7(gpr[7]),
        .gpr_8(gpr[8]),
        .gpr_9(gpr[9]),
        .gpr_10(gpr[10]),
        .gpr_11(gpr[11]),
        .gpr_12(gpr[12]),
        .gpr_13(gpr[13]),
        .gpr_14(gpr[14]),
        .gpr_15(gpr[15]),
        .gpr_16(gpr[16]),
        .gpr_17(gpr[17]),
        .gpr_18(gpr[18]),
        .gpr_19(gpr[19]),
        .gpr_20(gpr[20]),
        .gpr_21(gpr[21]),
        .gpr_22(gpr[22]),
        .gpr_23(gpr[23]),
        .gpr_24(gpr[24]),
        .gpr_25(gpr[25]),
        .gpr_26(gpr[26]),
        .gpr_27(gpr[27]),
        .gpr_28(gpr[28]),
        .gpr_29(gpr[29]),
        .gpr_30(gpr[30]),
        .gpr_31(gpr[31])

    );

    DifftestCSRState u_csr(
        .clock(clock),
        .coreid('b0),
        .priviledgeMode('b11),
        .mstatus('b0),
        .sstatus('b0),
        .mepc('h80000000),
        .sepc('b0),
        .mtval('h80000000),
        .stval('b0),
        .mtvec('b0),
        .stvec('b0),
        .mcause('b1),
        .scause('b0),
        .satp('b0),
        .mip('b0),
        .mie('b0),
        .mscratch('b0),
        .sscratch('b0),
        .mideleg('b0),
        .medeleg('b0)
    );

endmodule