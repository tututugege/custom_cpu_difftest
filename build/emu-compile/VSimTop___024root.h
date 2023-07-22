// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimTop.h for the primary calling header

#ifndef VERILATED_VSIMTOP___024ROOT_H_
#define VERILATED_VSIMTOP___024ROOT_H_  // guard

#include "verilated.h"

class VSimTop__Syms;
class VSimTop___024unit;

VL_MODULE(VSimTop___024root) {
  public:
    // CELLS
    VSimTop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_perfInfo_clean,0,0);
    VL_IN8(io_perfInfo_dump,0,0);
    VL_OUT8(io_uart_out_valid,0,0);
    VL_OUT8(io_uart_out_ch,7,0);
    VL_OUT8(io_uart_in_valid,0,0);
    VL_IN8(io_uart_in_ch,7,0);
    CData/*0:0*/ SimTop__DOT__Inst_Ready;
    CData/*0:0*/ SimTop__DOT__Read_data_Ready;
    CData/*0:0*/ SimTop__DOT__r_wen;
    CData/*7:0*/ SimTop__DOT__r_waddr;
    CData/*0:0*/ SimTop__DOT__r_valid;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__branchValid;
    CData/*2:0*/ SimTop__DOT__u_cpu__DOT__ALUEx;
    CData/*1:0*/ SimTop__DOT__u_cpu__DOT__Shfter_op;
    CData/*4:0*/ SimTop__DOT__u_cpu__DOT__Shfter_B;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__ShifterValid;
    CData/*3:0*/ SimTop__DOT__u_cpu__DOT__offset;
    CData/*3:0*/ SimTop__DOT__u_cpu__DOT__WriteWidth;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__PCWriteCond;
    CData/*3:0*/ SimTop__DOT__u_ram__DOT__current_state;
    CData/*3:0*/ SimTop__DOT__u_ram__DOT__next_state;
    CData/*0:0*/ __Vclklast__TOP__clock;
    SData/*8:0*/ SimTop__DOT__u_cpu__DOT__current_state;
    SData/*8:0*/ SimTop__DOT__u_cpu__DOT__next_state;
    IData/*31:0*/ SimTop__DOT__RF_wdata;
    IData/*31:0*/ SimTop__DOT__PC;
    IData/*31:0*/ SimTop__DOT__now_PC;
    IData/*31:0*/ SimTop__DOT__r_wdata;
    IData/*31:0*/ SimTop__DOT__r_pc;
    IData/*31:0*/ SimTop__DOT__r_inst;
    IData/*31:0*/ SimTop__DOT__u_cpu__DOT__IR;
    IData/*31:0*/ SimTop__DOT__u_cpu__DOT__PC_reg;
    IData/*31:0*/ SimTop__DOT__u_cpu__DOT__PC_plus;
    IData/*31:0*/ SimTop__DOT__u_cpu__DOT__RF_rdata2;
    IData/*31:0*/ SimTop__DOT__u_cpu__DOT__ALU_A;
    IData/*31:0*/ SimTop__DOT__u_cpu__DOT__ALU_result;
    IData/*31:0*/ SimTop__DOT__u_cpu__DOT__ALUOut;
    IData/*31:0*/ SimTop__DOT__u_cpu__DOT__validRdata;
    IData/*31:0*/ SimTop__DOT__u_cpu__DOT__MDR;
    IData/*31:0*/ SimTop__DOT__u_ram__DOT__mask;
    VL_IN64(io_logCtrl_log_begin,63,0);
    VL_IN64(io_logCtrl_log_end,63,0);
    VL_IN64(io_logCtrl_log_level,63,0);
    QData/*63:0*/ SimTop__DOT__u_ram__DOT__instr_2;
    QData/*63:0*/ __Vfunc_ram_read_helper__0__Vfuncout;
    QData/*63:0*/ __Vfunc_ram_read_helper__1__Vfuncout;
    VlUnpacked<IData/*31:0*/, 32> SimTop__DOT__gpr;
    VlUnpacked<IData/*31:0*/, 32> SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf;

    // INTERNAL VARIABLES
    VSimTop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VSimTop___024root(const char* name);
    ~VSimTop___024root();
    VL_UNCOPYABLE(VSimTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(VSimTop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
