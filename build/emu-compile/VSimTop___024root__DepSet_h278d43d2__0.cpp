// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop__Syms.h"
#include "VSimTop___024root.h"

void VSimTop___024unit____Vdpiimwrap_v_difftest_CSRState_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ priviledgeMode, QData/*63:0*/ mstatus, QData/*63:0*/ sstatus, QData/*63:0*/ mepc, QData/*63:0*/ sepc, QData/*63:0*/ mtval, QData/*63:0*/ stval, QData/*63:0*/ mtvec, QData/*63:0*/ stvec, QData/*63:0*/ mcause, QData/*63:0*/ scause, QData/*63:0*/ satp, QData/*63:0*/ mip, QData/*63:0*/ mie, QData/*63:0*/ mscratch, QData/*63:0*/ sscratch, QData/*63:0*/ mideleg, QData/*63:0*/ medeleg);
void VSimTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(QData/*63:0*/ wIdx, QData/*63:0*/ wdata, QData/*63:0*/ wmask, CData/*0:0*/ wen);
void VSimTop___024unit____Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ gpr_0, QData/*63:0*/ gpr_1, QData/*63:0*/ gpr_2, QData/*63:0*/ gpr_3, QData/*63:0*/ gpr_4, QData/*63:0*/ gpr_5, QData/*63:0*/ gpr_6, QData/*63:0*/ gpr_7, QData/*63:0*/ gpr_8, QData/*63:0*/ gpr_9, QData/*63:0*/ gpr_10, QData/*63:0*/ gpr_11, QData/*63:0*/ gpr_12, QData/*63:0*/ gpr_13, QData/*63:0*/ gpr_14, QData/*63:0*/ gpr_15, QData/*63:0*/ gpr_16, QData/*63:0*/ gpr_17, QData/*63:0*/ gpr_18, QData/*63:0*/ gpr_19, QData/*63:0*/ gpr_20, QData/*63:0*/ gpr_21, QData/*63:0*/ gpr_22, QData/*63:0*/ gpr_23, QData/*63:0*/ gpr_24, QData/*63:0*/ gpr_25, QData/*63:0*/ gpr_26, QData/*63:0*/ gpr_27, QData/*63:0*/ gpr_28, QData/*63:0*/ gpr_29, QData/*63:0*/ gpr_30, QData/*63:0*/ gpr_31);
void VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*0:0*/ valid, QData/*63:0*/ pc, IData/*31:0*/ instr, CData/*7:0*/ special, CData/*0:0*/ skip, CData/*0:0*/ isRVC, CData/*0:0*/ scFailed, CData/*0:0*/ wen, CData/*7:0*/ wdest, QData/*63:0*/ wdata);
void VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ &ram_read_helper__Vfuncrtn);

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__1(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ SimTop__DOT__Read_data;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__lui;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__func30;
    CData/*2:0*/ SimTop__DOT__u_cpu__DOT__ALUop;
    IData/*31:0*/ SimTop__DOT__u_cpu__DOT__ALU_B;
    IData/*31:0*/ SimTop__DOT__u_cpu__DOT__Imm;
    IData/*31:0*/ SimTop__DOT__u_cpu__DOT__mask;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__I_type;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__link;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__I_type_load;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__I_type_cal;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__ALUSrcA;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__MemtoReg;
    CData/*1:0*/ SimTop__DOT__u_cpu__DOT__ALUSrcB;
    IData/*31:0*/ SimTop__DOT__u_cpu__DOT__my_ALU__DOT__add_B;
    IData/*31:0*/ SimTop__DOT__u_cpu__DOT__my_ALU__DOT__add_result;
    IData/*31:0*/ SimTop__DOT__u_cpu__DOT__my_ALU__DOT__or_result;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__my_ALU__DOT__cin;
    IData/*31:0*/ __Vdly__SimTop__DOT__u_cpu__DOT__IR;
    IData/*31:0*/ __Vdly__SimTop__DOT__u_cpu__DOT__PC_reg;
    IData/*31:0*/ __Vdly__SimTop__DOT__u_cpu__DOT__PC_plus;
    IData/*31:0*/ __Vdly__SimTop__DOT__u_cpu__DOT__ALUOut;
    CData/*4:0*/ __Vdlyvdim0__SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf__v0;
    IData/*31:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf__v0;
    IData/*31:0*/ __Vtemp_hee873cd8__0;
    // Body
    __Vdly__SimTop__DOT__u_cpu__DOT__PC_plus = vlSelf->SimTop__DOT__u_cpu__DOT__PC_plus;
    __Vdly__SimTop__DOT__u_cpu__DOT__ALUOut = vlSelf->SimTop__DOT__u_cpu__DOT__ALUOut;
    __Vdly__SimTop__DOT__u_cpu__DOT__PC_reg = vlSelf->SimTop__DOT__u_cpu__DOT__PC_reg;
    __Vdlyvset__SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf__v0 = 0U;
    __Vdly__SimTop__DOT__u_cpu__DOT__IR = vlSelf->SimTop__DOT__u_cpu__DOT__IR;
    VSimTop___024unit____Vdpiimwrap_v_difftest_CSRState_TOP____024unit(0U, 3U, 0ULL, 0ULL, 0x80000000ULL, 0ULL, 0x80000000ULL, 0ULL, 0ULL, 0ULL, 1ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL);
    VSimTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(
                                                                    (((QData)((IData)(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->SimTop__DOT__u_cpu__DOT__ALUOut))) 
                                                                      - 0x80000000ULL) 
                                                                     >> 3U), 
                                                                    ((4U 
                                                                      & vlSelf->SimTop__DOT__u_cpu__DOT__ALUOut)
                                                                      ? 
                                                                     ((QData)((IData)(
                                                                                (((((- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset)))) 
                                                                                & vlSelf->SimTop__DOT__u_cpu__DOT__RF_rdata2) 
                                                                                | ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset) 
                                                                                >> 1U)))) 
                                                                                & (vlSelf->SimTop__DOT__u_cpu__DOT__RF_rdata2 
                                                                                << 8U))) 
                                                                                | ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset) 
                                                                                >> 2U)))) 
                                                                                & (vlSelf->SimTop__DOT__u_cpu__DOT__RF_rdata2 
                                                                                << 0x10U))) 
                                                                                | ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset) 
                                                                                >> 3U)))) 
                                                                                & (vlSelf->SimTop__DOT__u_cpu__DOT__RF_rdata2 
                                                                                << 0x18U))))) 
                                                                      << 0x20U)
                                                                      : (QData)((IData)(vlSelf->SimTop__DOT__u_ram__DOT__mask))), 
                                                                    ((4U 
                                                                      & vlSelf->SimTop__DOT__u_cpu__DOT__ALUOut)
                                                                      ? 
                                                                     ((QData)((IData)(vlSelf->SimTop__DOT__u_ram__DOT__mask)) 
                                                                      << 0x20U)
                                                                      : (QData)((IData)(vlSelf->SimTop__DOT__u_ram__DOT__mask))), 
                                                                    (1U 
                                                                     & ((IData)(vlSelf->SimTop__DOT__u_ram__DOT__current_state) 
                                                                        >> 3U)));
    VSimTop___024unit____Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(0U, (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [0U])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [1U])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [2U])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [3U])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [4U])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [5U])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [6U])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [7U])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [8U])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [9U])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [0xaU])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [0xbU])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [0xcU])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [0xdU])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [0xeU])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [0xfU])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [0x10U])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [0x11U])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [0x12U])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [0x13U])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [0x14U])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [0x15U])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [0x16U])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [0x17U])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [0x18U])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [0x19U])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [0x1aU])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [0x1bU])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [0x1cU])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [0x1dU])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [0x1eU])), (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__gpr
                                                                                [0x1fU])));
    if (vlSelf->SimTop__DOT__r_valid) {
        VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(0U, 0U, (IData)(vlSelf->SimTop__DOT__r_valid), (QData)((IData)(vlSelf->SimTop__DOT__r_pc)), vlSelf->SimTop__DOT__r_inst, 0U, 0U, 0U, 0U, (IData)(vlSelf->SimTop__DOT__r_wen), vlSelf->SimTop__DOT__r_waddr, (QData)((IData)(vlSelf->SimTop__DOT__r_wdata)));
    }
    __Vdly__SimTop__DOT__u_cpu__DOT__PC_plus = ((2U 
                                                 & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state))
                                                 ? vlSelf->SimTop__DOT__u_cpu__DOT__ALU_result
                                                 : vlSelf->SimTop__DOT__u_cpu__DOT__PC_plus);
    __Vdly__SimTop__DOT__u_cpu__DOT__ALUOut = ((IData)(
                                                       (0U 
                                                        != 
                                                        (0xe0U 
                                                         & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state))))
                                                ? vlSelf->SimTop__DOT__u_cpu__DOT__ALUOut
                                                : (
                                                   ((- (IData)(
                                                               ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ShifterValid) 
                                                                & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
                                                                   >> 4U)))) 
                                                    & ((((- (IData)(
                                                                    (0U 
                                                                     == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Shfter_op)))) 
                                                         & (vlSelf->SimTop__DOT__u_cpu__DOT__ALU_A 
                                                            << (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Shfter_B))) 
                                                        | ((- (IData)(
                                                                      (2U 
                                                                       == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Shfter_op)))) 
                                                           & (vlSelf->SimTop__DOT__u_cpu__DOT__ALU_A 
                                                              >> (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Shfter_B)))) 
                                                       | ((- (IData)(
                                                                     (3U 
                                                                      == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Shfter_op)))) 
                                                          & VL_SHIFTRS_III(32,32,5, vlSelf->SimTop__DOT__u_cpu__DOT__ALU_A, (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Shfter_B))))) 
                                                   | ((- (IData)(
                                                                 (1U 
                                                                  & ((~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ShifterValid)) 
                                                                     | (~ 
                                                                        ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
                                                                         >> 4U)))))) 
                                                      & vlSelf->SimTop__DOT__u_cpu__DOT__ALU_result)));
    __Vtemp_hee873cd8__0 = (((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
                               >> 7U) & (IData)(vlSelf->SimTop__DOT__Read_data_Ready)) 
                             & ((IData)(vlSelf->SimTop__DOT__u_ram__DOT__current_state) 
                                >> 2U)) ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                           >> 0xeU)))) 
                                            & vlSelf->SimTop__DOT__u_cpu__DOT__validRdata) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & (~ 
                                                             (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                              >> 0xeU))))) 
                                              & (vlSelf->SimTop__DOT__u_cpu__DOT__validRdata 
                                                 | (((- (IData)((IData)(
                                                                        (0U 
                                                                         == 
                                                                         (0x3000U 
                                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__IR))))) 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->SimTop__DOT__u_cpu__DOT__validRdata 
                                                                       >> 7U)))) 
                                                        << 8U)) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                                      >> 0xcU)))) 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & (vlSelf->SimTop__DOT__u_cpu__DOT__validRdata 
                                                                         >> 0xfU)))) 
                                                          << 0x10U))))))
                             : vlSelf->SimTop__DOT__u_cpu__DOT__MDR);
    vlSelf->SimTop__DOT__u_cpu__DOT__MDR = __Vtemp_hee873cd8__0;
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__u_cpu__DOT__PC_reg = 0x80000000U;
    } else if (VL_UNLIKELY((1U & (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
                                   >> 4U) | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branchValid))))) {
        VL_WRITEF("%x\n",32,vlSelf->SimTop__DOT__PC);
        __Vdly__SimTop__DOT__u_cpu__DOT__PC_reg = (
                                                   (((- (IData)(
                                                                ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__PCWriteCond) 
                                                                 & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branchValid))))) 
                                                     & vlSelf->SimTop__DOT__u_cpu__DOT__PC_plus) 
                                                    | ((- (IData)(
                                                                  (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branchValid) 
                                                                    | (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__PCWriteCond))) 
                                                                   & (0x67U 
                                                                      != 
                                                                      (0x7fU 
                                                                       & vlSelf->SimTop__DOT__u_cpu__DOT__IR))))) 
                                                       & vlSelf->SimTop__DOT__u_cpu__DOT__ALUOut)) 
                                                   | (0xfffffffeU 
                                                      & ((- (IData)(
                                                                    (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branchValid) 
                                                                      | (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__PCWriteCond))) 
                                                                     & (0x67U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->SimTop__DOT__u_cpu__DOT__IR))))) 
                                                         & vlSelf->SimTop__DOT__u_cpu__DOT__ALUOut)));
    } else {
        __Vdly__SimTop__DOT__u_cpu__DOT__PC_reg = vlSelf->SimTop__DOT__u_cpu__DOT__PC_reg;
    }
    if ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
          >> 8U) & (0U != (0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                    >> 7U))))) {
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf__v0 
            = vlSelf->SimTop__DOT__RF_wdata;
        __Vdlyvset__SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf__v0 
            = (0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                        >> 7U));
    }
    __Vdly__SimTop__DOT__u_cpu__DOT__IR = (((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
                                              >> 2U) 
                                             & (IData)(vlSelf->SimTop__DOT__Inst_Ready)) 
                                            & ((IData)(vlSelf->SimTop__DOT__u_ram__DOT__current_state) 
                                               >> 1U))
                                            ? ((4U 
                                                & vlSelf->SimTop__DOT__u_cpu__DOT__PC_reg)
                                                ? (IData)(
                                                          (vlSelf->SimTop__DOT__u_ram__DOT__instr_2 
                                                           >> 0x20U))
                                                : (IData)(vlSelf->SimTop__DOT__u_ram__DOT__instr_2))
                                            : vlSelf->SimTop__DOT__u_cpu__DOT__IR);
    vlSelf->SimTop__DOT__u_cpu__DOT__PC_plus = __Vdly__SimTop__DOT__u_cpu__DOT__PC_plus;
    vlSelf->SimTop__DOT__u_cpu__DOT__ALUOut = __Vdly__SimTop__DOT__u_cpu__DOT__ALUOut;
    if (__Vdlyvset__SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf__v0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf[__Vdlyvdim0__SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf__v0] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf__v0;
    }
    vlSelf->SimTop__DOT__r_wdata = ((IData)(vlSelf->reset)
                                     ? 0U : vlSelf->SimTop__DOT__RF_wdata);
    vlSelf->SimTop__DOT__r_wen = ((~ (IData)(vlSelf->reset)) 
                                  & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
                                     >> 8U));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__r_pc = 0U;
        vlSelf->SimTop__DOT__r_inst = 0U;
        vlSelf->SimTop__DOT__r_waddr = 0U;
    } else {
        vlSelf->SimTop__DOT__r_pc = vlSelf->SimTop__DOT__now_PC;
        vlSelf->SimTop__DOT__r_inst = vlSelf->SimTop__DOT__u_cpu__DOT__IR;
        vlSelf->SimTop__DOT__r_waddr = (0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                 >> 7U));
    }
    vlSelf->SimTop__DOT__r_valid = (1U & ((~ (IData)(vlSelf->reset)) 
                                          & (((IData)(
                                                      (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
                                                        >> 4U) 
                                                       & (0x60U 
                                                          == 
                                                          (0x7cU 
                                                           & vlSelf->SimTop__DOT__u_cpu__DOT__IR)))) 
                                              | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
                                                  >> 5U) 
                                                 & (IData)(vlSelf->SimTop__DOT__u_ram__DOT__current_state))) 
                                             | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
                                                >> 8U))));
    vlSelf->SimTop__DOT__u_cpu__DOT__offset = ((0xcU 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset)) 
                                               | (((1U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->SimTop__DOT__u_cpu__DOT__ALUOut)) 
                                                   << 1U) 
                                                  | (0U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->SimTop__DOT__u_cpu__DOT__ALUOut))));
    vlSelf->SimTop__DOT__u_cpu__DOT__offset = ((3U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset)) 
                                               | (((3U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->SimTop__DOT__u_cpu__DOT__ALUOut)) 
                                                   << 3U) 
                                                  | ((2U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->SimTop__DOT__u_cpu__DOT__ALUOut)) 
                                                     << 2U)));
    vlSelf->SimTop__DOT__gpr[0x1fU] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [0x1fU];
    vlSelf->SimTop__DOT__gpr[0x1eU] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [0x1eU];
    vlSelf->SimTop__DOT__gpr[0x1dU] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [0x1dU];
    vlSelf->SimTop__DOT__gpr[0x1cU] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [0x1cU];
    vlSelf->SimTop__DOT__gpr[0x1bU] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [0x1bU];
    vlSelf->SimTop__DOT__gpr[0x1aU] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [0x1aU];
    vlSelf->SimTop__DOT__gpr[0x19U] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [0x19U];
    vlSelf->SimTop__DOT__gpr[0x18U] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [0x18U];
    vlSelf->SimTop__DOT__gpr[0x17U] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [0x17U];
    vlSelf->SimTop__DOT__gpr[0x16U] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [0x16U];
    vlSelf->SimTop__DOT__gpr[0x15U] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [0x15U];
    vlSelf->SimTop__DOT__gpr[0x14U] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [0x14U];
    vlSelf->SimTop__DOT__gpr[0x13U] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [0x13U];
    vlSelf->SimTop__DOT__gpr[0x12U] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [0x12U];
    vlSelf->SimTop__DOT__gpr[0x11U] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [0x11U];
    vlSelf->SimTop__DOT__gpr[0x10U] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [0x10U];
    vlSelf->SimTop__DOT__gpr[0xfU] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [0xfU];
    vlSelf->SimTop__DOT__gpr[0xeU] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [0xeU];
    vlSelf->SimTop__DOT__gpr[0xdU] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [0xdU];
    vlSelf->SimTop__DOT__gpr[0xcU] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [0xcU];
    vlSelf->SimTop__DOT__gpr[0xbU] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [0xbU];
    vlSelf->SimTop__DOT__gpr[0xaU] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [0xaU];
    vlSelf->SimTop__DOT__gpr[9U] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [9U];
    vlSelf->SimTop__DOT__gpr[8U] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [8U];
    vlSelf->SimTop__DOT__gpr[7U] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [7U];
    vlSelf->SimTop__DOT__gpr[6U] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [6U];
    vlSelf->SimTop__DOT__gpr[5U] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [5U];
    vlSelf->SimTop__DOT__gpr[4U] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [4U];
    vlSelf->SimTop__DOT__gpr[3U] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [3U];
    vlSelf->SimTop__DOT__gpr[2U] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [2U];
    vlSelf->SimTop__DOT__gpr[1U] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [1U];
    vlSelf->SimTop__DOT__gpr[0U] = vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
        [0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__IR = __Vdly__SimTop__DOT__u_cpu__DOT__IR;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__now_PC = 0x80000000U;
        vlSelf->SimTop__DOT__u_ram__DOT__current_state = 1U;
    } else {
        if ((4U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state))) {
            vlSelf->SimTop__DOT__now_PC = vlSelf->SimTop__DOT__u_cpu__DOT__PC_reg;
        }
        vlSelf->SimTop__DOT__u_ram__DOT__current_state 
            = vlSelf->SimTop__DOT__u_ram__DOT__next_state;
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__Shfter_op = ((2U 
                                                   & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                      >> 0xdU)) 
                                                  | (1U 
                                                     & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                        >> 0x1eU)));
    SimTop__DOT__u_cpu__DOT__mask = (0xffU | (0xffffff00U 
                                              & (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                                 >> 0xdU)))) 
                                                  << 8U) 
                                                 | (0xff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                                      >> 0xcU)))) 
                                                       << 8U)))));
    vlSelf->SimTop__DOT__u_cpu__DOT__WriteWidth = (
                                                   (0xcU 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__WriteWidth)) 
                                                   | (1U 
                                                      | ((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3000U 
                                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__IR))) 
                                                         << 1U)));
    vlSelf->SimTop__DOT__u_cpu__DOT__WriteWidth = (
                                                   (3U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__WriteWidth)) 
                                                   | (0xcU 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                                        >> 0xdU)))) 
                                                         << 2U)));
    SimTop__DOT__u_cpu__DOT__lui = (IData)((0x34U == 
                                            (0x3cU 
                                             & vlSelf->SimTop__DOT__u_cpu__DOT__IR)));
    vlSelf->SimTop__DOT__u_cpu__DOT__RF_rdata2 = ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                                  >> 0x14U))))) 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                      >> 0x14U))]);
    SimTop__DOT__u_cpu__DOT__link = (IData)((0x64U 
                                             == (0x74U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__IR)));
    vlSelf->SimTop__DOT__u_cpu__DOT__ALUEx = ((5U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ALUEx)) 
                                              | (2U 
                                                 & ((~ 
                                                     (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                      >> 0xeU)) 
                                                    << 1U)));
    SimTop__DOT__u_cpu__DOT__func30 = (1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                              >> 0xcU) 
                                             | (IData)(
                                                       (0x40000030U 
                                                        == 
                                                        (0x40000070U 
                                                         & vlSelf->SimTop__DOT__u_cpu__DOT__IR)))));
    SimTop__DOT__u_cpu__DOT__I_type = ((IData)((0U 
                                                == 
                                                (0x6cU 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__IR))) 
                                       | (0x67U == 
                                          (0x7fU & vlSelf->SimTop__DOT__u_cpu__DOT__IR)));
    vlSelf->SimTop__DOT__u_cpu__DOT__PC_reg = __Vdly__SimTop__DOT__u_cpu__DOT__PC_reg;
    vlSelf->SimTop__DOT__u_ram__DOT__mask = (((- (IData)(
                                                         (1U 
                                                          & ((((((- (IData)(
                                                                            (1U 
                                                                             & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset)))) 
                                                                 & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__WriteWidth)) 
                                                                >> 3U) 
                                                               | (1U 
                                                                  & (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset) 
                                                                                >> 1U)))) 
                                                                      >> 3U) 
                                                                     & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__WriteWidth) 
                                                                        >> 2U)))) 
                                                              | (1U 
                                                                 & (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset) 
                                                                                >> 2U)))) 
                                                                     >> 3U) 
                                                                    & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__WriteWidth) 
                                                                       >> 1U)))) 
                                                             | (1U 
                                                                & (((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset) 
                                                                                >> 3U)))) 
                                                                    >> 3U) 
                                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__WriteWidth))))))) 
                                              << 0x18U) 
                                             | ((0xff0000U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((((((- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset)))) 
                                                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__WriteWidth)) 
                                                                      >> 2U) 
                                                                     | (3U 
                                                                        & (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset) 
                                                                                >> 1U)))) 
                                                                            >> 2U) 
                                                                           & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__WriteWidth) 
                                                                              >> 1U)))) 
                                                                    | (3U 
                                                                       & (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset) 
                                                                                >> 2U)))) 
                                                                           >> 2U) 
                                                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__WriteWidth)))) 
                                                                   | (2U 
                                                                      & (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset) 
                                                                                >> 3U)))) 
                                                                          >> 2U) 
                                                                         & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__WriteWidth) 
                                                                            << 1U))))))) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((((((- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset)))) 
                                                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__WriteWidth)) 
                                                                         >> 1U) 
                                                                        | (7U 
                                                                           & (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset) 
                                                                                >> 1U)))) 
                                                                               >> 1U) 
                                                                              & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__WriteWidth)))) 
                                                                       | (6U 
                                                                          & (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset) 
                                                                                >> 2U)))) 
                                                                              >> 1U) 
                                                                             & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__WriteWidth) 
                                                                                << 1U)))) 
                                                                      | (4U 
                                                                         & (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset) 
                                                                                >> 3U)))) 
                                                                             >> 1U) 
                                                                            & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__WriteWidth) 
                                                                               << 2U))))))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (((((- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset)))) 
                                                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__WriteWidth)) 
                                                                         | (0xeU 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset) 
                                                                                >> 1U)))) 
                                                                               & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__WriteWidth) 
                                                                                << 1U)))) 
                                                                        | (0xcU 
                                                                           & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset) 
                                                                                >> 2U)))) 
                                                                              & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__WriteWidth) 
                                                                                << 2U)))) 
                                                                       | (8U 
                                                                          & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset) 
                                                                                >> 3U)))) 
                                                                             & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__WriteWidth) 
                                                                                << 3U)))))))))));
    vlSelf->SimTop__DOT__u_cpu__DOT__ALUEx = ((6U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ALUEx)) 
                                              | (1U 
                                                 & ((IData)(
                                                            (0x2000U 
                                                             == 
                                                             (0x6000U 
                                                              & vlSelf->SimTop__DOT__u_cpu__DOT__IR))) 
                                                    | ((vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                        >> 0xeU) 
                                                       & ((vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                           >> 0xdU) 
                                                          ^ (IData)(SimTop__DOT__u_cpu__DOT__func30))))));
    vlSelf->SimTop__DOT__u_cpu__DOT__ALUEx = ((3U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ALUEx)) 
                                              | (4U 
                                                 & (((IData)(
                                                             (0x4000U 
                                                              == 
                                                              (0x6000U 
                                                               & vlSelf->SimTop__DOT__u_cpu__DOT__IR))) 
                                                     << 2U) 
                                                    | (((~ 
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                          >> 0xeU)) 
                                                        << 2U) 
                                                       & ((0x1ffffcU 
                                                           & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                              >> 0xbU)) 
                                                          ^ 
                                                          ((IData)(SimTop__DOT__u_cpu__DOT__func30) 
                                                           << 2U))))));
    SimTop__DOT__u_cpu__DOT__Imm = ((((((- (IData)((IData)(SimTop__DOT__u_cpu__DOT__I_type))) 
                                        & (((- (IData)(
                                                       (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                              >> 0x14U))) 
                                       | ((- (IData)(
                                                     (0x18U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                          >> 2U))))) 
                                          & (((- (IData)(
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0x800U 
                                                 & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                         >> 7U))))))) 
                                      | ((- (IData)(
                                                    (2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                         >> 4U))))) 
                                         & (((- (IData)(
                                                        (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0xfe0U 
                                                & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                     >> 7U)))))) 
                                     | (0xfffff000U 
                                        & ((- (IData)(
                                                      (5U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                           >> 2U))))) 
                                           & vlSelf->SimTop__DOT__u_cpu__DOT__IR))) 
                                    | ((- (IData)((IData)(
                                                          (0x68U 
                                                           == 
                                                           (0x68U 
                                                            & vlSelf->SimTop__DOT__u_cpu__DOT__IR))))) 
                                       & (((- (IData)(
                                                      (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                       >> 0x1fU))) 
                                           << 0x14U) 
                                          | ((0xff000U 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__IR) 
                                             | ((0x800U 
                                                 & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                      >> 0x14U)))))));
    SimTop__DOT__u_cpu__DOT__I_type_cal = ((IData)(SimTop__DOT__u_cpu__DOT__I_type) 
                                           & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                              >> 4U));
    SimTop__DOT__u_cpu__DOT__I_type_load = (((IData)(SimTop__DOT__u_cpu__DOT__I_type) 
                                             & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                   >> 4U))) 
                                            & (0x67U 
                                               != (0x7fU 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__IR)));
    vlSelf->SimTop__DOT__PC = vlSelf->SimTop__DOT__u_cpu__DOT__PC_reg;
    vlSelf->SimTop__DOT__u_cpu__DOT__current_state 
        = ((IData)(vlSelf->reset) ? 1U : (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__next_state));
    VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->SimTop__DOT__u_ram__DOT__current_state) 
                                                                       >> 1U)), (QData)((IData)(
                                                                                ((vlSelf->SimTop__DOT__u_cpu__DOT__PC_reg 
                                                                                - (IData)(0x80000000U)) 
                                                                                >> 3U))), vlSelf->__Vfunc_ram_read_helper__0__Vfuncout);
    vlSelf->SimTop__DOT__u_ram__DOT__instr_2 = vlSelf->__Vfunc_ram_read_helper__0__Vfuncout;
    VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->SimTop__DOT__u_ram__DOT__current_state) 
                                                                       >> 2U)), (QData)((IData)(
                                                                                (((0xfffffffcU 
                                                                                & vlSelf->SimTop__DOT__u_cpu__DOT__ALUOut) 
                                                                                - (IData)(0x80000000U)) 
                                                                                >> 3U))), vlSelf->__Vfunc_ram_read_helper__1__Vfuncout);
    SimTop__DOT__Read_data = (IData)(vlSelf->__Vfunc_ram_read_helper__1__Vfuncout);
    vlSelf->SimTop__DOT__u_cpu__DOT__ShifterValid = (IData)(
                                                            ((0x1000U 
                                                              == 
                                                              (0x3000U 
                                                               & vlSelf->SimTop__DOT__u_cpu__DOT__IR)) 
                                                             & ((IData)(SimTop__DOT__u_cpu__DOT__I_type_cal) 
                                                                | (3U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                                       >> 4U))))));
    vlSelf->SimTop__DOT__u_cpu__DOT__validRdata = (
                                                   (((((- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset)))) 
                                                       & SimTop__DOT__Read_data) 
                                                      | ((- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset) 
                                                                        >> 1U)))) 
                                                         & (SimTop__DOT__Read_data 
                                                            >> 8U))) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset) 
                                                                       >> 2U)))) 
                                                        & (SimTop__DOT__Read_data 
                                                           >> 0x10U))) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__offset) 
                                                                      >> 3U)))) 
                                                       & (SimTop__DOT__Read_data 
                                                          >> 0x18U))) 
                                                   & SimTop__DOT__u_cpu__DOT__mask);
    vlSelf->SimTop__DOT__u_cpu__DOT__next_state = (
                                                   ((((((((1U 
                                                           == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state)) 
                                                          | (2U 
                                                             == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state))) 
                                                         | (4U 
                                                            == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state))) 
                                                        | (8U 
                                                           == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state))) 
                                                       | (0x10U 
                                                          == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state))) 
                                                      | (0x20U 
                                                         == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state))) 
                                                     | (0x40U 
                                                        == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state))) 
                                                    | (0x80U 
                                                       == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state)))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state))
                                                     ? 2U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SimTop__DOT__u_ram__DOT__current_state))
                                                       ? 4U
                                                       : 2U)
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->SimTop__DOT__u_ram__DOT__current_state))
                                                        ? 8U
                                                        : 4U)
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state))
                                                        ? 0x10U
                                                        : 
                                                       ((0x10U 
                                                         == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state))
                                                         ? 
                                                        ((0x18U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                              >> 2U)))
                                                          ? 2U
                                                          : 
                                                         ((2U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                               >> 4U)))
                                                           ? 0x20U
                                                           : 
                                                          ((IData)(SimTop__DOT__u_cpu__DOT__I_type_load)
                                                            ? 0x40U
                                                            : 0x100U)))
                                                         : 
                                                        ((0x20U 
                                                          == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->SimTop__DOT__u_ram__DOT__current_state))
                                                           ? 2U
                                                           : 0x20U)
                                                          : 
                                                         ((0x40U 
                                                           == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(vlSelf->SimTop__DOT__u_ram__DOT__current_state))
                                                            ? 0x80U
                                                            : 0x40U)
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->SimTop__DOT__u_ram__DOT__current_state))
                                                            ? 0x100U
                                                            : 0x80U))))))))
                                                    : 
                                                   ((0x100U 
                                                     == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state))
                                                     ? 2U
                                                     : 1U));
    vlSelf->SimTop__DOT__u_cpu__DOT__PCWriteCond = (IData)(
                                                           (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
                                                             >> 4U) 
                                                            & (0x60U 
                                                               == 
                                                               (0x7cU 
                                                                & vlSelf->SimTop__DOT__u_cpu__DOT__IR))));
    vlSelf->SimTop__DOT__Inst_Ready = (IData)((0U != 
                                               (5U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state))));
    vlSelf->SimTop__DOT__Read_data_Ready = (IData)(
                                                   (0U 
                                                    != 
                                                    (0x81U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state))));
    SimTop__DOT__u_cpu__DOT__MemtoReg = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
                                          >> 8U) & (IData)(SimTop__DOT__u_cpu__DOT__I_type_load));
    SimTop__DOT__u_cpu__DOT__ALUSrcA = (1U & (((IData)(
                                                       (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
                                                         >> 4U) 
                                                        & (0x14U 
                                                           == 
                                                           (0x1cU 
                                                            & vlSelf->SimTop__DOT__u_cpu__DOT__IR)))) 
                                               | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
                                                   >> 3U) 
                                                  & (0x67U 
                                                     != 
                                                     (0x7fU 
                                                      & vlSelf->SimTop__DOT__u_cpu__DOT__IR)))) 
                                              | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
                                                 >> 1U)));
    SimTop__DOT__u_cpu__DOT__ALUSrcB = (((0x3ffffffeU 
                                          & (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
                                              >> 2U) 
                                             & (((IData)(SimTop__DOT__u_cpu__DOT__link) 
                                                 | (0x18U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                        >> 2U)))) 
                                                << 1U))) 
                                         | (0x1ffffffeU 
                                            & (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
                                                >> 3U) 
                                               & ((((IData)(SimTop__DOT__u_cpu__DOT__I_type) 
                                                    | (2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                           >> 4U)))) 
                                                   | (5U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                          >> 2U)))) 
                                                  << 1U)))) 
                                        | (1U & (((
                                                   ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
                                                    >> 3U) 
                                                   & (~ (IData)(SimTop__DOT__u_cpu__DOT__link))) 
                                                  & (0x18U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                         >> 2U)))) 
                                                 | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
                                                    >> 1U))));
    SimTop__DOT__u_cpu__DOT__ALUop = (7U & (((((2U 
                                                & (- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (((0U 
                                                                           != 
                                                                           (0xaU 
                                                                            & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state))) 
                                                                          | (IData)(SimTop__DOT__u_cpu__DOT__I_type_load)) 
                                                                         | (2U 
                                                                            == 
                                                                            (7U 
                                                                             & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                                                >> 4U))))))))) 
                                               | ((- (IData)(
                                                             (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
                                                               >> 4U) 
                                                              & ((3U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                                      >> 4U))) 
                                                                 | (IData)(SimTop__DOT__u_cpu__DOT__I_type_cal))))) 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ALUEx))) 
                                              | (6U 
                                                 & (- (IData)((IData)(
                                                                      (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
                                                                        >> 4U) 
                                                                       & (0x60U 
                                                                          == 
                                                                          (0x407cU 
                                                                           & vlSelf->SimTop__DOT__u_cpu__DOT__IR)))))))) 
                                             | (- (IData)((IData)(
                                                                  (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
                                                                    >> 4U) 
                                                                   & (0x4060U 
                                                                      == 
                                                                      (0x607cU 
                                                                       & vlSelf->SimTop__DOT__u_cpu__DOT__IR))))))) 
                                            | (3U & 
                                               (- (IData)((IData)(
                                                                  (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
                                                                    >> 4U) 
                                                                   & (0x6060U 
                                                                      == 
                                                                      (0x607cU 
                                                                       & vlSelf->SimTop__DOT__u_cpu__DOT__IR)))))))));
    vlSelf->SimTop__DOT__u_ram__DOT__next_state = (
                                                   (8U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_ram__DOT__current_state))
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_ram__DOT__current_state))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_ram__DOT__current_state))
                                                      ? 1U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->SimTop__DOT__u_ram__DOT__current_state))
                                                       ? 1U
                                                       : 
                                                      (((IData)(vlSelf->SimTop__DOT__Read_data_Ready) 
                                                        & ((IData)(vlSelf->SimTop__DOT__u_ram__DOT__current_state) 
                                                           >> 2U))
                                                        ? 1U
                                                        : 4U)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_ram__DOT__current_state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->SimTop__DOT__u_ram__DOT__current_state))
                                                       ? 1U
                                                       : 
                                                      (((IData)(vlSelf->SimTop__DOT__Inst_Ready) 
                                                        & ((IData)(vlSelf->SimTop__DOT__u_ram__DOT__current_state) 
                                                           >> 1U))
                                                        ? 1U
                                                        : 2U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->SimTop__DOT__u_ram__DOT__current_state))
                                                       ? 
                                                      ((IData)(
                                                               ((2U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state))) 
                                                                & (IData)(vlSelf->SimTop__DOT__u_ram__DOT__current_state)))
                                                        ? 2U
                                                        : 
                                                       ((1U 
                                                         & (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
                                                             >> 6U) 
                                                            & (IData)(vlSelf->SimTop__DOT__u_ram__DOT__current_state)))
                                                         ? 4U
                                                         : 
                                                        ((1U 
                                                          & (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__current_state) 
                                                              >> 6U) 
                                                             & (IData)(vlSelf->SimTop__DOT__u_ram__DOT__current_state)))
                                                          ? 8U
                                                          : 1U)))
                                                       : 1U))));
    vlSelf->SimTop__DOT__RF_wdata = (((- (IData)((IData)(SimTop__DOT__u_cpu__DOT__MemtoReg))) 
                                      & vlSelf->SimTop__DOT__u_cpu__DOT__MDR) 
                                     | ((- (IData)(
                                                   (1U 
                                                    & (~ (IData)(SimTop__DOT__u_cpu__DOT__MemtoReg))))) 
                                        & (((0xfffff000U 
                                             & ((- (IData)((IData)(SimTop__DOT__u_cpu__DOT__lui))) 
                                                & vlSelf->SimTop__DOT__u_cpu__DOT__IR)) 
                                            | ((- (IData)((IData)(SimTop__DOT__u_cpu__DOT__link))) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__PC_plus)) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & ((~ (IData)(SimTop__DOT__u_cpu__DOT__lui)) 
                                                             & (~ (IData)(SimTop__DOT__u_cpu__DOT__link)))))) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__ALUOut))));
    vlSelf->SimTop__DOT__u_cpu__DOT__ALU_A = (((- (IData)(
                                                          (1U 
                                                           & (~ (IData)(SimTop__DOT__u_cpu__DOT__ALUSrcA))))) 
                                               & ((- (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                                  >> 0xfU))))) 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__my_rf__DOT__rf
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                      >> 0xfU))])) 
                                              | ((- (IData)((IData)(SimTop__DOT__u_cpu__DOT__ALUSrcA))) 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__PC_reg));
    SimTop__DOT__u_cpu__DOT__ALU_B = ((((- (IData)(
                                                   (0U 
                                                    == (IData)(SimTop__DOT__u_cpu__DOT__ALUSrcB)))) 
                                        & vlSelf->SimTop__DOT__u_cpu__DOT__RF_rdata2) 
                                       | (4U & (- (IData)(
                                                          (1U 
                                                           == (IData)(SimTop__DOT__u_cpu__DOT__ALUSrcB)))))) 
                                      | ((- (IData)(
                                                    (2U 
                                                     == (IData)(SimTop__DOT__u_cpu__DOT__ALUSrcB)))) 
                                         & SimTop__DOT__u_cpu__DOT__Imm));
    SimTop__DOT__u_cpu__DOT__my_ALU__DOT__cin = (IData)(
                                                        (((IData)(SimTop__DOT__u_cpu__DOT__ALUop) 
                                                          >> 2U) 
                                                         | (3U 
                                                            == (IData)(SimTop__DOT__u_cpu__DOT__ALUop))));
    vlSelf->SimTop__DOT__u_cpu__DOT__Shfter_B = (0x1fU 
                                                 & (((- (IData)((IData)(SimTop__DOT__u_cpu__DOT__I_type))) 
                                                     & (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                                                        >> 0x14U)) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & (~ (IData)(SimTop__DOT__u_cpu__DOT__I_type))))) 
                                                       & SimTop__DOT__u_cpu__DOT__ALU_B)));
    SimTop__DOT__u_cpu__DOT__my_ALU__DOT__or_result 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__ALU_A | SimTop__DOT__u_cpu__DOT__ALU_B);
    SimTop__DOT__u_cpu__DOT__my_ALU__DOT__add_B = (SimTop__DOT__u_cpu__DOT__ALU_B 
                                                   ^ 
                                                   (- (IData)((IData)(SimTop__DOT__u_cpu__DOT__my_ALU__DOT__cin))));
    SimTop__DOT__u_cpu__DOT__my_ALU__DOT__add_result 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__ALU_A 
            + SimTop__DOT__u_cpu__DOT__my_ALU__DOT__add_B) 
           + (IData)((QData)((IData)(SimTop__DOT__u_cpu__DOT__my_ALU__DOT__cin))));
    vlSelf->SimTop__DOT__u_cpu__DOT__ALU_result = (
                                                   (((((((vlSelf->SimTop__DOT__u_cpu__DOT__ALU_A 
                                                          & SimTop__DOT__u_cpu__DOT__ALU_B) 
                                                         & (- (IData)(
                                                                      (0U 
                                                                       == (IData)(SimTop__DOT__u_cpu__DOT__ALUop))))) 
                                                        | (SimTop__DOT__u_cpu__DOT__my_ALU__DOT__or_result 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         == (IData)(SimTop__DOT__u_cpu__DOT__ALUop)))))) 
                                                       | ((~ SimTop__DOT__u_cpu__DOT__my_ALU__DOT__or_result) 
                                                          & (- (IData)(
                                                                       (5U 
                                                                        == (IData)(SimTop__DOT__u_cpu__DOT__ALUop)))))) 
                                                      | ((vlSelf->SimTop__DOT__u_cpu__DOT__ALU_A 
                                                          ^ SimTop__DOT__u_cpu__DOT__ALU_B) 
                                                         & (- (IData)(
                                                                      (4U 
                                                                       == (IData)(SimTop__DOT__u_cpu__DOT__ALUop)))))) 
                                                     | (SimTop__DOT__u_cpu__DOT__my_ALU__DOT__add_result 
                                                        & ((- (IData)(
                                                                      (2U 
                                                                       == (IData)(SimTop__DOT__u_cpu__DOT__ALUop)))) 
                                                           | (- (IData)(
                                                                        (6U 
                                                                         == (IData)(SimTop__DOT__u_cpu__DOT__ALUop))))))) 
                                                    | ((((vlSelf->SimTop__DOT__u_cpu__DOT__ALU_A 
                                                          & SimTop__DOT__u_cpu__DOT__my_ALU__DOT__add_B) 
                                                         | ((vlSelf->SimTop__DOT__u_cpu__DOT__ALU_A 
                                                             ^ SimTop__DOT__u_cpu__DOT__my_ALU__DOT__add_B) 
                                                            & SimTop__DOT__u_cpu__DOT__my_ALU__DOT__add_result)) 
                                                        >> 0x1fU) 
                                                       & (- (IData)(
                                                                    (7U 
                                                                     == (IData)(SimTop__DOT__u_cpu__DOT__ALUop)))))) 
                                                   | (1U 
                                                      & (((IData)(
                                                                  (1ULL 
                                                                   & ((((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ALU_A)) 
                                                                        + (QData)((IData)(SimTop__DOT__u_cpu__DOT__my_ALU__DOT__add_B))) 
                                                                       + (QData)((IData)(SimTop__DOT__u_cpu__DOT__my_ALU__DOT__cin))) 
                                                                      >> 0x20U))) 
                                                          ^ (IData)(SimTop__DOT__u_cpu__DOT__my_ALU__DOT__cin)) 
                                                         & (- (IData)(
                                                                      (3U 
                                                                       == (IData)(SimTop__DOT__u_cpu__DOT__ALUop)))))));
    vlSelf->SimTop__DOT__u_cpu__DOT__branchValid = 
        ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__PCWriteCond) 
         & (((~ (IData)((0U != vlSelf->SimTop__DOT__u_cpu__DOT__ALU_result))) 
             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                >> 0xcU)) ^ (vlSelf->SimTop__DOT__u_cpu__DOT__IR 
                             >> 0xeU)));
}
