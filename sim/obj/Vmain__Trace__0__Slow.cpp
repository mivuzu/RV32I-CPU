// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vmain__Syms.h"


VL_ATTR_COLD void Vmain___024root__trace_init_sub__TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk__0(Vmain___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vmain___024root__trace_init_sub__TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk__0(Vmain___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmain___024root__trace_init_sub__TOP__0(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_init_sub__TOP__0\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "$rootio", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+853,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+854,0,"toggle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+855,0,"bsel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+856,0,"ad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+857,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+858,0,"cpu_cede",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "main", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+853,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+854,0,"toggle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+855,0,"bsel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+856,0,"ad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+857,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+858,0,"cpu_cede",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+861,0,"baudrate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+862,0,"mabl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+206,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"u3_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"u3_bsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"u3_ad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+735,0,"u3_instr_ad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"u3_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+207,0,"u3_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+208,0,"u3_instr_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+209,0,"cpu_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+863,0,"cpu_adsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+210,0,"cpu_bsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+211,0,"cpu_ad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+736,0,"cpu_instr_ad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+212,0,"cpu_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+737,0,"rf_rd1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+213,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+214,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+864,0,"u2_ra1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"uart_tx_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"uart_rx_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"uart_tx_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"uart_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+866,0,"uart_tx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+866,0,"uart_rx_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+866,0,"uart_tx_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+867,0,"uart_rx_ad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+867,0,"uart_tx_ad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+868,0,"uart_rx_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+869,0,"uart_tx_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"bsel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"ad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+207,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+735,0,"instr_ad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+208,0,"instr_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"overlap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+738,0,"ioverlap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+870,0,"memblks",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+215,0,"ebr_a0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+217,0,"ebr_b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"blk_di",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"overlap_blk_di",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_QUAD(tracep,c+7,0,"blk_ad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 51,0);
    VL_TRACE_DECL_QUAD(tracep,c+739,0,"blk_iad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 51,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"blk_ofst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+741,0,"blk_iofst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"r_bsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"n_bsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+871,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+219,0,"p_overlap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+220,0,"p_ioverlap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+221,0,"p_blk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+222,0,"p_iblk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+223,0,"p_nblk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+224,0,"p_inblk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+225,0,"p_ad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+226,0,"p_iad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"nblk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+742,0,"inblk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_QUAD(tracep,c+13,0,"decoder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+15,0,"nblk_decoder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+743,0,"inblk_decoder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+227,0,"blk_a0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+228,0,"blk_b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+229,0,"nblk_a0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+230,0,"nblk_b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "blk", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vmain___024root__trace_init_sub__TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "blk", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vmain___024root__trace_init_sub__TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u4", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+206,0,"state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+858,0,"core_cede",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+207,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+208,0,"instr_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+209,0,"we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+210,0,"bsel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+211,0,"ad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+736,0,"instr_ad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+212,0,"wd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+872,0,"memmgr_ra1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+737,0,"rf_rd1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+213,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+214,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+862,0,"MABL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+231,0,"prev_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+232,0,"init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+233,0,"en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+234,0,"mem_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+208,0,"mem_instr_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+235,0,"pc_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+236,0,"wd_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+237,0,"format",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+238,0,"alu_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+239,0,"cede",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+240,0,"mem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+241,0,"instr_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+242,0,"rf_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+243,0,"pc_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+244,0,"a_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+245,0,"b_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+246,0,"alu_cin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+247,0,"alu_arith",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+248,0,"flag_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+249,0,"flag_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+250,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+209,0,"m_memwe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+251,0,"c_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+252,0,"m_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+253,0,"s_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+254,0,"alu_flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+745,0,"pc_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+212,0,"m_rd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+255,0,"m_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+209,0,"mem_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+252,0,"m_funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+253,0,"s_funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+211,0,"mem_ad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+736,0,"mem_instr_ad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+212,0,"mem_wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+234,0,"mem_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+208,0,"mem_instr_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+207,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+208,0,"instr_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+209,0,"we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+210,0,"bsel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+211,0,"ad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+736,0,"instr_ad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+212,0,"wd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+862,0,"MABL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+233,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+251,0,"c_funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+254,0,"alu_flags",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+213,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+239,0,"cede",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+240,0,"mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+241,0,"instr_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+242,0,"rf_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+243,0,"pc_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+244,0,"a_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+245,0,"b_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+246,0,"alu_cin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+247,0,"alu_arith",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+248,0,"flag_set",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+249,0,"flag_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+250,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+235,0,"pc_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+236,0,"wd_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+237,0,"format",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+238,0,"alu_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+256,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u0", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+233,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+250,0,"branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+257,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BIT(tracep,c+239,0,"cede",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+240,0,"mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+241,0,"instr_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+242,0,"rf_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+243,0,"pc_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+244,0,"a_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+245,0,"b_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+235,0,"pc_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+236,0,"wd_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+256,0,"alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+256,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+258,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+259,0,"op5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+260,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+246,0,"cin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+247,0,"arith",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+238,0,"sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+248,0,"flag_set",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+249,0,"flag_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+261,0,"main_decoder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+262,0,"iflag_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+873,0,"iflag_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+251,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+254,0,"alu_flags",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+250,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+257,0,"op7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+237,0,"format",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+232,0,"init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+233,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+239,0,"cede",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+241,0,"instr_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+240,0,"mem_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+242,0,"rf_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+243,0,"pc_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+244,0,"a_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+245,0,"b_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+246,0,"alu_cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+247,0,"alu_arith",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+248,0,"flag_set",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+249,0,"flag_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+250,0,"branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+235,0,"pc_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+236,0,"wd_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+237,0,"format",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+238,0,"alu_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+234,0,"mem_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+208,0,"instr_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+858,0,"core_cede",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+209,0,"m_memwe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+251,0,"c_funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+252,0,"m_funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+253,0,"s_funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+254,0,"alu_flags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+745,0,"pc_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+255,0,"m_alu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+212,0,"m_rd2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+213,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+872,0,"memmgr_ra1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+737,0,"rf_rd1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+214,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+874,0,"INIT_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+263,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+264,0,"rf_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+859,0,"rf_rd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+265,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+746,0,"transfer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+266,0,"alu_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+267,0,"alu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+268,0,"alu_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+269,0,"true_instr_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+270,0,"instr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+271,0,"d_transfer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+272,0,"d_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+273,0,"d_ipcnext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+274,0,"c_rd1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+275,0,"c_rd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+276,0,"c_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+277,0,"c_transfer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+278,0,"c_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+279,0,"c_ipcnext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+280,0,"c_pcnext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+281,0,"c_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+282,0,"c_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+283,0,"c_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+284,0,"c_alusel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+285,0,"c_pcsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+286,0,"c_wdsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+287,0,"c_cede",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+288,0,"c_rfwe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+289,0,"c_asel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+290,0,"c_bsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+291,0,"c_aluarith",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+292,0,"c_alucin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+293,0,"c_flagset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+294,0,"c_flagsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+295,0,"c_memwe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+296,0,"c_prediction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+297,0,"m_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+298,0,"m_pcnext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+299,0,"m_aluflags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+300,0,"m_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+301,0,"m_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+302,0,"m_wdsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+303,0,"m_cede",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+304,0,"m_rfwe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+305,0,"m_flagset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+306,0,"m_flagsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+307,0,"s_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+308,0,"s_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+234,0,"s_memrd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+309,0,"s_pcnext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+310,0,"s_aluflags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+311,0,"s_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+312,0,"s_wdsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+313,0,"s_cede",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+314,0,"s_rfwe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+315,0,"s_flagset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+316,0,"s_flagsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+875,0,"s_validrd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+317,0,"f_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+318,0,"f_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+317,0,"d_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+318,0,"d_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+319,0,"c_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+320,0,"c_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"m_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+321,0,"m_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"s_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"s_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+860,0,"d_mux_rd1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"c_mux_rd1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"c_mux_rd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+324,0,"m_rfwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+325,0,"backup_rfwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+326,0,"backup_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+327,0,"backup_rfwe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+328,0,"prediction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+318,0,"misprediction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+329,0,"d_mux_rd1_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+330,0,"c_mux_rd1_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+331,0,"c_mux_rd2_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+332,0,"d_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+328,0,"instr31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "u2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+333,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+334,0,"pc_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+335,0,"ra1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+336,0,"ra2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+311,0,"wa",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+747,0,"pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+264,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+737,0,"rd1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+859,0,"rd2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+214,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "x", VerilatedTracePrefixType::ARRAY_UNPACKED, 31, 0);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+703+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (31 - i), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+214,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+878,0,"n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+292,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+291,0,"arith",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+284,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+266,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+267,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+254,0,"flags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+268,0,"c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+879,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+337,0,"a_to",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+338,0,"b_to",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+339,0,"a_swap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+340,0,"b_swap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+341,0,"u0_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+342,0,"u1_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+343,0,"u1_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+344,0,"u1_subtr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+345,0,"u1_cin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+346,0,"u1_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 32,0);
    VL_TRACE_DECL_BIT(tracep,c+348,0,"u1_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+349,0,"logic_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_WIDE(tracep,c+353,0,"arith_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u0", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+357,0,"left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+292,0,"arith",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+358,0,"rotate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+359,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+266,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+341,0,"b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+360,0,"r_sr_stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_WIDE(tracep,c+365,0,"l_sr_stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_BIT(tracep,c+370,0,"set_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+878,0,"n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+344,0,"subtr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+345,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+342,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+343,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+346,0,"c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 32,0);
    VL_TRACE_DECL_BIT(tracep,c+348,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+371,0,"cin_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+372,0,"b_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u4", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+233,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+288,0,"c_rfwe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+304,0,"m_rfwe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+314,0,"s_rfwe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+327,0,"backup_rfwe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+328,0,"instr31",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+296,0,"c_prediction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+250,0,"branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+235,0,"pc_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+285,0,"c_pcsel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+302,0,"m_wdsel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+332,0,"d_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+282,0,"c_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+283,0,"c_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+281,0,"c_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+300,0,"m_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+311,0,"s_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+326,0,"backup_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+317,0,"f_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+318,0,"f_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+317,0,"d_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+318,0,"d_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+319,0,"c_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+320,0,"c_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"m_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+321,0,"m_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"s_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"s_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+328,0,"prediction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+318,0,"misprediction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+329,0,"d_mux_rd1_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+330,0,"c_mux_rd1_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+331,0,"c_mux_rd2_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+373,0,"d_rs1_dh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+374,0,"c_rs1_dh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+375,0,"c_rs2_dh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+376,0,"stall_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+321,0,"stall_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+377,0,"forward_m2d_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+373,0,"forward_s2d_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+378,0,"forward_m2c_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+379,0,"forward_m2c_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+380,0,"forward_s2c_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+381,0,"forward_s2c_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+374,0,"forward_backup2c_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+375,0,"forward_backup2c_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+382,0,"prev_stallc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vmain___024root__trace_init_sub__TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk__0(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_init_sub__TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk__0\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+852,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+17,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"r_bsel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"blk_di",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+20,0,"blk_ad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 51,0);
    VL_TRACE_DECL_QUAD(tracep,c+748,0,"blk_iad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 51,0);
    VL_TRACE_DECL_BUS(tracep,c+383,0,"ebr_a0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+384,0,"ebr_b0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"ebr_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+871,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"memblks",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+22,0,"ebr_dia",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+881,0,"ebr_dib",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_QUAD(tracep,c+25,0,"ebr_ada",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 55,0);
    VL_TRACE_DECL_QUAD(tracep,c+750,0,"ebr_adb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 55,0);
    VL_TRACE_DECL_BUS(tracep,c+884,0,"ebr_csa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+884,0,"ebr_csb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+885,0,"ebr_cea",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+885,0,"ebr_ceb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+885,0,"ebr_ocea",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+885,0,"ebr_oceb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"ebr_wea",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+886,0,"ebr_web",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+886,0,"ebr_rsta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+886,0,"ebr_rstb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_WIDE(tracep,c+385,0,"ebr_doa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+388,0,"ebr_dob",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "ebr", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"DIA0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"DIA1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"DIA2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"DIA3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+32,0,"DIA4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"DIA5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+34,0,"DIA6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+35,0,"DIA7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA16",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA17",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADA0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADA1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADA2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+36,0,"ADA3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+37,0,"ADA4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"ADA5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+39,0,"ADA6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+40,0,"ADA7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"ADA8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+42,0,"ADA9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+43,0,"ADA10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+44,0,"ADA11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+45,0,"ADA12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+46,0,"ADA13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"CLKA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CEA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"OCEA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+47,0,"WEA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSA0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSA1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSA2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"RSTA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB16",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB17",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADB0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADB1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADB2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+752,0,"ADB3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+753,0,"ADB4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+754,0,"ADB5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+755,0,"ADB6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+756,0,"ADB7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+757,0,"ADB8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+758,0,"ADB9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+759,0,"ADB10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+760,0,"ADB11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+761,0,"ADB12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+762,0,"ADB13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"CLKB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CEB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"OCEB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"WEB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSB0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSB1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSB2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"RSTB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+391,0,"DOA0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+392,0,"DOA1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+393,0,"DOA2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+394,0,"DOA3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+395,0,"DOA4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+396,0,"DOA5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+397,0,"DOA6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+398,0,"DOA7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+399,0,"DOA8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+400,0,"DOA9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+401,0,"DOA10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+402,0,"DOA11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+403,0,"DOA12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+404,0,"DOA13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+405,0,"DOA14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+406,0,"DOA15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+407,0,"DOA16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+408,0,"DOA17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+409,0,"DOB0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+410,0,"DOB1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+411,0,"DOB2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+412,0,"DOB3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+413,0,"DOB4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+414,0,"DOB5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+415,0,"DOB6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+416,0,"DOB7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+417,0,"DOB8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+418,0,"DOB9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+419,0,"DOB10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+420,0,"DOB11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+421,0,"DOB12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+422,0,"DOB13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+423,0,"DOB14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+424,0,"DOB15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+425,0,"DOB16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+426,0,"DOB17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"DATA_WIDTH_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"DATA_WIDTH_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+888,0,"WRITEMODE_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+888,0,"WRITEMODE_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+890,0,"CSDECODE_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_QUAD(tracep,c+890,0,"CSDECODE_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_QUAD(tracep,c+892,0,"RESETMODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"dia",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+894,0,"dib",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"ada",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+763,0,"adb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+895,0,"csa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+895,0,"csb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+427,0,"doa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+428,0,"dob",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "ebr", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+50,0,"DIA0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+51,0,"DIA1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+52,0,"DIA2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"DIA3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+54,0,"DIA4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+55,0,"DIA5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"DIA6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+57,0,"DIA7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA16",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA17",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADA0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADA1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADA2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+58,0,"ADA3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+59,0,"ADA4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"ADA5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"ADA6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+62,0,"ADA7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"ADA8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+64,0,"ADA9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"ADA10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+66,0,"ADA11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+67,0,"ADA12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+68,0,"ADA13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"CLKA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CEA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"OCEA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+69,0,"WEA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSA0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSA1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSA2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"RSTA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB16",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB17",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADB0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADB1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADB2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+764,0,"ADB3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+765,0,"ADB4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+766,0,"ADB5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+767,0,"ADB6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+768,0,"ADB7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+769,0,"ADB8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+770,0,"ADB9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+771,0,"ADB10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+772,0,"ADB11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+773,0,"ADB12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+774,0,"ADB13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"CLKB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CEB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"OCEB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"WEB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSB0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSB1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSB2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"RSTB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+429,0,"DOA0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+430,0,"DOA1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+431,0,"DOA2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+432,0,"DOA3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+433,0,"DOA4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+434,0,"DOA5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+435,0,"DOA6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+436,0,"DOA7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+437,0,"DOA8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+438,0,"DOA9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+439,0,"DOA10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+440,0,"DOA11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+441,0,"DOA12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+442,0,"DOA13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"DOA14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+444,0,"DOA15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+445,0,"DOA16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+446,0,"DOA17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+447,0,"DOB0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+448,0,"DOB1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+449,0,"DOB2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+450,0,"DOB3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+451,0,"DOB4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+452,0,"DOB5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+453,0,"DOB6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+454,0,"DOB7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+455,0,"DOB8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+456,0,"DOB9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+457,0,"DOB10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+458,0,"DOB11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+459,0,"DOB12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+460,0,"DOB13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"DOB14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+462,0,"DOB15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+463,0,"DOB16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"DOB17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"DATA_WIDTH_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"DATA_WIDTH_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+888,0,"WRITEMODE_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+888,0,"WRITEMODE_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+890,0,"CSDECODE_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_QUAD(tracep,c+890,0,"CSDECODE_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_QUAD(tracep,c+892,0,"RESETMODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"dia",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+894,0,"dib",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"ada",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+775,0,"adb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+895,0,"csa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+895,0,"csb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+465,0,"doa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+466,0,"dob",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "ebr", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+72,0,"DIA0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+73,0,"DIA1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+74,0,"DIA2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+75,0,"DIA3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+76,0,"DIA4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+77,0,"DIA5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"DIA6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+79,0,"DIA7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA16",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA17",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADA0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADA1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADA2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"ADA3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+81,0,"ADA4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+82,0,"ADA5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+83,0,"ADA6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+84,0,"ADA7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+85,0,"ADA8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+86,0,"ADA9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+87,0,"ADA10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+88,0,"ADA11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+89,0,"ADA12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+90,0,"ADA13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"CLKA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CEA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"OCEA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+91,0,"WEA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSA0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSA1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSA2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"RSTA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB16",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB17",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADB0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADB1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADB2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+776,0,"ADB3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+777,0,"ADB4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+778,0,"ADB5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+779,0,"ADB6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+780,0,"ADB7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+781,0,"ADB8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+782,0,"ADB9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+783,0,"ADB10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+784,0,"ADB11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+785,0,"ADB12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+786,0,"ADB13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"CLKB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CEB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"OCEB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"WEB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSB0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSB1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSB2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"RSTB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+467,0,"DOA0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+468,0,"DOA1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+469,0,"DOA2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+470,0,"DOA3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"DOA4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+472,0,"DOA5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"DOA6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+474,0,"DOA7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+475,0,"DOA8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+476,0,"DOA9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+477,0,"DOA10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+478,0,"DOA11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+479,0,"DOA12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+480,0,"DOA13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+481,0,"DOA14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+482,0,"DOA15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+483,0,"DOA16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+484,0,"DOA17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+485,0,"DOB0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+486,0,"DOB1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+487,0,"DOB2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+488,0,"DOB3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+489,0,"DOB4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+490,0,"DOB5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+491,0,"DOB6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+492,0,"DOB7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+493,0,"DOB8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+494,0,"DOB9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+495,0,"DOB10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+496,0,"DOB11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+497,0,"DOB12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+498,0,"DOB13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+499,0,"DOB14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+500,0,"DOB15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+501,0,"DOB16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+502,0,"DOB17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"DATA_WIDTH_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"DATA_WIDTH_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+888,0,"WRITEMODE_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+888,0,"WRITEMODE_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+890,0,"CSDECODE_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_QUAD(tracep,c+890,0,"CSDECODE_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_QUAD(tracep,c+892,0,"RESETMODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"dia",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+894,0,"dib",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"ada",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+787,0,"adb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+895,0,"csa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+895,0,"csb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+503,0,"doa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+504,0,"dob",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "ebr", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+94,0,"DIA0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+95,0,"DIA1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"DIA2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+97,0,"DIA3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+98,0,"DIA4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+99,0,"DIA5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+100,0,"DIA6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+101,0,"DIA7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA16",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA17",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADA0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADA1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADA2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+102,0,"ADA3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+103,0,"ADA4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+104,0,"ADA5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+105,0,"ADA6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+106,0,"ADA7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+107,0,"ADA8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+108,0,"ADA9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+109,0,"ADA10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+110,0,"ADA11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+111,0,"ADA12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+112,0,"ADA13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"CLKA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CEA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"OCEA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+113,0,"WEA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSA0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSA1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSA2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"RSTA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB16",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB17",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADB0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADB1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADB2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+788,0,"ADB3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+789,0,"ADB4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+790,0,"ADB5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+791,0,"ADB6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+792,0,"ADB7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+793,0,"ADB8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+794,0,"ADB9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+795,0,"ADB10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+796,0,"ADB11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+797,0,"ADB12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+798,0,"ADB13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"CLKB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CEB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"OCEB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"WEB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSB0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSB1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSB2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"RSTB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+505,0,"DOA0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+506,0,"DOA1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+507,0,"DOA2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+508,0,"DOA3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+509,0,"DOA4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+510,0,"DOA5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+511,0,"DOA6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+512,0,"DOA7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+513,0,"DOA8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+514,0,"DOA9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+515,0,"DOA10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+516,0,"DOA11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+517,0,"DOA12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+518,0,"DOA13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+519,0,"DOA14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+520,0,"DOA15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+521,0,"DOA16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+522,0,"DOA17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+523,0,"DOB0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+524,0,"DOB1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+525,0,"DOB2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+526,0,"DOB3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+527,0,"DOB4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+528,0,"DOB5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+529,0,"DOB6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+530,0,"DOB7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+531,0,"DOB8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+532,0,"DOB9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+533,0,"DOB10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+534,0,"DOB11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+535,0,"DOB12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+536,0,"DOB13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+537,0,"DOB14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+538,0,"DOB15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+539,0,"DOB16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+540,0,"DOB17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"DATA_WIDTH_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"DATA_WIDTH_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+888,0,"WRITEMODE_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+888,0,"WRITEMODE_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+890,0,"CSDECODE_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_QUAD(tracep,c+890,0,"CSDECODE_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_QUAD(tracep,c+892,0,"RESETMODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+114,0,"dia",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+894,0,"dib",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+115,0,"ada",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+799,0,"adb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+895,0,"csa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+895,0,"csb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+541,0,"doa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+542,0,"dob",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vmain___024root__trace_init_sub__TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk__0(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_init_sub__TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk__0\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+852,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+116,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+117,0,"r_bsel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+118,0,"blk_di",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+119,0,"blk_ad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 51,0);
    VL_TRACE_DECL_QUAD(tracep,c+800,0,"blk_iad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 51,0);
    VL_TRACE_DECL_BUS(tracep,c+543,0,"ebr_a0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+544,0,"ebr_b0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"ebr_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+871,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"memblks",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+121,0,"ebr_dia",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+881,0,"ebr_dib",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_QUAD(tracep,c+124,0,"ebr_ada",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 55,0);
    VL_TRACE_DECL_QUAD(tracep,c+802,0,"ebr_adb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 55,0);
    VL_TRACE_DECL_BUS(tracep,c+884,0,"ebr_csa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+884,0,"ebr_csb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+885,0,"ebr_cea",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+885,0,"ebr_ceb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+885,0,"ebr_ocea",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+885,0,"ebr_oceb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+126,0,"ebr_wea",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+886,0,"ebr_web",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+886,0,"ebr_rsta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+886,0,"ebr_rstb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_WIDE(tracep,c+545,0,"ebr_doa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+548,0,"ebr_dob",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "ebr", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"DIA0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+128,0,"DIA1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+129,0,"DIA2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"DIA3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+131,0,"DIA4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+132,0,"DIA5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+133,0,"DIA6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+134,0,"DIA7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA16",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA17",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADA0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADA1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADA2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+135,0,"ADA3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+136,0,"ADA4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+137,0,"ADA5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+138,0,"ADA6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+139,0,"ADA7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+140,0,"ADA8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+141,0,"ADA9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+142,0,"ADA10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+143,0,"ADA11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+144,0,"ADA12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+145,0,"ADA13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"CLKA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CEA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"OCEA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+146,0,"WEA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSA0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSA1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSA2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"RSTA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB16",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB17",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADB0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADB1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADB2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+804,0,"ADB3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"ADB4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+806,0,"ADB5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+807,0,"ADB6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+808,0,"ADB7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+809,0,"ADB8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+810,0,"ADB9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+811,0,"ADB10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+812,0,"ADB11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+813,0,"ADB12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+814,0,"ADB13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"CLKB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CEB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"OCEB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"WEB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSB0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSB1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSB2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"RSTB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+551,0,"DOA0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+552,0,"DOA1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+553,0,"DOA2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+554,0,"DOA3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+555,0,"DOA4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+556,0,"DOA5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+557,0,"DOA6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+558,0,"DOA7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+559,0,"DOA8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+560,0,"DOA9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+561,0,"DOA10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+562,0,"DOA11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+563,0,"DOA12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+564,0,"DOA13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+565,0,"DOA14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+566,0,"DOA15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+567,0,"DOA16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+568,0,"DOA17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+569,0,"DOB0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+570,0,"DOB1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+571,0,"DOB2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+572,0,"DOB3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+573,0,"DOB4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+574,0,"DOB5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+575,0,"DOB6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+576,0,"DOB7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+577,0,"DOB8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+578,0,"DOB9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+579,0,"DOB10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+580,0,"DOB11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+581,0,"DOB12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+582,0,"DOB13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+583,0,"DOB14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+584,0,"DOB15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+585,0,"DOB16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+586,0,"DOB17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"DATA_WIDTH_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"DATA_WIDTH_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+888,0,"WRITEMODE_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+888,0,"WRITEMODE_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+890,0,"CSDECODE_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_QUAD(tracep,c+890,0,"CSDECODE_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_QUAD(tracep,c+892,0,"RESETMODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+147,0,"dia",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+894,0,"dib",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"ada",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+815,0,"adb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+895,0,"csa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+895,0,"csb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+587,0,"doa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+588,0,"dob",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "ebr", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+149,0,"DIA0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+150,0,"DIA1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+151,0,"DIA2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+152,0,"DIA3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+153,0,"DIA4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+154,0,"DIA5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+155,0,"DIA6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+156,0,"DIA7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA16",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA17",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADA0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADA1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADA2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+157,0,"ADA3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+158,0,"ADA4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"ADA5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+160,0,"ADA6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+161,0,"ADA7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+162,0,"ADA8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"ADA9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+164,0,"ADA10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+165,0,"ADA11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+166,0,"ADA12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+167,0,"ADA13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"CLKA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CEA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"OCEA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+168,0,"WEA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSA0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSA1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSA2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"RSTA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB16",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB17",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADB0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADB1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADB2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+816,0,"ADB3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+817,0,"ADB4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+818,0,"ADB5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+819,0,"ADB6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+820,0,"ADB7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+821,0,"ADB8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+822,0,"ADB9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+823,0,"ADB10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"ADB11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+825,0,"ADB12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+826,0,"ADB13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"CLKB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CEB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"OCEB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"WEB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSB0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSB1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSB2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"RSTB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+589,0,"DOA0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+590,0,"DOA1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+591,0,"DOA2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+592,0,"DOA3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+593,0,"DOA4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+594,0,"DOA5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+595,0,"DOA6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+596,0,"DOA7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+597,0,"DOA8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+598,0,"DOA9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+599,0,"DOA10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+600,0,"DOA11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+601,0,"DOA12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+602,0,"DOA13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+603,0,"DOA14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+604,0,"DOA15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+605,0,"DOA16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+606,0,"DOA17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+607,0,"DOB0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+608,0,"DOB1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+609,0,"DOB2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+610,0,"DOB3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+611,0,"DOB4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+612,0,"DOB5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+613,0,"DOB6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+614,0,"DOB7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+615,0,"DOB8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+616,0,"DOB9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+617,0,"DOB10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+618,0,"DOB11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+619,0,"DOB12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+620,0,"DOB13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+621,0,"DOB14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+622,0,"DOB15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+623,0,"DOB16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+624,0,"DOB17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"DATA_WIDTH_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"DATA_WIDTH_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+888,0,"WRITEMODE_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+888,0,"WRITEMODE_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+890,0,"CSDECODE_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_QUAD(tracep,c+890,0,"CSDECODE_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_QUAD(tracep,c+892,0,"RESETMODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"dia",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+894,0,"dib",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+170,0,"ada",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+827,0,"adb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+895,0,"csa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+895,0,"csb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+625,0,"doa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+626,0,"dob",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "ebr", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+171,0,"DIA0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+172,0,"DIA1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+173,0,"DIA2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+174,0,"DIA3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+175,0,"DIA4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+176,0,"DIA5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+177,0,"DIA6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+178,0,"DIA7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA16",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA17",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADA0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADA1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADA2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+179,0,"ADA3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+180,0,"ADA4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+181,0,"ADA5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+182,0,"ADA6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+183,0,"ADA7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+184,0,"ADA8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+185,0,"ADA9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+186,0,"ADA10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+187,0,"ADA11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+188,0,"ADA12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+189,0,"ADA13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"CLKA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CEA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"OCEA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"WEA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSA0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSA1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSA2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"RSTA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB16",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB17",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADB0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADB1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADB2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+828,0,"ADB3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+829,0,"ADB4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+830,0,"ADB5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+831,0,"ADB6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+832,0,"ADB7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+833,0,"ADB8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+834,0,"ADB9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"ADB10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+836,0,"ADB11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+837,0,"ADB12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+838,0,"ADB13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"CLKB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CEB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"OCEB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"WEB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSB0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSB1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSB2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"RSTB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+627,0,"DOA0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+628,0,"DOA1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+629,0,"DOA2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+630,0,"DOA3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+631,0,"DOA4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+632,0,"DOA5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+633,0,"DOA6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+634,0,"DOA7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+635,0,"DOA8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+636,0,"DOA9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+637,0,"DOA10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+638,0,"DOA11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+639,0,"DOA12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+640,0,"DOA13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+641,0,"DOA14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+642,0,"DOA15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+643,0,"DOA16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+644,0,"DOA17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+645,0,"DOB0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+646,0,"DOB1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+647,0,"DOB2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+648,0,"DOB3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+649,0,"DOB4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+650,0,"DOB5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+651,0,"DOB6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+652,0,"DOB7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+653,0,"DOB8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+654,0,"DOB9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+655,0,"DOB10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+656,0,"DOB11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+657,0,"DOB12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+658,0,"DOB13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+659,0,"DOB14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+660,0,"DOB15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+661,0,"DOB16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+662,0,"DOB17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"DATA_WIDTH_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"DATA_WIDTH_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+888,0,"WRITEMODE_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+888,0,"WRITEMODE_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+890,0,"CSDECODE_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_QUAD(tracep,c+890,0,"CSDECODE_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_QUAD(tracep,c+892,0,"RESETMODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+191,0,"dia",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+894,0,"dib",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+192,0,"ada",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+839,0,"adb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+895,0,"csa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+895,0,"csb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+663,0,"doa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+664,0,"dob",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "ebr", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+94,0,"DIA0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+95,0,"DIA1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"DIA2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+97,0,"DIA3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+98,0,"DIA4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+99,0,"DIA5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+100,0,"DIA6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+101,0,"DIA7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA16",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIA17",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADA0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADA1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADA2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"ADA3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+194,0,"ADA4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+195,0,"ADA5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+196,0,"ADA6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+197,0,"ADA7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+198,0,"ADA8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+199,0,"ADA9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+200,0,"ADA10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+201,0,"ADA11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+202,0,"ADA12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+203,0,"ADA13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"CLKA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CEA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"OCEA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+204,0,"WEA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSA0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSA1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSA2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"RSTA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB16",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"DIB17",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADB0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADB1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"ADB2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"ADB3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+841,0,"ADB4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+842,0,"ADB5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+843,0,"ADB6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+844,0,"ADB7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+845,0,"ADB8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+846,0,"ADB9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+847,0,"ADB10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+848,0,"ADB11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+849,0,"ADB12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+850,0,"ADB13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+852,0,"CLKB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CEB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"OCEB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"WEB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSB0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSB1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+876,0,"CSB2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+865,0,"RSTB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+665,0,"DOA0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+666,0,"DOA1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+667,0,"DOA2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+668,0,"DOA3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+669,0,"DOA4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+670,0,"DOA5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+671,0,"DOA6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+672,0,"DOA7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+673,0,"DOA8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+674,0,"DOA9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+675,0,"DOA10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+676,0,"DOA11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+677,0,"DOA12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+678,0,"DOA13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+679,0,"DOA14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+680,0,"DOA15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+681,0,"DOA16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+682,0,"DOA17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+683,0,"DOB0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+684,0,"DOB1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+685,0,"DOB2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+686,0,"DOB3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+687,0,"DOB4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+688,0,"DOB5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+689,0,"DOB6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+690,0,"DOB7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+691,0,"DOB8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+692,0,"DOB9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+693,0,"DOB10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+694,0,"DOB11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+695,0,"DOB12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+696,0,"DOB13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+697,0,"DOB14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+698,0,"DOB15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+699,0,"DOB16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+700,0,"DOB17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"DATA_WIDTH_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"DATA_WIDTH_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+888,0,"WRITEMODE_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+888,0,"WRITEMODE_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+890,0,"CSDECODE_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_QUAD(tracep,c+890,0,"CSDECODE_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_QUAD(tracep,c+892,0,"RESETMODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+114,0,"dia",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+894,0,"dib",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+205,0,"ada",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+851,0,"adb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+895,0,"csa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+895,0,"csb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+701,0,"doa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+702,0,"dob",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vmain___024root__trace_init_top(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_init_top\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmain___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmain___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vmain___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmain___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmain___024root__trace_register(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_register\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vmain___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vmain___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vmain___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vmain___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmain___024root__trace_const_0_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmain___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_const_0\n"); );
    // Body
    Vmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain___024root*>(voidSelf);
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vmain___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmain___024root__trace_const_0_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_const_0_sub_0\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+861,(0x0001c200U),32);
    bufp->fullIData(oldp+862,(0x00000013U),32);
    bufp->fullBit(oldp+863,(vlSelfRef.main__DOT__cpu_adsel));
    bufp->fullBit(oldp+864,(vlSelfRef.main__DOT__u2_ra1));
    bufp->fullBit(oldp+865,(0U));
    bufp->fullCData(oldp+866,(0U),8);
    bufp->fullSData(oldp+867,(0U),11);
    bufp->fullCData(oldp+868,(vlSelfRef.main__DOT__uart_rx_state),4);
    bufp->fullCData(oldp+869,(vlSelfRef.main__DOT__uart_tx_state),4);
    bufp->fullIData(oldp+870,(2U),32);
    bufp->fullIData(oldp+871,(4U),32);
    bufp->fullCData(oldp+872,(vlSelfRef.main__DOT__u2_ra1),5);
    bufp->fullBit(oldp+873,(vlSelfRef.main__DOT__u4__DOT__u2__DOT__u1__DOT__iflag_sel));
    bufp->fullIData(oldp+874,(0U),32);
    bufp->fullBit(oldp+875,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_validrd));
    bufp->fullBit(oldp+876,(1U));
    bufp->fullIData(oldp+877,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__i),32);
    bufp->fullIData(oldp+878,(0x00000020U),32);
    bufp->fullIData(oldp+879,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__i),32);
    bufp->fullIData(oldp+880,(4U),32);
    __Vtemp_1[0U] = 0U;
    __Vtemp_1[1U] = 0U;
    __Vtemp_1[2U] = 0U;
    bufp->fullWData(oldp+881,(__Vtemp_1),72);
    bufp->fullSData(oldp+884,(0x0fffU),12);
    bufp->fullCData(oldp+885,(0x0fU),4);
    bufp->fullCData(oldp+886,(0U),4);
    bufp->fullIData(oldp+887,(9U),32);
    bufp->fullQData(oldp+888,(0x00004e4f524d414cULL),48);
    bufp->fullQData(oldp+890,(0x0000003062313131ULL),40);
    bufp->fullQData(oldp+892,(0x0000004153594e43ULL),40);
    bufp->fullIData(oldp+894,(0U),18);
    bufp->fullCData(oldp+895,(7U),3);
}

VL_ATTR_COLD void Vmain___024root__trace_full_0_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmain___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_full_0\n"); );
    // Body
    Vmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain___024root*>(voidSelf);
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vmain___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmain___024root__trace_full_0_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_full_0_sub_0\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<5>/*159:0*/ __Vtemp_9;
    VlWide<5>/*159:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.main__DOT__u3_we));
    bufp->fullCData(oldp+1,(vlSelfRef.main__DOT__u3_bsel),4);
    bufp->fullIData(oldp+2,(vlSelfRef.main__DOT__u3_ad),19);
    bufp->fullIData(oldp+3,(vlSelfRef.main__DOT__u3_wd),32);
    bufp->fullBit(oldp+4,(vlSelfRef.main__DOT__u3__DOT__overlap));
    bufp->fullIData(oldp+5,((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                              << 0x00000018U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)),32);
    bufp->fullIData(oldp+6,(vlSelfRef.main__DOT__u3__DOT__overlap_blk_di),24);
    bufp->fullQData(oldp+7,(vlSelfRef.main__DOT__u3__DOT__blk_ad),52);
    bufp->fullCData(oldp+9,(vlSelfRef.main__DOT__u3__DOT__blk_ofst),8);
    bufp->fullCData(oldp+10,(vlSelfRef.main__DOT__u3__DOT__r_bsel),4);
    bufp->fullCData(oldp+11,(vlSelfRef.main__DOT__u3__DOT__n_bsel),4);
    bufp->fullCData(oldp+12,((0x0000003fU & ((IData)(1U) 
                                             + (vlSelfRef.main__DOT__u3_ad 
                                                >> 0x0000000dU)))),6);
    bufp->fullQData(oldp+13,(vlSelfRef.main__DOT__u3__DOT__decoder),64);
    bufp->fullQData(oldp+15,(vlSelfRef.main__DOT__u3__DOT__nblk_decoder),64);
    bufp->fullBit(oldp+17,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.we));
    bufp->fullCData(oldp+18,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.r_bsel),4);
    bufp->fullIData(oldp+19,((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                               << 0x00000018U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)),32);
    bufp->fullQData(oldp+20,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad),52);
    __Vtemp_1[0U] = (IData)((((QData)((IData)((0x000000ffU 
                                               & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                                  >> 8U)))) 
                              << 0x00000012U) | (QData)((IData)(
                                                                (0x000000ffU 
                                                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))));
    __Vtemp_1[1U] = (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)) 
                                << 0x00000012U) | (QData)((IData)(
                                                                  (0x000000ffU 
                                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                                                      >> 0x00000010U)))))) 
                      << 4U) | (IData)(((((QData)((IData)(
                                                          (0x000000ffU 
                                                           & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                                              >> 8U)))) 
                                          << 0x00000012U) 
                                         | (QData)((IData)(
                                                           (0x000000ffU 
                                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))) 
                                        >> 0x00000020U)));
    __Vtemp_1[2U] = (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)) 
                                << 0x00000012U) | (QData)((IData)(
                                                                  (0x000000ffU 
                                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                                                      >> 0x00000010U)))))) 
                      >> 0x0000001cU) | ((IData)(((
                                                   ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)) 
                                                    << 0x00000012U) 
                                                   | (QData)((IData)(
                                                                     (0x000000ffU 
                                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                                                         >> 0x00000010U))))) 
                                                  >> 0x00000020U)) 
                                         << 4U));
    bufp->fullWData(oldp+22,(__Vtemp_1),72);
    bufp->fullQData(oldp+25,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__ebr_ada),56);
    bufp->fullCData(oldp+27,(((0xfffffff8U & ((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.r_bsel) 
                                              & ((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.we) 
                                                 << 3U))) 
                              | ((0xfffffffcU & ((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.r_bsel) 
                                                 & ((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.we) 
                                                    << 2U))) 
                                 | (3U & ((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.r_bsel) 
                                          & (- (IData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.we)))))))),4);
    bufp->fullBit(oldp+28,((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)));
    bufp->fullBit(oldp+29,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                  >> 1U))));
    bufp->fullBit(oldp+30,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                  >> 2U))));
    bufp->fullBit(oldp+31,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                  >> 3U))));
    bufp->fullBit(oldp+32,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                  >> 4U))));
    bufp->fullBit(oldp+33,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                  >> 5U))));
    bufp->fullBit(oldp+34,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                  >> 6U))));
    bufp->fullBit(oldp+35,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                  >> 7U))));
    bufp->fullBit(oldp+36,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 2U)))));
    bufp->fullBit(oldp+37,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 3U)))));
    bufp->fullBit(oldp+38,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 4U)))));
    bufp->fullBit(oldp+39,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 5U)))));
    bufp->fullBit(oldp+40,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 6U)))));
    bufp->fullBit(oldp+41,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 7U)))));
    bufp->fullBit(oldp+42,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 8U)))));
    bufp->fullBit(oldp+43,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 9U)))));
    bufp->fullBit(oldp+44,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x0000000aU)))));
    bufp->fullBit(oldp+45,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x0000000bU)))));
    bufp->fullBit(oldp+46,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x0000000cU)))));
    bufp->fullBit(oldp+47,(((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.r_bsel) 
                            & (IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.we))));
    bufp->fullIData(oldp+48,((0x000000ffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)),18);
    bufp->fullSData(oldp+49,((0x00003ff8U & ((IData)(
                                                     (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                                      >> 2U)) 
                                             << 3U))),14);
    bufp->fullBit(oldp+50,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                  >> 8U))));
    bufp->fullBit(oldp+51,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                  >> 9U))));
    bufp->fullBit(oldp+52,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                  >> 0x0000000aU))));
    bufp->fullBit(oldp+53,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                  >> 0x0000000bU))));
    bufp->fullBit(oldp+54,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                  >> 0x0000000cU))));
    bufp->fullBit(oldp+55,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                  >> 0x0000000dU))));
    bufp->fullBit(oldp+56,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                  >> 0x0000000eU))));
    bufp->fullBit(oldp+57,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                  >> 0x0000000fU))));
    bufp->fullBit(oldp+58,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x0000000fU)))));
    bufp->fullBit(oldp+59,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x00000010U)))));
    bufp->fullBit(oldp+60,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x00000011U)))));
    bufp->fullBit(oldp+61,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x00000012U)))));
    bufp->fullBit(oldp+62,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x00000013U)))));
    bufp->fullBit(oldp+63,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x00000014U)))));
    bufp->fullBit(oldp+64,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x00000015U)))));
    bufp->fullBit(oldp+65,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x00000016U)))));
    bufp->fullBit(oldp+66,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x00000017U)))));
    bufp->fullBit(oldp+67,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x00000018U)))));
    bufp->fullBit(oldp+68,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x00000019U)))));
    bufp->fullBit(oldp+69,((((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.r_bsel) 
                             >> 1U) & (IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.we))));
    bufp->fullIData(oldp+70,((0x000000ffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                             >> 8U))),18);
    bufp->fullSData(oldp+71,((0x00003ff8U & ((IData)(
                                                     (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                                      >> 0x0000000fU)) 
                                             << 3U))),14);
    bufp->fullBit(oldp+72,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                  >> 0x00000010U))));
    bufp->fullBit(oldp+73,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                  >> 0x00000011U))));
    bufp->fullBit(oldp+74,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                  >> 0x00000012U))));
    bufp->fullBit(oldp+75,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                  >> 0x00000013U))));
    bufp->fullBit(oldp+76,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                  >> 0x00000014U))));
    bufp->fullBit(oldp+77,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                  >> 0x00000015U))));
    bufp->fullBit(oldp+78,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                  >> 0x00000016U))));
    bufp->fullBit(oldp+79,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                  >> 0x00000017U))));
    bufp->fullBit(oldp+80,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x0000001cU)))));
    bufp->fullBit(oldp+81,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x0000001dU)))));
    bufp->fullBit(oldp+82,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x0000001eU)))));
    bufp->fullBit(oldp+83,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x0000001fU)))));
    bufp->fullBit(oldp+84,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x00000020U)))));
    bufp->fullBit(oldp+85,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x00000021U)))));
    bufp->fullBit(oldp+86,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x00000022U)))));
    bufp->fullBit(oldp+87,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x00000023U)))));
    bufp->fullBit(oldp+88,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x00000024U)))));
    bufp->fullBit(oldp+89,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x00000025U)))));
    bufp->fullBit(oldp+90,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                          >> 0x00000026U)))));
    bufp->fullBit(oldp+91,((((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.r_bsel) 
                             >> 2U) & (IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.we))));
    bufp->fullIData(oldp+92,((0x000000ffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                             >> 0x00000010U))),18);
    bufp->fullSData(oldp+93,((0x00003ff8U & ((IData)(
                                                     (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                                      >> 0x0000001cU)) 
                                             << 3U))),14);
    bufp->fullBit(oldp+94,((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5))));
    bufp->fullBit(oldp+95,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                  >> 1U))));
    bufp->fullBit(oldp+96,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                  >> 2U))));
    bufp->fullBit(oldp+97,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                  >> 3U))));
    bufp->fullBit(oldp+98,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                  >> 4U))));
    bufp->fullBit(oldp+99,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                  >> 5U))));
    bufp->fullBit(oldp+100,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                   >> 6U))));
    bufp->fullBit(oldp+101,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                   >> 7U))));
    bufp->fullBit(oldp+102,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                           >> 0x00000029U)))));
    bufp->fullBit(oldp+103,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                           >> 0x0000002aU)))));
    bufp->fullBit(oldp+104,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                           >> 0x0000002bU)))));
    bufp->fullBit(oldp+105,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                           >> 0x0000002cU)))));
    bufp->fullBit(oldp+106,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                           >> 0x0000002dU)))));
    bufp->fullBit(oldp+107,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                           >> 0x0000002eU)))));
    bufp->fullBit(oldp+108,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                           >> 0x0000002fU)))));
    bufp->fullBit(oldp+109,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                           >> 0x00000030U)))));
    bufp->fullBit(oldp+110,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                           >> 0x00000031U)))));
    bufp->fullBit(oldp+111,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                           >> 0x00000032U)))));
    bufp->fullBit(oldp+112,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                           >> 0x00000033U)))));
    bufp->fullBit(oldp+113,((((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.r_bsel) 
                              >> 3U) & (IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.we))));
    bufp->fullIData(oldp+114,(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5),18);
    bufp->fullSData(oldp+115,((0x00003fffU & (IData)(
                                                     (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__ebr_ada 
                                                      >> 0x0000002aU)))),14);
    bufp->fullBit(oldp+116,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.we));
    bufp->fullCData(oldp+117,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.r_bsel),4);
    bufp->fullIData(oldp+118,((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                << 0x00000018U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)),32);
    bufp->fullQData(oldp+119,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad),52);
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0x000000ffU 
                                               & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                                  >> 8U)))) 
                              << 0x00000012U) | (QData)((IData)(
                                                                (0x000000ffU 
                                                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)))));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)) 
                                << 0x00000012U) | (QData)((IData)(
                                                                  (0x000000ffU 
                                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                                                      >> 0x00000010U)))))) 
                      << 4U) | (IData)(((((QData)((IData)(
                                                          (0x000000ffU 
                                                           & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                                              >> 8U)))) 
                                          << 0x00000012U) 
                                         | (QData)((IData)(
                                                           (0x000000ffU 
                                                            & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)))) 
                                        >> 0x00000020U)));
    __Vtemp_2[2U] = (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)) 
                                << 0x00000012U) | (QData)((IData)(
                                                                  (0x000000ffU 
                                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                                                      >> 0x00000010U)))))) 
                      >> 0x0000001cU) | ((IData)(((
                                                   ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)) 
                                                    << 0x00000012U) 
                                                   | (QData)((IData)(
                                                                     (0x000000ffU 
                                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                                                         >> 0x00000010U))))) 
                                                  >> 0x00000020U)) 
                                         << 4U));
    bufp->fullWData(oldp+121,(__Vtemp_2),72);
    bufp->fullQData(oldp+124,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__ebr_ada),56);
    bufp->fullCData(oldp+126,(((0xfffffff8U & ((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.r_bsel) 
                                               & ((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.we) 
                                                  << 3U))) 
                               | ((0xfffffffcU & ((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.r_bsel) 
                                                  & ((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.we) 
                                                     << 2U))) 
                                  | (3U & ((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.r_bsel) 
                                           & (- (IData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.we)))))))),4);
    bufp->fullBit(oldp+127,((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)));
    bufp->fullBit(oldp+128,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 1U))));
    bufp->fullBit(oldp+129,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 2U))));
    bufp->fullBit(oldp+130,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 3U))));
    bufp->fullBit(oldp+131,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 4U))));
    bufp->fullBit(oldp+132,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 5U))));
    bufp->fullBit(oldp+133,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 6U))));
    bufp->fullBit(oldp+134,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 7U))));
    bufp->fullBit(oldp+135,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 2U)))));
    bufp->fullBit(oldp+136,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 3U)))));
    bufp->fullBit(oldp+137,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 4U)))));
    bufp->fullBit(oldp+138,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 5U)))));
    bufp->fullBit(oldp+139,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 6U)))));
    bufp->fullBit(oldp+140,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 7U)))));
    bufp->fullBit(oldp+141,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 8U)))));
    bufp->fullBit(oldp+142,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 9U)))));
    bufp->fullBit(oldp+143,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x0000000aU)))));
    bufp->fullBit(oldp+144,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x0000000bU)))));
    bufp->fullBit(oldp+145,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x0000000cU)))));
    bufp->fullBit(oldp+146,(((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.r_bsel) 
                             & (IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.we))));
    bufp->fullIData(oldp+147,((0x000000ffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)),18);
    bufp->fullSData(oldp+148,((0x00003ff8U & ((IData)(
                                                      (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                                       >> 2U)) 
                                              << 3U))),14);
    bufp->fullBit(oldp+149,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 8U))));
    bufp->fullBit(oldp+150,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 9U))));
    bufp->fullBit(oldp+151,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 0x0000000aU))));
    bufp->fullBit(oldp+152,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 0x0000000bU))));
    bufp->fullBit(oldp+153,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 0x0000000cU))));
    bufp->fullBit(oldp+154,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 0x0000000dU))));
    bufp->fullBit(oldp+155,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 0x0000000eU))));
    bufp->fullBit(oldp+156,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 0x0000000fU))));
    bufp->fullBit(oldp+157,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x0000000fU)))));
    bufp->fullBit(oldp+158,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x00000010U)))));
    bufp->fullBit(oldp+159,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x00000011U)))));
    bufp->fullBit(oldp+160,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x00000012U)))));
    bufp->fullBit(oldp+161,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x00000013U)))));
    bufp->fullBit(oldp+162,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x00000014U)))));
    bufp->fullBit(oldp+163,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x00000015U)))));
    bufp->fullBit(oldp+164,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x00000016U)))));
    bufp->fullBit(oldp+165,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x00000017U)))));
    bufp->fullBit(oldp+166,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x00000018U)))));
    bufp->fullBit(oldp+167,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x00000019U)))));
    bufp->fullBit(oldp+168,((((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.r_bsel) 
                              >> 1U) & (IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.we))));
    bufp->fullIData(oldp+169,((0x000000ffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                              >> 8U))),18);
    bufp->fullSData(oldp+170,((0x00003ff8U & ((IData)(
                                                      (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                                       >> 0x0000000fU)) 
                                              << 3U))),14);
    bufp->fullBit(oldp+171,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 0x00000010U))));
    bufp->fullBit(oldp+172,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 0x00000011U))));
    bufp->fullBit(oldp+173,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 0x00000012U))));
    bufp->fullBit(oldp+174,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 0x00000013U))));
    bufp->fullBit(oldp+175,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 0x00000014U))));
    bufp->fullBit(oldp+176,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 0x00000015U))));
    bufp->fullBit(oldp+177,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 0x00000016U))));
    bufp->fullBit(oldp+178,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 0x00000017U))));
    bufp->fullBit(oldp+179,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x0000001cU)))));
    bufp->fullBit(oldp+180,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x0000001dU)))));
    bufp->fullBit(oldp+181,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x0000001eU)))));
    bufp->fullBit(oldp+182,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x0000001fU)))));
    bufp->fullBit(oldp+183,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x00000020U)))));
    bufp->fullBit(oldp+184,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x00000021U)))));
    bufp->fullBit(oldp+185,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x00000022U)))));
    bufp->fullBit(oldp+186,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x00000023U)))));
    bufp->fullBit(oldp+187,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x00000024U)))));
    bufp->fullBit(oldp+188,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x00000025U)))));
    bufp->fullBit(oldp+189,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x00000026U)))));
    bufp->fullBit(oldp+190,((((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.r_bsel) 
                              >> 2U) & (IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.we))));
    bufp->fullIData(oldp+191,((0x000000ffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                              >> 0x00000010U))),18);
    bufp->fullSData(oldp+192,((0x00003ff8U & ((IData)(
                                                      (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                                       >> 0x0000001cU)) 
                                              << 3U))),14);
    bufp->fullBit(oldp+193,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x00000029U)))));
    bufp->fullBit(oldp+194,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x0000002aU)))));
    bufp->fullBit(oldp+195,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x0000002bU)))));
    bufp->fullBit(oldp+196,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x0000002cU)))));
    bufp->fullBit(oldp+197,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x0000002dU)))));
    bufp->fullBit(oldp+198,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x0000002eU)))));
    bufp->fullBit(oldp+199,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x0000002fU)))));
    bufp->fullBit(oldp+200,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x00000030U)))));
    bufp->fullBit(oldp+201,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x00000031U)))));
    bufp->fullBit(oldp+202,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x00000032U)))));
    bufp->fullBit(oldp+203,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                           >> 0x00000033U)))));
    bufp->fullBit(oldp+204,((((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.r_bsel) 
                              >> 3U) & (IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.we))));
    bufp->fullSData(oldp+205,((0x00003fffU & (IData)(
                                                     (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__ebr_ada 
                                                      >> 0x0000002aU)))),14);
    bufp->fullBit(oldp+206,(vlSelfRef.main__DOT__state));
    bufp->fullIData(oldp+207,(vlSelfRef.main__DOT__u3_rd),32);
    bufp->fullIData(oldp+208,(vlSelfRef.main__DOT__u3_instr_rd),32);
    bufp->fullBit(oldp+209,(vlSelfRef.main__DOT__u4__DOT__m_memwe));
    bufp->fullCData(oldp+210,(((2U & (IData)(vlSelfRef.main__DOT__u4__DOT__m_funct3))
                                ? 0x0fU : ((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__m_funct3))
                                            ? 3U : 1U))),4);
    bufp->fullIData(oldp+211,((0x0007ffffU & vlSelfRef.main__DOT__u4__DOT__m_alu)),19);
    bufp->fullIData(oldp+212,(vlSelfRef.main__DOT__u4__DOT__m_rd2),32);
    bufp->fullIData(oldp+213,(vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr),32);
    bufp->fullIData(oldp+214,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__pc),32);
    bufp->fullQData(oldp+215,(vlSelfRef.main__DOT__u3__DOT__ebr_a0),64);
    bufp->fullQData(oldp+217,(vlSelfRef.main__DOT__u3__DOT__ebr_b0),64);
    bufp->fullBit(oldp+219,(vlSelfRef.main__DOT__u3__DOT__p_overlap));
    bufp->fullBit(oldp+220,(vlSelfRef.main__DOT__u3__DOT__p_ioverlap));
    bufp->fullCData(oldp+221,(vlSelfRef.main__DOT__u3__DOT__p_blk),6);
    bufp->fullCData(oldp+222,(vlSelfRef.main__DOT__u3__DOT__p_iblk),6);
    bufp->fullCData(oldp+223,(vlSelfRef.main__DOT__u3__DOT__p_nblk),6);
    bufp->fullCData(oldp+224,(vlSelfRef.main__DOT__u3__DOT__p_inblk),6);
    bufp->fullCData(oldp+225,(vlSelfRef.main__DOT__u3__DOT__p_ad),2);
    bufp->fullCData(oldp+226,(vlSelfRef.main__DOT__u3__DOT__p_iad),2);
    bufp->fullIData(oldp+227,(vlSelfRef.main__DOT__u3__DOT__blk_a0),32);
    bufp->fullIData(oldp+228,(vlSelfRef.main__DOT__u3__DOT__blk_b0),32);
    bufp->fullIData(oldp+229,(vlSelfRef.main__DOT__u3__DOT__nblk_a0),24);
    bufp->fullIData(oldp+230,(vlSelfRef.main__DOT__u3__DOT__nblk_b0),24);
    bufp->fullBit(oldp+231,(vlSelfRef.main__DOT__u4__DOT__prev_state));
    bufp->fullBit(oldp+232,(vlSelfRef.main__DOT__u4__DOT__init));
    bufp->fullBit(oldp+233,(vlSelfRef.main__DOT__u4__DOT__u2__DOT__en));
    bufp->fullIData(oldp+234,(((2U & (IData)(vlSelfRef.main__DOT__u4__DOT__s_funct3))
                                ? vlSelfRef.main__DOT__u3_rd
                                : ((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__s_funct3))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((~ 
                                                        ((IData)(vlSelfRef.main__DOT__u4__DOT__s_funct3) 
                                                         >> 2U)) 
                                                       & (vlSelfRef.main__DOT__u3_rd 
                                                          >> 0x0000000fU))))) 
                                        << 0x00000010U) 
                                       | (0x0000ffffU 
                                          & vlSelfRef.main__DOT__u3_rd))
                                    : (((- (IData)(
                                                   (1U 
                                                    & ((~ 
                                                        ((IData)(vlSelfRef.main__DOT__u4__DOT__s_funct3) 
                                                         >> 2U)) 
                                                       & (vlSelfRef.main__DOT__u3_rd 
                                                          >> 7U))))) 
                                        << 8U) | (0x000000ffU 
                                                  & vlSelfRef.main__DOT__u3_rd))))),32);
    bufp->fullCData(oldp+235,(vlSelfRef.main__DOT__u4__DOT__pc_sel),2);
    bufp->fullCData(oldp+236,(vlSelfRef.main__DOT__u4__DOT__wd_sel),2);
    bufp->fullCData(oldp+237,(vlSelfRef.main__DOT__u4__DOT__format),3);
    bufp->fullCData(oldp+238,(vlSelfRef.main__DOT__u4__DOT__alu_sel),4);
    bufp->fullBit(oldp+239,(vlSelfRef.main__DOT__u4__DOT__cede));
    bufp->fullBit(oldp+240,(vlSelfRef.main__DOT__u4__DOT__mem_we));
    bufp->fullBit(oldp+241,(vlSelfRef.main__DOT__u4__DOT__instr_we));
    bufp->fullBit(oldp+242,(vlSelfRef.main__DOT__u4__DOT__rf_we));
    bufp->fullBit(oldp+243,(vlSelfRef.main__DOT__u4__DOT__pc_we));
    bufp->fullBit(oldp+244,(vlSelfRef.main__DOT__u4__DOT__a_sel));
    bufp->fullBit(oldp+245,(vlSelfRef.main__DOT__u4__DOT__b_sel));
    bufp->fullBit(oldp+246,(vlSelfRef.main__DOT__u4__DOT__alu_cin));
    bufp->fullBit(oldp+247,(vlSelfRef.main__DOT__u4__DOT__alu_arith));
    bufp->fullBit(oldp+248,(((0U == (IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__alu_op)) 
                             & (IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__u1__DOT__iflag_set))));
    bufp->fullBit(oldp+249,(vlSelfRef.main__DOT__u4__DOT__flag_sel));
    bufp->fullBit(oldp+250,(vlSelfRef.main__DOT__u4__DOT__branch));
    bufp->fullCData(oldp+251,(vlSelfRef.main__DOT__u4__DOT__c_funct3),3);
    bufp->fullCData(oldp+252,(vlSelfRef.main__DOT__u4__DOT__m_funct3),3);
    bufp->fullCData(oldp+253,(vlSelfRef.main__DOT__u4__DOT__s_funct3),3);
    bufp->fullCData(oldp+254,(vlSelfRef.main__DOT__u4__DOT__u2__DOT__u2__DOT__alu_flags),5);
    bufp->fullIData(oldp+255,(vlSelfRef.main__DOT__u4__DOT__m_alu),32);
    bufp->fullCData(oldp+256,(vlSelfRef.main__DOT__u4__DOT__u2__DOT__alu_op),2);
    bufp->fullCData(oldp+257,((0x0000007fU & vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr)),7);
    bufp->fullCData(oldp+258,((7U & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                     >> 0x0000000cU))),3);
    bufp->fullBit(oldp+259,((1U & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                   >> 5U))));
    bufp->fullBit(oldp+260,((1U & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                   >> 0x0000001eU))));
    bufp->fullCData(oldp+261,(vlSelfRef.main__DOT__u4__DOT__u2__DOT__u1__DOT__main_decoder),6);
    bufp->fullBit(oldp+262,(vlSelfRef.main__DOT__u4__DOT__u2__DOT__u1__DOT__iflag_set));
    bufp->fullIData(oldp+263,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__imm),32);
    bufp->fullIData(oldp+264,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__rf_wd),32);
    bufp->fullIData(oldp+265,(((IData)(4U) + vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__pc)),32);
    bufp->fullIData(oldp+266,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_a),32);
    bufp->fullIData(oldp+267,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b),32);
    bufp->fullIData(oldp+268,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_c),32);
    bufp->fullBit(oldp+269,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__true_instr_we));
    bufp->fullIData(oldp+270,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__instr_reg),32);
    bufp->fullIData(oldp+271,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__d_transfer),32);
    bufp->fullIData(oldp+272,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__d_pc),32);
    bufp->fullIData(oldp+273,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__d_ipcnext),32);
    bufp->fullIData(oldp+274,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rd1),32);
    bufp->fullIData(oldp+275,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rd2),32);
    bufp->fullIData(oldp+276,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_imm),32);
    bufp->fullIData(oldp+277,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_transfer),32);
    bufp->fullIData(oldp+278,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_pc),32);
    bufp->fullIData(oldp+279,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_ipcnext),32);
    bufp->fullIData(oldp+280,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_pcnext),32);
    bufp->fullCData(oldp+281,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rd),5);
    bufp->fullCData(oldp+282,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rs1),5);
    bufp->fullCData(oldp+283,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rs2),5);
    bufp->fullCData(oldp+284,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel),4);
    bufp->fullCData(oldp+285,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_pcsel),2);
    bufp->fullCData(oldp+286,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_wdsel),2);
    bufp->fullBit(oldp+287,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_cede));
    bufp->fullBit(oldp+288,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rfwe));
    bufp->fullBit(oldp+289,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_asel));
    bufp->fullBit(oldp+290,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_bsel));
    bufp->fullBit(oldp+291,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_aluarith));
    bufp->fullBit(oldp+292,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alucin));
    bufp->fullBit(oldp+293,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_flagset));
    bufp->fullBit(oldp+294,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_flagsel));
    bufp->fullBit(oldp+295,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_memwe));
    bufp->fullBit(oldp+296,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_prediction));
    bufp->fullIData(oldp+297,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_imm),32);
    bufp->fullIData(oldp+298,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_pcnext),32);
    bufp->fullCData(oldp+299,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_aluflags),5);
    bufp->fullCData(oldp+300,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rd),5);
    bufp->fullCData(oldp+301,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rs2),5);
    bufp->fullCData(oldp+302,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_wdsel),2);
    bufp->fullBit(oldp+303,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_cede));
    bufp->fullBit(oldp+304,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rfwe));
    bufp->fullBit(oldp+305,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_flagset));
    bufp->fullBit(oldp+306,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_flagsel));
    bufp->fullIData(oldp+307,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_imm),32);
    bufp->fullIData(oldp+308,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_alu),32);
    bufp->fullIData(oldp+309,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_pcnext),32);
    bufp->fullCData(oldp+310,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_aluflags),5);
    bufp->fullCData(oldp+311,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_rd),5);
    bufp->fullCData(oldp+312,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_wdsel),2);
    bufp->fullBit(oldp+313,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_cede));
    bufp->fullBit(oldp+314,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_rfwe));
    bufp->fullBit(oldp+315,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_flagset));
    bufp->fullBit(oldp+316,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_flagsel));
    bufp->fullBit(oldp+317,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__f_en));
    bufp->fullBit(oldp+318,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__f_flush));
    bufp->fullBit(oldp+319,((1U & (~ (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_flush)))));
    bufp->fullBit(oldp+320,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_flush));
    bufp->fullBit(oldp+321,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_flush));
    bufp->fullIData(oldp+322,(((2U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_mux_rd1_sel))
                                ? ((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_mux_rd1_sel))
                                    ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__backup_rfwd
                                    : vlSelfRef.main__DOT__u4__DOT__u3__DOT__rf_wd)
                                : ((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_mux_rd1_sel))
                                    ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rfwd
                                    : vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rd1))),32);
    bufp->fullIData(oldp+323,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_mux_rd2),32);
    bufp->fullIData(oldp+324,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rfwd),32);
    bufp->fullIData(oldp+325,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__backup_rfwd),32);
    bufp->fullCData(oldp+326,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__backup_rd),5);
    bufp->fullBit(oldp+327,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__backup_rfwe));
    bufp->fullBit(oldp+328,((vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                             >> 0x0000001fU)));
    bufp->fullCData(oldp+329,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__d_mux_rd1_sel),2);
    bufp->fullCData(oldp+330,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_mux_rd1_sel),2);
    bufp->fullCData(oldp+331,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_mux_rd2_sel),2);
    bufp->fullCData(oldp+332,((0x0000001fU & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                              >> 0x0000000fU))),5);
    bufp->fullBit(oldp+333,(((IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__en) 
                             & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_rfwe))));
    bufp->fullBit(oldp+334,((((IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__en) 
                              | (IData)(vlSelfRef.main__DOT__u4__DOT__init)) 
                             & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__f_en))));
    bufp->fullCData(oldp+335,((0x0000001fU & ((IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__en)
                                               ? (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                                  >> 0x0000000fU)
                                               : (IData)(vlSelfRef.main__DOT__u2_ra1)))),5);
    bufp->fullCData(oldp+336,((0x0000001fU & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                              >> 0x00000014U))),5);
    bufp->fullIData(oldp+337,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__a_to),32);
    bufp->fullIData(oldp+338,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__b_to),32);
    bufp->fullBit(oldp+339,((IData)((2U == (3U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))))));
    bufp->fullBit(oldp+340,((IData)((1U == (3U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))))));
    bufp->fullIData(oldp+341,(((2U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))
                                ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_16
                                : vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_9)),32);
    bufp->fullIData(oldp+342,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_a),32);
    bufp->fullIData(oldp+343,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_b),32);
    bufp->fullBit(oldp+344,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_subtr));
    bufp->fullBit(oldp+345,(((~ ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel) 
                                 >> 3U)) & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alucin))));
    bufp->fullQData(oldp+346,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_out),33);
    bufp->fullBit(oldp+348,((1U & (((vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_a 
                                     >> 0x0000001fU) 
                                    & ((~ (IData)((vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_out 
                                                   >> 0x0000001fU))) 
                                       & (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1__DOT__b_op 
                                          >> 0x0000001fU))) 
                                   | ((~ (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_a 
                                          >> 0x0000001fU)) 
                                      & ((~ (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1__DOT__b_op 
                                             >> 0x0000001fU)) 
                                         & (IData)(
                                                   (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_out 
                                                    >> 0x0000001fU))))))));
    __Vtemp_4[0U] = ((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))
                      ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__b_to
                      : vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__a_to);
    __Vtemp_4[1U] = ((vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__a_to 
                      | vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__b_to) 
                     ^ (- (IData)((3U == (3U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))))));
    __Vtemp_4[2U] = (IData)((((QData)((IData)((vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__a_to 
                                               ^ (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__b_to 
                                                  ^ 
                                                  (- (IData)(
                                                             (3U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))))))))) 
                              << 0x00000020U) | (QData)((IData)(
                                                                ((vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__a_to 
                                                                  & vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__b_to) 
                                                                 ^ 
                                                                 (- (IData)(
                                                                            (3U 
                                                                             == 
                                                                             (3U 
                                                                              & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))))))))));
    __Vtemp_4[3U] = (IData)(((((QData)((IData)((vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__a_to 
                                                ^ (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__b_to 
                                                   ^ 
                                                   (- (IData)(
                                                              (3U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))))))))) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 ((vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__a_to 
                                                                   & vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__b_to) 
                                                                  ^ 
                                                                  (- (IData)(
                                                                             (3U 
                                                                              == 
                                                                              (3U 
                                                                               & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))))))))) 
                             >> 0x00000020U));
    bufp->fullWData(oldp+349,(__Vtemp_4),128);
    __Vtemp_6[0U] = (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_out);
    __Vtemp_6[1U] = ((2U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))
                      ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_16
                      : vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_9);
    __Vtemp_6[2U] = (IData)((((QData)((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_out)) 
                              << 0x00000020U) | (QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))
                                                                  ? 
                                                                 (((- (IData)(
                                                                              (1U 
                                                                               & (vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_a 
                                                                                >> 0x0000000fU)))) 
                                                                   << 0x00000010U) 
                                                                  | (0x0000ffffU 
                                                                     & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_a))
                                                                  : 
                                                                 (((- (IData)(
                                                                              (1U 
                                                                               & (vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_a 
                                                                                >> 7U)))) 
                                                                   << 8U) 
                                                                  | (0x000000ffU 
                                                                     & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_a)))))));
    __Vtemp_6[3U] = (IData)(((((QData)((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_out)) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 ((1U 
                                                                   & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))
                                                                   ? 
                                                                  (((- (IData)(
                                                                               (1U 
                                                                                & (vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_a 
                                                                                >> 0x0000000fU)))) 
                                                                    << 0x00000010U) 
                                                                   | (0x0000ffffU 
                                                                      & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_a))
                                                                   : 
                                                                  (((- (IData)(
                                                                               (1U 
                                                                                & (vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_a 
                                                                                >> 7U)))) 
                                                                    << 8U) 
                                                                   | (0x000000ffU 
                                                                      & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_a)))))) 
                             >> 0x00000020U));
    bufp->fullWData(oldp+353,(__Vtemp_6),128);
    bufp->fullBit(oldp+357,((1U & ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel) 
                                   >> 1U))));
    bufp->fullBit(oldp+358,((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))));
    bufp->fullCData(oldp+359,((0x0000001fU & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)),5);
    __Vtemp_9[0U] = vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_0;
    __Vtemp_9[1U] = vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_3;
    __Vtemp_9[2U] = ((4U & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)
                      ? ((((- (IData)((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT__set_1))) 
                           | (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_3 
                              & (- (IData)((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel)))))) 
                          << 0x0000001cU) | (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_3 
                                             >> 4U))
                      : vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_3);
    __Vtemp_9[3U] = (IData)((((QData)((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_9)) 
                              << 0x00000020U) | (QData)((IData)(
                                                                ((8U 
                                                                  & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)
                                                                  ? 
                                                                 ((((- (IData)((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT__set_1))) 
                                                                    | (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_10 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel)))))) 
                                                                   << 0x00000018U) 
                                                                  | (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_10 
                                                                     >> 8U))
                                                                  : vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_10)))));
    __Vtemp_9[4U] = (IData)(((((QData)((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_9)) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 ((8U 
                                                                   & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)
                                                                   ? 
                                                                  ((((- (IData)((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT__set_1))) 
                                                                     | (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_10 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel)))))) 
                                                                    << 0x00000018U) 
                                                                   | (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_10 
                                                                      >> 8U))
                                                                   : vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_10)))) 
                             >> 0x00000020U));
    bufp->fullWData(oldp+360,(__Vtemp_9),160);
    __Vtemp_12[0U] = vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_13;
    __Vtemp_12[1U] = vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_15;
    __Vtemp_12[2U] = ((4U & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)
                       ? ((vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_15 
                           << 4U) | (0x0000000fU & 
                                     ((vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_15 
                                       >> 0x0000001cU) 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel)))))))
                       : vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_15);
    __Vtemp_12[3U] = (IData)((((QData)((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_16)) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 ((8U 
                                                                   & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)
                                                                   ? 
                                                                  ((vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_17 
                                                                    << 8U) 
                                                                   | (0x000000ffU 
                                                                      & ((vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_17 
                                                                          >> 0x00000018U) 
                                                                         & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel)))))))
                                                                   : vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_17)))));
    __Vtemp_12[4U] = (IData)(((((QData)((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_16)) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((8U 
                                                                    & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)
                                                                    ? 
                                                                   ((vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_17 
                                                                     << 8U) 
                                                                    | (0x000000ffU 
                                                                       & ((vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_17 
                                                                           >> 0x00000018U) 
                                                                          & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel)))))))
                                                                    : vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_17)))) 
                              >> 0x00000020U));
    bufp->fullWData(oldp+365,(__Vtemp_12),160);
    bufp->fullBit(oldp+370,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT__set_1));
    bufp->fullBit(oldp+371,((((~ ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel) 
                                  >> 3U)) & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alucin)) 
                             | (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_subtr))));
    bufp->fullIData(oldp+372,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1__DOT__b_op),32);
    bufp->fullBit(oldp+373,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__d_rs1_dh));
    bufp->fullBit(oldp+374,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs1_dh));
    bufp->fullBit(oldp+375,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs2_dh));
    bufp->fullBit(oldp+376,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__stall_d));
    bufp->fullBit(oldp+377,(((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__d_rs1_dh) 
                             & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_0))));
    bufp->fullBit(oldp+378,(((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs1_dh) 
                             & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_1))));
    bufp->fullBit(oldp+379,(((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs2_dh) 
                             & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_3))));
    bufp->fullBit(oldp+380,(((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs1_dh) 
                             & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_2))));
    bufp->fullBit(oldp+381,(((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs2_dh) 
                             & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_4))));
    bufp->fullBit(oldp+382,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__prev_stallc));
    bufp->fullIData(oldp+383,(((((0x0000ff00U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                                 << 8U)) 
                                 | (0x000000ffU & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa)) 
                                << 0x00000010U) | (
                                                   (0x0000ff00U 
                                                    & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                                       << 8U)) 
                                                   | (0x000000ffU 
                                                      & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa)))),32);
    bufp->fullIData(oldp+384,(((((0x0000ff00U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                                 << 8U)) 
                                 | (0x000000ffU & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob)) 
                                << 0x00000010U) | (
                                                   (0x0000ff00U 
                                                    & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                                       << 8U)) 
                                                   | (0x000000ffU 
                                                      & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob)))),32);
    __Vtemp_13[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa)) 
                               << 0x00000012U) | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa))));
    __Vtemp_13[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa)) 
                                 << 0x00000012U) | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa)))) 
                       << 4U) | (IData)(((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa)) 
                                           << 0x00000012U) 
                                          | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa))) 
                                         >> 0x00000020U)));
    __Vtemp_13[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa)) 
                                 << 0x00000012U) | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa)))) 
                       >> 0x0000001cU) | ((IData)((
                                                   (((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa)) 
                                                     << 0x00000012U) 
                                                    | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa))) 
                                                   >> 0x00000020U)) 
                                          << 4U));
    bufp->fullWData(oldp+385,(__Vtemp_13),72);
    __Vtemp_14[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob)) 
                               << 0x00000012U) | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob))));
    __Vtemp_14[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob)) 
                                 << 0x00000012U) | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob)))) 
                       << 4U) | (IData)(((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob)) 
                                           << 0x00000012U) 
                                          | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob))) 
                                         >> 0x00000020U)));
    __Vtemp_14[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob)) 
                                 << 0x00000012U) | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob)))) 
                       >> 0x0000001cU) | ((IData)((
                                                   (((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob)) 
                                                     << 0x00000012U) 
                                                    | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob))) 
                                                   >> 0x00000020U)) 
                                          << 4U));
    bufp->fullWData(oldp+388,(__Vtemp_14),72);
    bufp->fullBit(oldp+391,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa)));
    bufp->fullBit(oldp+392,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 1U))));
    bufp->fullBit(oldp+393,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 2U))));
    bufp->fullBit(oldp+394,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 3U))));
    bufp->fullBit(oldp+395,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 4U))));
    bufp->fullBit(oldp+396,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 5U))));
    bufp->fullBit(oldp+397,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 6U))));
    bufp->fullBit(oldp+398,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 7U))));
    bufp->fullBit(oldp+399,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 8U))));
    bufp->fullBit(oldp+400,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 9U))));
    bufp->fullBit(oldp+401,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000aU))));
    bufp->fullBit(oldp+402,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000bU))));
    bufp->fullBit(oldp+403,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000cU))));
    bufp->fullBit(oldp+404,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000dU))));
    bufp->fullBit(oldp+405,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000eU))));
    bufp->fullBit(oldp+406,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000fU))));
    bufp->fullBit(oldp+407,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 0x00000010U))));
    bufp->fullBit(oldp+408,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 0x00000011U))));
    bufp->fullBit(oldp+409,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob)));
    bufp->fullBit(oldp+410,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 1U))));
    bufp->fullBit(oldp+411,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 2U))));
    bufp->fullBit(oldp+412,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 3U))));
    bufp->fullBit(oldp+413,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 4U))));
    bufp->fullBit(oldp+414,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 5U))));
    bufp->fullBit(oldp+415,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 6U))));
    bufp->fullBit(oldp+416,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 7U))));
    bufp->fullBit(oldp+417,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 8U))));
    bufp->fullBit(oldp+418,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 9U))));
    bufp->fullBit(oldp+419,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000aU))));
    bufp->fullBit(oldp+420,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000bU))));
    bufp->fullBit(oldp+421,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000cU))));
    bufp->fullBit(oldp+422,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000dU))));
    bufp->fullBit(oldp+423,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000eU))));
    bufp->fullBit(oldp+424,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000fU))));
    bufp->fullBit(oldp+425,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 0x00000010U))));
    bufp->fullBit(oldp+426,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 0x00000011U))));
    bufp->fullIData(oldp+427,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa),18);
    bufp->fullIData(oldp+428,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob),18);
    bufp->fullBit(oldp+429,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa)));
    bufp->fullBit(oldp+430,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 1U))));
    bufp->fullBit(oldp+431,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 2U))));
    bufp->fullBit(oldp+432,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 3U))));
    bufp->fullBit(oldp+433,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 4U))));
    bufp->fullBit(oldp+434,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 5U))));
    bufp->fullBit(oldp+435,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 6U))));
    bufp->fullBit(oldp+436,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 7U))));
    bufp->fullBit(oldp+437,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 8U))));
    bufp->fullBit(oldp+438,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 9U))));
    bufp->fullBit(oldp+439,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000aU))));
    bufp->fullBit(oldp+440,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000bU))));
    bufp->fullBit(oldp+441,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000cU))));
    bufp->fullBit(oldp+442,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000dU))));
    bufp->fullBit(oldp+443,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000eU))));
    bufp->fullBit(oldp+444,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000fU))));
    bufp->fullBit(oldp+445,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 0x00000010U))));
    bufp->fullBit(oldp+446,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 0x00000011U))));
    bufp->fullBit(oldp+447,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob)));
    bufp->fullBit(oldp+448,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 1U))));
    bufp->fullBit(oldp+449,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 2U))));
    bufp->fullBit(oldp+450,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 3U))));
    bufp->fullBit(oldp+451,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 4U))));
    bufp->fullBit(oldp+452,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 5U))));
    bufp->fullBit(oldp+453,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 6U))));
    bufp->fullBit(oldp+454,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 7U))));
    bufp->fullBit(oldp+455,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 8U))));
    bufp->fullBit(oldp+456,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 9U))));
    bufp->fullBit(oldp+457,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000aU))));
    bufp->fullBit(oldp+458,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000bU))));
    bufp->fullBit(oldp+459,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000cU))));
    bufp->fullBit(oldp+460,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000dU))));
    bufp->fullBit(oldp+461,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000eU))));
    bufp->fullBit(oldp+462,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000fU))));
    bufp->fullBit(oldp+463,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 0x00000010U))));
    bufp->fullBit(oldp+464,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 0x00000011U))));
    bufp->fullIData(oldp+465,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa),18);
    bufp->fullIData(oldp+466,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob),18);
    bufp->fullBit(oldp+467,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa)));
    bufp->fullBit(oldp+468,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 1U))));
    bufp->fullBit(oldp+469,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 2U))));
    bufp->fullBit(oldp+470,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 3U))));
    bufp->fullBit(oldp+471,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 4U))));
    bufp->fullBit(oldp+472,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 5U))));
    bufp->fullBit(oldp+473,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 6U))));
    bufp->fullBit(oldp+474,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 7U))));
    bufp->fullBit(oldp+475,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 8U))));
    bufp->fullBit(oldp+476,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 9U))));
    bufp->fullBit(oldp+477,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000aU))));
    bufp->fullBit(oldp+478,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000bU))));
    bufp->fullBit(oldp+479,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000cU))));
    bufp->fullBit(oldp+480,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000dU))));
    bufp->fullBit(oldp+481,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000eU))));
    bufp->fullBit(oldp+482,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000fU))));
    bufp->fullBit(oldp+483,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 0x00000010U))));
    bufp->fullBit(oldp+484,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 0x00000011U))));
    bufp->fullBit(oldp+485,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob)));
    bufp->fullBit(oldp+486,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 1U))));
    bufp->fullBit(oldp+487,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 2U))));
    bufp->fullBit(oldp+488,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 3U))));
    bufp->fullBit(oldp+489,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 4U))));
    bufp->fullBit(oldp+490,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 5U))));
    bufp->fullBit(oldp+491,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 6U))));
    bufp->fullBit(oldp+492,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 7U))));
    bufp->fullBit(oldp+493,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 8U))));
    bufp->fullBit(oldp+494,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 9U))));
    bufp->fullBit(oldp+495,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000aU))));
    bufp->fullBit(oldp+496,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000bU))));
    bufp->fullBit(oldp+497,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000cU))));
    bufp->fullBit(oldp+498,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000dU))));
    bufp->fullBit(oldp+499,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000eU))));
    bufp->fullBit(oldp+500,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000fU))));
    bufp->fullBit(oldp+501,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 0x00000010U))));
    bufp->fullBit(oldp+502,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 0x00000011U))));
    bufp->fullIData(oldp+503,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa),18);
    bufp->fullIData(oldp+504,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob),18);
    bufp->fullBit(oldp+505,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa)));
    bufp->fullBit(oldp+506,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 1U))));
    bufp->fullBit(oldp+507,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 2U))));
    bufp->fullBit(oldp+508,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 3U))));
    bufp->fullBit(oldp+509,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 4U))));
    bufp->fullBit(oldp+510,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 5U))));
    bufp->fullBit(oldp+511,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 6U))));
    bufp->fullBit(oldp+512,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 7U))));
    bufp->fullBit(oldp+513,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 8U))));
    bufp->fullBit(oldp+514,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 9U))));
    bufp->fullBit(oldp+515,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000aU))));
    bufp->fullBit(oldp+516,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000bU))));
    bufp->fullBit(oldp+517,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000cU))));
    bufp->fullBit(oldp+518,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000dU))));
    bufp->fullBit(oldp+519,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000eU))));
    bufp->fullBit(oldp+520,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000fU))));
    bufp->fullBit(oldp+521,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 0x00000010U))));
    bufp->fullBit(oldp+522,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 0x00000011U))));
    bufp->fullBit(oldp+523,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob)));
    bufp->fullBit(oldp+524,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 1U))));
    bufp->fullBit(oldp+525,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 2U))));
    bufp->fullBit(oldp+526,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 3U))));
    bufp->fullBit(oldp+527,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 4U))));
    bufp->fullBit(oldp+528,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 5U))));
    bufp->fullBit(oldp+529,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 6U))));
    bufp->fullBit(oldp+530,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 7U))));
    bufp->fullBit(oldp+531,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 8U))));
    bufp->fullBit(oldp+532,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 9U))));
    bufp->fullBit(oldp+533,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000aU))));
    bufp->fullBit(oldp+534,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000bU))));
    bufp->fullBit(oldp+535,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000cU))));
    bufp->fullBit(oldp+536,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000dU))));
    bufp->fullBit(oldp+537,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000eU))));
    bufp->fullBit(oldp+538,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000fU))));
    bufp->fullBit(oldp+539,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 0x00000010U))));
    bufp->fullBit(oldp+540,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 0x00000011U))));
    bufp->fullIData(oldp+541,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa),18);
    bufp->fullIData(oldp+542,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob),18);
    bufp->fullIData(oldp+543,(((((0x0000ff00U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                                 << 8U)) 
                                 | (0x000000ffU & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa)) 
                                << 0x00000010U) | (
                                                   (0x0000ff00U 
                                                    & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                                       << 8U)) 
                                                   | (0x000000ffU 
                                                      & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa)))),32);
    bufp->fullIData(oldp+544,(((((0x0000ff00U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                                 << 8U)) 
                                 | (0x000000ffU & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob)) 
                                << 0x00000010U) | (
                                                   (0x0000ff00U 
                                                    & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                                       << 8U)) 
                                                   | (0x000000ffU 
                                                      & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob)))),32);
    __Vtemp_15[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa)) 
                               << 0x00000012U) | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa))));
    __Vtemp_15[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa)) 
                                 << 0x00000012U) | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa)))) 
                       << 4U) | (IData)(((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa)) 
                                           << 0x00000012U) 
                                          | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa))) 
                                         >> 0x00000020U)));
    __Vtemp_15[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa)) 
                                 << 0x00000012U) | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa)))) 
                       >> 0x0000001cU) | ((IData)((
                                                   (((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa)) 
                                                     << 0x00000012U) 
                                                    | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa))) 
                                                   >> 0x00000020U)) 
                                          << 4U));
    bufp->fullWData(oldp+545,(__Vtemp_15),72);
    __Vtemp_16[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob)) 
                               << 0x00000012U) | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob))));
    __Vtemp_16[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob)) 
                                 << 0x00000012U) | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob)))) 
                       << 4U) | (IData)(((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob)) 
                                           << 0x00000012U) 
                                          | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob))) 
                                         >> 0x00000020U)));
    __Vtemp_16[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob)) 
                                 << 0x00000012U) | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob)))) 
                       >> 0x0000001cU) | ((IData)((
                                                   (((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob)) 
                                                     << 0x00000012U) 
                                                    | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob))) 
                                                   >> 0x00000020U)) 
                                          << 4U));
    bufp->fullWData(oldp+548,(__Vtemp_16),72);
    bufp->fullBit(oldp+551,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa)));
    bufp->fullBit(oldp+552,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 1U))));
    bufp->fullBit(oldp+553,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 2U))));
    bufp->fullBit(oldp+554,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 3U))));
    bufp->fullBit(oldp+555,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 4U))));
    bufp->fullBit(oldp+556,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 5U))));
    bufp->fullBit(oldp+557,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 6U))));
    bufp->fullBit(oldp+558,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 7U))));
    bufp->fullBit(oldp+559,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 8U))));
    bufp->fullBit(oldp+560,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 9U))));
    bufp->fullBit(oldp+561,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000aU))));
    bufp->fullBit(oldp+562,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000bU))));
    bufp->fullBit(oldp+563,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000cU))));
    bufp->fullBit(oldp+564,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000dU))));
    bufp->fullBit(oldp+565,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000eU))));
    bufp->fullBit(oldp+566,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000fU))));
    bufp->fullBit(oldp+567,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 0x00000010U))));
    bufp->fullBit(oldp+568,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                   >> 0x00000011U))));
    bufp->fullBit(oldp+569,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob)));
    bufp->fullBit(oldp+570,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 1U))));
    bufp->fullBit(oldp+571,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 2U))));
    bufp->fullBit(oldp+572,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 3U))));
    bufp->fullBit(oldp+573,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 4U))));
    bufp->fullBit(oldp+574,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 5U))));
    bufp->fullBit(oldp+575,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 6U))));
    bufp->fullBit(oldp+576,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 7U))));
    bufp->fullBit(oldp+577,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 8U))));
    bufp->fullBit(oldp+578,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 9U))));
    bufp->fullBit(oldp+579,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000aU))));
    bufp->fullBit(oldp+580,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000bU))));
    bufp->fullBit(oldp+581,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000cU))));
    bufp->fullBit(oldp+582,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000dU))));
    bufp->fullBit(oldp+583,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000eU))));
    bufp->fullBit(oldp+584,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000fU))));
    bufp->fullBit(oldp+585,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 0x00000010U))));
    bufp->fullBit(oldp+586,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                   >> 0x00000011U))));
    bufp->fullIData(oldp+587,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa),18);
    bufp->fullIData(oldp+588,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob),18);
    bufp->fullBit(oldp+589,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa)));
    bufp->fullBit(oldp+590,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 1U))));
    bufp->fullBit(oldp+591,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 2U))));
    bufp->fullBit(oldp+592,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 3U))));
    bufp->fullBit(oldp+593,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 4U))));
    bufp->fullBit(oldp+594,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 5U))));
    bufp->fullBit(oldp+595,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 6U))));
    bufp->fullBit(oldp+596,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 7U))));
    bufp->fullBit(oldp+597,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 8U))));
    bufp->fullBit(oldp+598,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 9U))));
    bufp->fullBit(oldp+599,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000aU))));
    bufp->fullBit(oldp+600,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000bU))));
    bufp->fullBit(oldp+601,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000cU))));
    bufp->fullBit(oldp+602,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000dU))));
    bufp->fullBit(oldp+603,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000eU))));
    bufp->fullBit(oldp+604,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000fU))));
    bufp->fullBit(oldp+605,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 0x00000010U))));
    bufp->fullBit(oldp+606,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                   >> 0x00000011U))));
    bufp->fullBit(oldp+607,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob)));
    bufp->fullBit(oldp+608,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 1U))));
    bufp->fullBit(oldp+609,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 2U))));
    bufp->fullBit(oldp+610,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 3U))));
    bufp->fullBit(oldp+611,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 4U))));
    bufp->fullBit(oldp+612,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 5U))));
    bufp->fullBit(oldp+613,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 6U))));
    bufp->fullBit(oldp+614,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 7U))));
    bufp->fullBit(oldp+615,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 8U))));
    bufp->fullBit(oldp+616,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 9U))));
    bufp->fullBit(oldp+617,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000aU))));
    bufp->fullBit(oldp+618,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000bU))));
    bufp->fullBit(oldp+619,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000cU))));
    bufp->fullBit(oldp+620,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000dU))));
    bufp->fullBit(oldp+621,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000eU))));
    bufp->fullBit(oldp+622,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000fU))));
    bufp->fullBit(oldp+623,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 0x00000010U))));
    bufp->fullBit(oldp+624,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                   >> 0x00000011U))));
    bufp->fullIData(oldp+625,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa),18);
    bufp->fullIData(oldp+626,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob),18);
    bufp->fullBit(oldp+627,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa)));
    bufp->fullBit(oldp+628,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 1U))));
    bufp->fullBit(oldp+629,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 2U))));
    bufp->fullBit(oldp+630,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 3U))));
    bufp->fullBit(oldp+631,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 4U))));
    bufp->fullBit(oldp+632,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 5U))));
    bufp->fullBit(oldp+633,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 6U))));
    bufp->fullBit(oldp+634,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 7U))));
    bufp->fullBit(oldp+635,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 8U))));
    bufp->fullBit(oldp+636,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 9U))));
    bufp->fullBit(oldp+637,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000aU))));
    bufp->fullBit(oldp+638,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000bU))));
    bufp->fullBit(oldp+639,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000cU))));
    bufp->fullBit(oldp+640,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000dU))));
    bufp->fullBit(oldp+641,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000eU))));
    bufp->fullBit(oldp+642,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000fU))));
    bufp->fullBit(oldp+643,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 0x00000010U))));
    bufp->fullBit(oldp+644,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                   >> 0x00000011U))));
    bufp->fullBit(oldp+645,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob)));
    bufp->fullBit(oldp+646,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 1U))));
    bufp->fullBit(oldp+647,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 2U))));
    bufp->fullBit(oldp+648,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 3U))));
    bufp->fullBit(oldp+649,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 4U))));
    bufp->fullBit(oldp+650,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 5U))));
    bufp->fullBit(oldp+651,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 6U))));
    bufp->fullBit(oldp+652,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 7U))));
    bufp->fullBit(oldp+653,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 8U))));
    bufp->fullBit(oldp+654,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 9U))));
    bufp->fullBit(oldp+655,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000aU))));
    bufp->fullBit(oldp+656,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000bU))));
    bufp->fullBit(oldp+657,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000cU))));
    bufp->fullBit(oldp+658,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000dU))));
    bufp->fullBit(oldp+659,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000eU))));
    bufp->fullBit(oldp+660,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000fU))));
    bufp->fullBit(oldp+661,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 0x00000010U))));
    bufp->fullBit(oldp+662,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                   >> 0x00000011U))));
    bufp->fullIData(oldp+663,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa),18);
    bufp->fullIData(oldp+664,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob),18);
    bufp->fullBit(oldp+665,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa)));
    bufp->fullBit(oldp+666,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 1U))));
    bufp->fullBit(oldp+667,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 2U))));
    bufp->fullBit(oldp+668,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 3U))));
    bufp->fullBit(oldp+669,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 4U))));
    bufp->fullBit(oldp+670,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 5U))));
    bufp->fullBit(oldp+671,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 6U))));
    bufp->fullBit(oldp+672,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 7U))));
    bufp->fullBit(oldp+673,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 8U))));
    bufp->fullBit(oldp+674,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 9U))));
    bufp->fullBit(oldp+675,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000aU))));
    bufp->fullBit(oldp+676,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000bU))));
    bufp->fullBit(oldp+677,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000cU))));
    bufp->fullBit(oldp+678,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000dU))));
    bufp->fullBit(oldp+679,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000eU))));
    bufp->fullBit(oldp+680,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 0x0000000fU))));
    bufp->fullBit(oldp+681,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 0x00000010U))));
    bufp->fullBit(oldp+682,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                   >> 0x00000011U))));
    bufp->fullBit(oldp+683,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob)));
    bufp->fullBit(oldp+684,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 1U))));
    bufp->fullBit(oldp+685,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 2U))));
    bufp->fullBit(oldp+686,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 3U))));
    bufp->fullBit(oldp+687,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 4U))));
    bufp->fullBit(oldp+688,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 5U))));
    bufp->fullBit(oldp+689,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 6U))));
    bufp->fullBit(oldp+690,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 7U))));
    bufp->fullBit(oldp+691,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 8U))));
    bufp->fullBit(oldp+692,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 9U))));
    bufp->fullBit(oldp+693,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000aU))));
    bufp->fullBit(oldp+694,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000bU))));
    bufp->fullBit(oldp+695,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000cU))));
    bufp->fullBit(oldp+696,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000dU))));
    bufp->fullBit(oldp+697,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000eU))));
    bufp->fullBit(oldp+698,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 0x0000000fU))));
    bufp->fullBit(oldp+699,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 0x00000010U))));
    bufp->fullBit(oldp+700,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                   >> 0x00000011U))));
    bufp->fullIData(oldp+701,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa),18);
    bufp->fullIData(oldp+702,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob),18);
    bufp->fullIData(oldp+703,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[31]),32);
    bufp->fullIData(oldp+704,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[30]),32);
    bufp->fullIData(oldp+705,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[29]),32);
    bufp->fullIData(oldp+706,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[28]),32);
    bufp->fullIData(oldp+707,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[27]),32);
    bufp->fullIData(oldp+708,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[26]),32);
    bufp->fullIData(oldp+709,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[25]),32);
    bufp->fullIData(oldp+710,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[24]),32);
    bufp->fullIData(oldp+711,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[23]),32);
    bufp->fullIData(oldp+712,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[22]),32);
    bufp->fullIData(oldp+713,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[21]),32);
    bufp->fullIData(oldp+714,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[20]),32);
    bufp->fullIData(oldp+715,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[19]),32);
    bufp->fullIData(oldp+716,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[18]),32);
    bufp->fullIData(oldp+717,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[17]),32);
    bufp->fullIData(oldp+718,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[16]),32);
    bufp->fullIData(oldp+719,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[15]),32);
    bufp->fullIData(oldp+720,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[14]),32);
    bufp->fullIData(oldp+721,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[13]),32);
    bufp->fullIData(oldp+722,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[12]),32);
    bufp->fullIData(oldp+723,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[11]),32);
    bufp->fullIData(oldp+724,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[10]),32);
    bufp->fullIData(oldp+725,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[9]),32);
    bufp->fullIData(oldp+726,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[8]),32);
    bufp->fullIData(oldp+727,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[7]),32);
    bufp->fullIData(oldp+728,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[6]),32);
    bufp->fullIData(oldp+729,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[5]),32);
    bufp->fullIData(oldp+730,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[4]),32);
    bufp->fullIData(oldp+731,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[3]),32);
    bufp->fullIData(oldp+732,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[2]),32);
    bufp->fullIData(oldp+733,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[1]),32);
    bufp->fullIData(oldp+734,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[0]),32);
    bufp->fullIData(oldp+735,(vlSelfRef.main__DOT__u3_instr_ad),19);
    bufp->fullIData(oldp+736,((0x0007ffffU & vlSelfRef.main__DOT__u4__DOT__pc_in)),19);
    bufp->fullIData(oldp+737,(vlSelfRef.main__DOT__rf_rd1),32);
    bufp->fullBit(oldp+738,(vlSelfRef.main__DOT__u3__DOT__ioverlap));
    bufp->fullQData(oldp+739,(vlSelfRef.main__DOT__u3__DOT__blk_iad),52);
    bufp->fullCData(oldp+741,(vlSelfRef.main__DOT__u3__DOT__blk_iofst),8);
    bufp->fullCData(oldp+742,((0x0000003fU & ((IData)(1U) 
                                              + (vlSelfRef.main__DOT__u3_instr_ad 
                                                 >> 0x0000000dU)))),6);
    bufp->fullQData(oldp+743,(vlSelfRef.main__DOT__u3__DOT__inblk_decoder),64);
    bufp->fullIData(oldp+745,(vlSelfRef.main__DOT__u4__DOT__pc_in),32);
    bufp->fullIData(oldp+746,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__transfer),32);
    bufp->fullIData(oldp+747,((0xfffffffeU & vlSelfRef.main__DOT__u4__DOT__pc_in)),32);
    bufp->fullQData(oldp+748,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad),52);
    bufp->fullQData(oldp+750,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__ebr_adb),56);
    bufp->fullBit(oldp+752,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 2U)))));
    bufp->fullBit(oldp+753,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 3U)))));
    bufp->fullBit(oldp+754,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 4U)))));
    bufp->fullBit(oldp+755,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 5U)))));
    bufp->fullBit(oldp+756,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 6U)))));
    bufp->fullBit(oldp+757,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 7U)))));
    bufp->fullBit(oldp+758,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 8U)))));
    bufp->fullBit(oldp+759,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 9U)))));
    bufp->fullBit(oldp+760,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x0000000aU)))));
    bufp->fullBit(oldp+761,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x0000000bU)))));
    bufp->fullBit(oldp+762,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x0000000cU)))));
    bufp->fullSData(oldp+763,((0x00003ff8U & ((IData)(
                                                      (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                                       >> 2U)) 
                                              << 3U))),14);
    bufp->fullBit(oldp+764,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x0000000fU)))));
    bufp->fullBit(oldp+765,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x00000010U)))));
    bufp->fullBit(oldp+766,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x00000011U)))));
    bufp->fullBit(oldp+767,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x00000012U)))));
    bufp->fullBit(oldp+768,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x00000013U)))));
    bufp->fullBit(oldp+769,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x00000014U)))));
    bufp->fullBit(oldp+770,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x00000015U)))));
    bufp->fullBit(oldp+771,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x00000016U)))));
    bufp->fullBit(oldp+772,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x00000017U)))));
    bufp->fullBit(oldp+773,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x00000018U)))));
    bufp->fullBit(oldp+774,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x00000019U)))));
    bufp->fullSData(oldp+775,((0x00003ff8U & ((IData)(
                                                      (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                                       >> 0x0000000fU)) 
                                              << 3U))),14);
    bufp->fullBit(oldp+776,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x0000001cU)))));
    bufp->fullBit(oldp+777,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x0000001dU)))));
    bufp->fullBit(oldp+778,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x0000001eU)))));
    bufp->fullBit(oldp+779,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x0000001fU)))));
    bufp->fullBit(oldp+780,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x00000020U)))));
    bufp->fullBit(oldp+781,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x00000021U)))));
    bufp->fullBit(oldp+782,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x00000022U)))));
    bufp->fullBit(oldp+783,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x00000023U)))));
    bufp->fullBit(oldp+784,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x00000024U)))));
    bufp->fullBit(oldp+785,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x00000025U)))));
    bufp->fullBit(oldp+786,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x00000026U)))));
    bufp->fullSData(oldp+787,((0x00003ff8U & ((IData)(
                                                      (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                                       >> 0x0000001cU)) 
                                              << 3U))),14);
    bufp->fullBit(oldp+788,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x00000029U)))));
    bufp->fullBit(oldp+789,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x0000002aU)))));
    bufp->fullBit(oldp+790,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x0000002bU)))));
    bufp->fullBit(oldp+791,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x0000002cU)))));
    bufp->fullBit(oldp+792,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x0000002dU)))));
    bufp->fullBit(oldp+793,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x0000002eU)))));
    bufp->fullBit(oldp+794,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x0000002fU)))));
    bufp->fullBit(oldp+795,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x00000030U)))));
    bufp->fullBit(oldp+796,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x00000031U)))));
    bufp->fullBit(oldp+797,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x00000032U)))));
    bufp->fullBit(oldp+798,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                           >> 0x00000033U)))));
    bufp->fullSData(oldp+799,((0x00003fffU & (IData)(
                                                     (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__ebr_adb 
                                                      >> 0x0000002aU)))),14);
    bufp->fullQData(oldp+800,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad),52);
    bufp->fullQData(oldp+802,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__ebr_adb),56);
    bufp->fullBit(oldp+804,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 2U)))));
    bufp->fullBit(oldp+805,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 3U)))));
    bufp->fullBit(oldp+806,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 4U)))));
    bufp->fullBit(oldp+807,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 5U)))));
    bufp->fullBit(oldp+808,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 6U)))));
    bufp->fullBit(oldp+809,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 7U)))));
    bufp->fullBit(oldp+810,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 8U)))));
    bufp->fullBit(oldp+811,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 9U)))));
    bufp->fullBit(oldp+812,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x0000000aU)))));
    bufp->fullBit(oldp+813,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x0000000bU)))));
    bufp->fullBit(oldp+814,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x0000000cU)))));
    bufp->fullSData(oldp+815,((0x00003ff8U & ((IData)(
                                                      (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                                       >> 2U)) 
                                              << 3U))),14);
    bufp->fullBit(oldp+816,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x0000000fU)))));
    bufp->fullBit(oldp+817,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x00000010U)))));
    bufp->fullBit(oldp+818,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x00000011U)))));
    bufp->fullBit(oldp+819,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x00000012U)))));
    bufp->fullBit(oldp+820,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x00000013U)))));
    bufp->fullBit(oldp+821,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x00000014U)))));
    bufp->fullBit(oldp+822,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x00000015U)))));
    bufp->fullBit(oldp+823,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x00000016U)))));
    bufp->fullBit(oldp+824,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x00000017U)))));
    bufp->fullBit(oldp+825,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x00000018U)))));
    bufp->fullBit(oldp+826,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x00000019U)))));
    bufp->fullSData(oldp+827,((0x00003ff8U & ((IData)(
                                                      (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                                       >> 0x0000000fU)) 
                                              << 3U))),14);
    bufp->fullBit(oldp+828,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x0000001cU)))));
    bufp->fullBit(oldp+829,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x0000001dU)))));
    bufp->fullBit(oldp+830,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x0000001eU)))));
    bufp->fullBit(oldp+831,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x0000001fU)))));
    bufp->fullBit(oldp+832,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x00000020U)))));
    bufp->fullBit(oldp+833,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x00000021U)))));
    bufp->fullBit(oldp+834,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x00000022U)))));
    bufp->fullBit(oldp+835,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x00000023U)))));
    bufp->fullBit(oldp+836,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x00000024U)))));
    bufp->fullBit(oldp+837,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x00000025U)))));
    bufp->fullBit(oldp+838,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x00000026U)))));
    bufp->fullSData(oldp+839,((0x00003ff8U & ((IData)(
                                                      (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                                       >> 0x0000001cU)) 
                                              << 3U))),14);
    bufp->fullBit(oldp+840,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x00000029U)))));
    bufp->fullBit(oldp+841,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x0000002aU)))));
    bufp->fullBit(oldp+842,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x0000002bU)))));
    bufp->fullBit(oldp+843,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x0000002cU)))));
    bufp->fullBit(oldp+844,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x0000002dU)))));
    bufp->fullBit(oldp+845,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x0000002eU)))));
    bufp->fullBit(oldp+846,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x0000002fU)))));
    bufp->fullBit(oldp+847,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x00000030U)))));
    bufp->fullBit(oldp+848,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x00000031U)))));
    bufp->fullBit(oldp+849,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x00000032U)))));
    bufp->fullBit(oldp+850,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                           >> 0x00000033U)))));
    bufp->fullSData(oldp+851,((0x00003fffU & (IData)(
                                                     (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__ebr_adb 
                                                      >> 0x0000002aU)))),14);
    bufp->fullBit(oldp+852,(vlSelfRef.clk));
    bufp->fullBit(oldp+853,(vlSelfRef.we));
    bufp->fullBit(oldp+854,(vlSelfRef.toggle));
    bufp->fullCData(oldp+855,(vlSelfRef.bsel),4);
    bufp->fullIData(oldp+856,(vlSelfRef.ad),19);
    bufp->fullIData(oldp+857,(vlSelfRef.wd),32);
    bufp->fullBit(oldp+858,(vlSelfRef.cpu_cede));
    bufp->fullIData(oldp+859,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x
                              [(0x0000001fU & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                               >> 0x00000014U))]),32);
    bufp->fullIData(oldp+860,(((2U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__d_mux_rd1_sel))
                                ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__rf_wd
                                : ((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__d_mux_rd1_sel))
                                    ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rfwd
                                    : vlSelfRef.main__DOT__rf_rd1))),32);
}
