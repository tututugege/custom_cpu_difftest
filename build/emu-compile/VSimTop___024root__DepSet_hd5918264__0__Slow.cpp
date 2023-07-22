// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop___024root.h"

VL_ATTR_COLD void VSimTop___024root___eval_initial(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VSimTop___024root___settle__TOP__2(VSimTop___024root* vlSelf);

VL_ATTR_COLD void VSimTop___024root___eval_settle(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_settle\n"); );
    // Body
    VSimTop___024root___settle__TOP__2(vlSelf);
}

VL_ATTR_COLD void VSimTop___024root___final(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___final\n"); );
}

VL_ATTR_COLD void VSimTop___024root___ctor_var_reset(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_logCtrl_log_begin = VL_RAND_RESET_Q(64);
    vlSelf->io_logCtrl_log_end = VL_RAND_RESET_Q(64);
    vlSelf->io_logCtrl_log_level = VL_RAND_RESET_Q(64);
    vlSelf->io_perfInfo_clean = VL_RAND_RESET_I(1);
    vlSelf->io_perfInfo_dump = VL_RAND_RESET_I(1);
    vlSelf->io_uart_out_valid = VL_RAND_RESET_I(1);
    vlSelf->io_uart_out_ch = VL_RAND_RESET_I(8);
    vlSelf->io_uart_in_valid = VL_RAND_RESET_I(1);
    vlSelf->io_uart_in_ch = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__Inst_Ready = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Read_data_Ready = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__RF_wdata = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__now_PC = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__gpr[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->SimTop__DOT__r_wen = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__r_waddr = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__r_wdata = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__r_pc = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__r_inst = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__r_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IR = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_cpu__DOT__PC_reg = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_cpu__DOT__branchValid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__PC_plus = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_cpu__DOT__RF_rdata2 = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_cpu__DOT__ALUEx = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__u_cpu__DOT__ALU_A = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_cpu__DOT__ALU_result = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_cpu__DOT__ALUOut = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_cpu__DOT__Shfter_op = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__u_cpu__DOT__Shfter_B = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__u_cpu__DOT__ShifterValid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__offset = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__u_cpu__DOT__validRdata = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_cpu__DOT__MDR = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_cpu__DOT__WriteWidth = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__u_cpu__DOT__current_state = VL_RAND_RESET_I(9);
    vlSelf->SimTop__DOT__u_cpu__DOT__next_state = VL_RAND_RESET_I(9);
    vlSelf->SimTop__DOT__u_cpu__DOT__PCWriteCond = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->SimTop__DOT__u_ram__DOT__current_state = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__u_ram__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__u_ram__DOT__instr_2 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ram__DOT__mask = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ram_read_helper__0__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__1__Vfuncout = 0;
}
