// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSimTop.h"
#include "VSimTop__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VSimTop::VSimTop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VSimTop__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_perfInfo_clean{vlSymsp->TOP.io_perfInfo_clean}
    , io_perfInfo_dump{vlSymsp->TOP.io_perfInfo_dump}
    , io_uart_out_valid{vlSymsp->TOP.io_uart_out_valid}
    , io_uart_out_ch{vlSymsp->TOP.io_uart_out_ch}
    , io_uart_in_valid{vlSymsp->TOP.io_uart_in_valid}
    , io_uart_in_ch{vlSymsp->TOP.io_uart_in_ch}
    , io_logCtrl_log_begin{vlSymsp->TOP.io_logCtrl_log_begin}
    , io_logCtrl_log_end{vlSymsp->TOP.io_logCtrl_log_end}
    , io_logCtrl_log_level{vlSymsp->TOP.io_logCtrl_log_level}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
}

VSimTop::VSimTop(const char* _vcname__)
    : VSimTop(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VSimTop::~VSimTop() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSimTop___024root___eval_initial(VSimTop___024root* vlSelf);
void VSimTop___024root___eval_settle(VSimTop___024root* vlSelf);
void VSimTop___024root___eval(VSimTop___024root* vlSelf);
#ifdef VL_DEBUG
void VSimTop___024root___eval_debug_assertions(VSimTop___024root* vlSelf);
#endif  // VL_DEBUG
void VSimTop___024root___final(VSimTop___024root* vlSelf);

static void _eval_initial_loop(VSimTop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSimTop___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSimTop___024root___eval_settle(&(vlSymsp->TOP));
        VSimTop___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VSimTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSimTop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSimTop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSimTop___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VSimTop::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VSimTop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VSimTop::final() {
    VSimTop___024root___final(&(vlSymsp->TOP));
}
