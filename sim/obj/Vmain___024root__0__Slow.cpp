// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "Vmain__pch.h"

VL_ATTR_COLD void Vmain___024root___eval_static__TOP(Vmain___024root* vlSelf);
VL_ATTR_COLD void Vmain___024root____Vm_traceActivitySetAll(Vmain___024root* vlSelf);

VL_ATTR_COLD void Vmain___024root___eval_static(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_static\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmain___024root___eval_static__TOP(vlSelf);
    Vmain___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vmain___024root___eval_static__TOP(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_static__TOP\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.main__DOT__state = 0U;
}

VL_ATTR_COLD void Vmain___024root___eval_initial(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_initial\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmain___024root___eval_final(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_final\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmain___024root___eval_phase__stl(Vmain___024root* vlSelf);

VL_ATTR_COLD void Vmain___024root___eval_settle(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_settle\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vmain___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("src/sim/main.v", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vmain___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vmain___024root___eval_triggers_vec__stl(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_triggers_vec__stl\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vmain___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vmain___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vmain___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*0:0*/, 32> Vmain__ConstPool__TABLE_h680b07e8_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vmain__ConstPool__TABLE_h10089114_0;
extern const VlUnpacked<CData/*5:0*/, 32> Vmain__ConstPool__TABLE_ha36e368f_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vmain__ConstPool__TABLE_h6404059c_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vmain__ConstPool__TABLE_hd2d35ee7_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vmain__ConstPool__TABLE_h405619e0_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vmain__ConstPool__TABLE_he624a3bd_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vmain__ConstPool__TABLE_h1d2e9b19_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vmain__ConstPool__TABLE_h1c4f8acd_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vmain__ConstPool__TABLE_heef49184_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vmain__ConstPool__TABLE_h2caef67c_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vmain__ConstPool__TABLE_hbccc22bd_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vmain__ConstPool__TABLE_h542e459e_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vmain__ConstPool__TABLE_h177e513c_0;

VL_ATTR_COLD void Vmain___024root___stl_sequent__TOP__0(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___stl_sequent__TOP__0\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_2;
    main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_2 = 0;
    CData/*3:0*/ main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_11;
    main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_11 = 0;
    IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_12;
    main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_12 = 0;
    CData/*1:0*/ main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_14;
    main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_14 = 0;
    CData/*3:0*/ main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_18;
    main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_18 = 0;
    IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_19;
    main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_19 = 0;
    CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_6;
    main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_6 = 0;
    CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_7;
    main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_7 = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    __VdfgRegularize_h6e95ff9d_0_1 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_10;
    __VdfgRegularize_h6e95ff9d_0_10 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_13;
    __VdfgRegularize_h6e95ff9d_0_13 = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    vlSelfRef.main__DOT__u4__DOT__init = ((~ (IData)(vlSelfRef.main__DOT__u4__DOT__prev_state)) 
                                          & (IData)(vlSelfRef.main__DOT__state));
    vlSelfRef.main__DOT__u4__DOT__u2__DOT__en = ((IData)(vlSelfRef.main__DOT__state) 
                                                 & (IData)(vlSelfRef.main__DOT__u4__DOT__prev_state));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_subtr 
        = ((IData)((0x0dU == (0x0dU & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel)))) 
           | (3U == (3U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))));
    vlSelfRef.main__DOT__u3__DOT__ebr_b0 = (((QData)((IData)(
                                                             ((((0x0000ff00U 
                                                                 & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                                                    << 8U)) 
                                                                | (0x000000ffU 
                                                                   & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob)) 
                                                               << 0x00000010U) 
                                                              | ((0x0000ff00U 
                                                                  & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                                                     << 8U)) 
                                                                 | (0x000000ffU 
                                                                    & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob))))) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(
                                                              ((((0x0000ff00U 
                                                                  & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                                                     << 8U)) 
                                                                 | (0x000000ffU 
                                                                    & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob)) 
                                                                << 0x00000010U) 
                                                               | ((0x0000ff00U 
                                                                   & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                                                      << 8U)) 
                                                                  | (0x000000ffU 
                                                                     & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob))))));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_4 
        = ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rs2) 
           == (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_rd));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_3 
        = ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rs2) 
           == (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rd));
    main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_6 
        = ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__backup_rfwe) 
           & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__prev_stallc));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rfwd = 
        ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_flagset)
          ? ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_flagsel)
              ? (1U & (~ ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_aluflags) 
                          >> 2U))) : (1U & ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_aluflags) 
                                            >> 1U)))
          : ((2U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_wdsel))
              ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_pcnext
              : ((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_wdsel))
                  ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_imm
                  : vlSelfRef.main__DOT__u4__DOT__m_alu)));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_2 
        = ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rs1) 
           == (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_rd));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_1 
        = ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rs1) 
           == (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rd));
    vlSelfRef.main__DOT__u3__DOT__ebr_a0 = (((QData)((IData)(
                                                             ((((0x0000ff00U 
                                                                 & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                                                    << 8U)) 
                                                                | (0x000000ffU 
                                                                   & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa)) 
                                                               << 0x00000010U) 
                                                              | ((0x0000ff00U 
                                                                  & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                                                     << 8U)) 
                                                                 | (0x000000ffU 
                                                                    & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa))))) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(
                                                              ((((0x0000ff00U 
                                                                  & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                                                     << 8U)) 
                                                                 | (0x000000ffU 
                                                                    & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa)) 
                                                                << 0x00000010U) 
                                                               | ((0x0000ff00U 
                                                                   & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                                                      << 8U)) 
                                                                  | (0x000000ffU 
                                                                     & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa))))));
    vlSelfRef.main__DOT__u3__DOT__decoder = 0ULL;
    if (vlSelfRef.main__DOT__state) {
        vlSelfRef.main__DOT__u3_we = vlSelfRef.main__DOT__u4__DOT__m_memwe;
        vlSelfRef.main__DOT__u3_bsel = ((2U & (IData)(vlSelfRef.main__DOT__u4__DOT__m_funct3))
                                         ? 0x0fU : 
                                        ((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__m_funct3))
                                          ? 3U : 1U));
        vlSelfRef.main__DOT__u3_wd = vlSelfRef.main__DOT__u4__DOT__m_rd2;
        vlSelfRef.main__DOT__u3_ad = (0x0007ffffU & vlSelfRef.main__DOT__u4__DOT__m_alu);
    } else {
        vlSelfRef.main__DOT__u3_we = vlSelfRef.we;
        vlSelfRef.main__DOT__u3_bsel = vlSelfRef.bsel;
        vlSelfRef.main__DOT__u3_wd = vlSelfRef.wd;
        vlSelfRef.main__DOT__u3_ad = (0x0007ffffU & vlSelfRef.ad);
    }
    vlSelfRef.main__DOT__u3__DOT__decoder = (vlSelfRef.main__DOT__u3__DOT__decoder 
                                             | ((QData)((IData)(1U)) 
                                                << 
                                                (0x0000003fU 
                                                 & (vlSelfRef.main__DOT__u3_ad 
                                                    >> 0x0dU))));
    if ((0U == (3U & vlSelfRef.main__DOT__u3_ad))) {
        vlSelfRef.main__DOT__u3__DOT__r_bsel = vlSelfRef.main__DOT__u3_bsel;
        vlSelfRef.main__DOT__u3__DOT__n_bsel = vlSelfRef.main__DOT__u3_bsel;
    } else if ((1U == (3U & vlSelfRef.main__DOT__u3_ad))) {
        vlSelfRef.main__DOT__u3__DOT__r_bsel = ((0x0000000eU 
                                                 & ((IData)(vlSelfRef.main__DOT__u3_bsel) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(vlSelfRef.main__DOT__u3_bsel) 
                                                      >> 3U)));
        vlSelfRef.main__DOT__u3__DOT__n_bsel = (1U 
                                                & ((IData)(vlSelfRef.main__DOT__u3_bsel) 
                                                   >> 3U));
    } else if ((2U == (3U & vlSelfRef.main__DOT__u3_ad))) {
        vlSelfRef.main__DOT__u3__DOT__r_bsel = ((0x0000000cU 
                                                 & ((IData)(vlSelfRef.main__DOT__u3_bsel) 
                                                    << 2U)) 
                                                | (3U 
                                                   & ((IData)(vlSelfRef.main__DOT__u3_bsel) 
                                                      >> 2U)));
        vlSelfRef.main__DOT__u3__DOT__n_bsel = (3U 
                                                & ((IData)(vlSelfRef.main__DOT__u3_bsel) 
                                                   >> 2U));
    } else if ((3U == (3U & vlSelfRef.main__DOT__u3_ad))) {
        vlSelfRef.main__DOT__u3__DOT__r_bsel = ((8U 
                                                 & ((IData)(vlSelfRef.main__DOT__u3_bsel) 
                                                    << 3U)) 
                                                | (7U 
                                                   & ((IData)(vlSelfRef.main__DOT__u3_bsel) 
                                                      >> 1U)));
        vlSelfRef.main__DOT__u3__DOT__n_bsel = (7U 
                                                & ((IData)(vlSelfRef.main__DOT__u3_bsel) 
                                                   >> 1U));
    }
    if ((1U & vlSelfRef.main__DOT__u3_ad)) {
        __VdfgRegularize_h6e95ff9d_0_2 = (0x000000ffU 
                                          & (vlSelfRef.main__DOT__u3_wd 
                                             >> 0x00000018U));
        __VdfgRegularize_h6e95ff9d_0_3 = (0x000000ffU 
                                          & vlSelfRef.main__DOT__u3_wd);
        __VdfgRegularize_h6e95ff9d_0_0 = (0x000000ffU 
                                          & (vlSelfRef.main__DOT__u3_wd 
                                             >> 8U));
        __VdfgRegularize_h6e95ff9d_0_1 = (0x000000ffU 
                                          & (vlSelfRef.main__DOT__u3_wd 
                                             >> 0x00000010U));
    } else {
        __VdfgRegularize_h6e95ff9d_0_2 = (0x000000ffU 
                                          & vlSelfRef.main__DOT__u3_wd);
        __VdfgRegularize_h6e95ff9d_0_3 = (0x000000ffU 
                                          & (vlSelfRef.main__DOT__u3_wd 
                                             >> 8U));
        __VdfgRegularize_h6e95ff9d_0_0 = (0x000000ffU 
                                          & (vlSelfRef.main__DOT__u3_wd 
                                             >> 0x00000010U));
        __VdfgRegularize_h6e95ff9d_0_1 = (0x000000ffU 
                                          & (vlSelfRef.main__DOT__u3_wd 
                                             >> 0x00000018U));
    }
    __VdfgRegularize_h6e95ff9d_0_10 = ((2U & (VL_REDXOR_32(
                                                           (3U 
                                                            & vlSelfRef.main__DOT__u3_ad)) 
                                              << 1U)) 
                                       | (1U & vlSelfRef.main__DOT__u3_ad));
    vlSelfRef.main__DOT__u3__DOT__nblk_decoder = 0ULL;
    vlSelfRef.main__DOT__u3__DOT__nblk_decoder = (vlSelfRef.main__DOT__u3__DOT__nblk_decoder 
                                                  | ((QData)((IData)(1U)) 
                                                     << 
                                                     (0x0000003fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (vlSelfRef.main__DOT__u3_ad 
                                                          >> 0x0000000dU)))));
    vlSelfRef.main__DOT__u3__DOT__overlap = (IData)(
                                                    ((0x00001ffcU 
                                                      == 
                                                      (0x00001ffcU 
                                                       & vlSelfRef.main__DOT__u3_ad)) 
                                                     & (0U 
                                                        != 
                                                        (3U 
                                                         & vlSelfRef.main__DOT__u3_ad))));
    vlSelfRef.cpu_cede = ((IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__en) 
                          & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_cede));
    vlSelfRef.main__DOT__u3__DOT__blk_b0 = (IData)(
                                                   (vlSelfRef.main__DOT__u3__DOT__ebr_b0 
                                                    >> 
                                                    (0x0000003fU 
                                                     & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.main__DOT__u3__DOT__p_iblk), 5U))));
    vlSelfRef.main__DOT__u3__DOT__nblk_b0 = (0x00ffffffU 
                                             & (IData)(
                                                       (vlSelfRef.main__DOT__u3__DOT__ebr_b0 
                                                        >> 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.main__DOT__u3__DOT__p_inblk), 5U)))));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs2_dh 
        = ((((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_3) 
             & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rfwe)) 
            | (((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_4) 
                & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_rfwe)) 
               | (((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__backup_rd) 
                   == (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rs2)) 
                  & (IData)(main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_6)))) 
           & (0U != (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rs2)));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs1_dh 
        = ((((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_1) 
             & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rfwe)) 
            | (((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_2) 
                & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_rfwe)) 
               | (((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__backup_rd) 
                   == (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rs1)) 
                  & (IData)(main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_6)))) 
           & (0U != (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rs1)));
    vlSelfRef.main__DOT__u3__DOT__blk_a0 = (IData)(
                                                   (vlSelfRef.main__DOT__u3__DOT__ebr_a0 
                                                    >> 
                                                    (0x0000003fU 
                                                     & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.main__DOT__u3__DOT__p_blk), 5U))));
    vlSelfRef.main__DOT__u3__DOT__nblk_a0 = (0x00ffffffU 
                                             & (IData)(
                                                       (vlSelfRef.main__DOT__u3__DOT__ebr_a0 
                                                        >> 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.main__DOT__u3__DOT__p_nblk), 5U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = ((2U 
                                                 & vlSelfRef.main__DOT__u3_ad)
                                                 ? (IData)(__VdfgRegularize_h6e95ff9d_0_3)
                                                 : (IData)(__VdfgRegularize_h6e95ff9d_0_1));
    vlSelfRef.main__DOT__u3__DOT__overlap_blk_di = 
        ((0x00ff0000U & (vlSelfRef.main__DOT__u3_wd 
                         >> 8U)) | (((IData)(__VdfgRegularize_h6e95ff9d_0_1) 
                                     << 8U) | (0x000000ffU 
                                               & ((2U 
                                                   & vlSelfRef.main__DOT__u3_ad)
                                                   ? (IData)(__VdfgRegularize_h6e95ff9d_0_0)
                                                   : 
                                                  (vlSelfRef.main__DOT__u3_wd 
                                                   >> 0x00000018U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = ((((2U 
                                                   & vlSelfRef.main__DOT__u3_ad)
                                                   ? (IData)(__VdfgRegularize_h6e95ff9d_0_2)
                                                   : (IData)(__VdfgRegularize_h6e95ff9d_0_0)) 
                                                 << 0x00000010U) 
                                                | ((((2U 
                                                      & vlSelfRef.main__DOT__u3_ad)
                                                      ? (IData)(__VdfgRegularize_h6e95ff9d_0_1)
                                                      : (IData)(__VdfgRegularize_h6e95ff9d_0_3)) 
                                                    << 8U) 
                                                   | ((2U 
                                                       & vlSelfRef.main__DOT__u3_ad)
                                                       ? (IData)(__VdfgRegularize_h6e95ff9d_0_0)
                                                       : (IData)(__VdfgRegularize_h6e95ff9d_0_2))));
    vlSelfRef.main__DOT__u3__DOT__blk_ofst = ((((0x0000000cU 
                                                 & ((~ vlSelfRef.main__DOT__u3_ad) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & ((~ 
                                                        VL_REDXOR_32(
                                                                     (3U 
                                                                      & vlSelfRef.main__DOT__u3_ad))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & vlSelfRef.main__DOT__u3_ad))) 
                                               << 4U) 
                                              | ((8U 
                                                  & (vlSelfRef.main__DOT__u3_ad 
                                                     << 2U)) 
                                                 | ((4U 
                                                     & ((~ vlSelfRef.main__DOT__u3_ad) 
                                                        << 2U)) 
                                                    | (IData)(__VdfgRegularize_h6e95ff9d_0_10))));
    vlSelfRef.main__DOT__u3__DOT____VdfgRegularize_h66142285_0_0 
        = ((IData)(vlSelfRef.main__DOT__u3__DOT__nblk_decoder) 
           & (IData)(vlSelfRef.main__DOT__u3__DOT__overlap));
    vlSelfRef.main__DOT__u3__DOT____VdfgRegularize_h66142285_0_1 
        = ((IData)((vlSelfRef.main__DOT__u3__DOT__nblk_decoder 
                    >> 1U)) & (IData)(vlSelfRef.main__DOT__u3__DOT__overlap));
    if ((0U == (IData)(vlSelfRef.main__DOT__u3__DOT__p_iad))) {
        vlSelfRef.main__DOT__u3_instr_rd = vlSelfRef.main__DOT__u3__DOT__blk_b0;
    } else if ((1U == (IData)(vlSelfRef.main__DOT__u3__DOT__p_iad))) {
        vlSelfRef.main__DOT__u3_instr_rd = ((((IData)(vlSelfRef.main__DOT__u3__DOT__p_ioverlap)
                                               ? vlSelfRef.main__DOT__u3__DOT__nblk_b0
                                               : vlSelfRef.main__DOT__u3__DOT__blk_b0) 
                                             << 0x00000018U) 
                                            | (vlSelfRef.main__DOT__u3__DOT__blk_b0 
                                               >> 8U));
    } else if ((2U == (IData)(vlSelfRef.main__DOT__u3__DOT__p_iad))) {
        vlSelfRef.main__DOT__u3_instr_rd = ((((IData)(vlSelfRef.main__DOT__u3__DOT__p_ioverlap)
                                               ? vlSelfRef.main__DOT__u3__DOT__nblk_b0
                                               : vlSelfRef.main__DOT__u3__DOT__blk_b0) 
                                             << 0x00000010U) 
                                            | (vlSelfRef.main__DOT__u3__DOT__blk_b0 
                                               >> 0x00000010U));
    } else if ((3U == (IData)(vlSelfRef.main__DOT__u3__DOT__p_iad))) {
        vlSelfRef.main__DOT__u3_instr_rd = ((((IData)(vlSelfRef.main__DOT__u3__DOT__p_ioverlap)
                                               ? vlSelfRef.main__DOT__u3__DOT__nblk_b0
                                               : vlSelfRef.main__DOT__u3__DOT__blk_b0) 
                                             << 8U) 
                                            | (vlSelfRef.main__DOT__u3__DOT__blk_b0 
                                               >> 0x18U));
    }
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_mux_rd2_sel 
        = (((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs2_dh) 
            & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_3))
            ? 1U : (((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs2_dh) 
                     & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_4))
                     ? 2U : ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs2_dh)
                              ? 3U : 0U)));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_flush 
        = (((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs1_dh) 
            | (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs2_dh)) 
           & (((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_1) 
               | (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_3)) 
              & ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rfwe) 
                 & (3U == (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_wdsel)))));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_mux_rd1_sel 
        = (((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs1_dh) 
            & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_1))
            ? 1U : (((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs1_dh) 
                     & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_2))
                     ? 2U : ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs1_dh)
                              ? 3U : 0U)));
    if ((0U == (IData)(vlSelfRef.main__DOT__u3__DOT__p_ad))) {
        vlSelfRef.main__DOT__u3_rd = vlSelfRef.main__DOT__u3__DOT__blk_a0;
    } else if ((1U == (IData)(vlSelfRef.main__DOT__u3__DOT__p_ad))) {
        vlSelfRef.main__DOT__u3_rd = ((((IData)(vlSelfRef.main__DOT__u3__DOT__p_overlap)
                                         ? vlSelfRef.main__DOT__u3__DOT__nblk_a0
                                         : vlSelfRef.main__DOT__u3__DOT__blk_a0) 
                                       << 0x00000018U) 
                                      | (vlSelfRef.main__DOT__u3__DOT__blk_a0 
                                         >> 8U));
    } else if ((2U == (IData)(vlSelfRef.main__DOT__u3__DOT__p_ad))) {
        vlSelfRef.main__DOT__u3_rd = ((((IData)(vlSelfRef.main__DOT__u3__DOT__p_overlap)
                                         ? vlSelfRef.main__DOT__u3__DOT__nblk_a0
                                         : vlSelfRef.main__DOT__u3__DOT__blk_a0) 
                                       << 0x00000010U) 
                                      | (vlSelfRef.main__DOT__u3__DOT__blk_a0 
                                         >> 0x00000010U));
    } else if ((3U == (IData)(vlSelfRef.main__DOT__u3__DOT__p_ad))) {
        vlSelfRef.main__DOT__u3_rd = ((((IData)(vlSelfRef.main__DOT__u3__DOT__p_overlap)
                                         ? vlSelfRef.main__DOT__u3__DOT__nblk_a0
                                         : vlSelfRef.main__DOT__u3__DOT__blk_a0) 
                                       << 8U) | (vlSelfRef.main__DOT__u3__DOT__blk_a0 
                                                 >> 0x18U));
    }
    vlSelfRef.main__DOT__u3__DOT__blk_ad = (((QData)((IData)(
                                                             ((0x03ffe000U 
                                                               & ((vlSelfRef.main__DOT__u3_ad 
                                                                   + 
                                                                   (3U 
                                                                    & (~ vlSelfRef.main__DOT__u3_ad))) 
                                                                  << 0x0000000dU)) 
                                                              | (0x00001fffU 
                                                                 & (vlSelfRef.main__DOT__u3_ad 
                                                                    + 
                                                                    (3U 
                                                                     & ((IData)(vlSelfRef.main__DOT__u3__DOT__blk_ofst) 
                                                                        >> 4U))))))) 
                                             << 0x0000001aU) 
                                            | (QData)((IData)(
                                                              ((0x03ffe000U 
                                                                & ((vlSelfRef.main__DOT__u3_ad 
                                                                    + 
                                                                    (3U 
                                                                     & ((IData)(vlSelfRef.main__DOT__u3__DOT__blk_ofst) 
                                                                        >> 2U))) 
                                                                   << 0x0000000dU)) 
                                                               | (0x00001fffU 
                                                                  & (vlSelfRef.main__DOT__u3_ad 
                                                                     + (IData)(__VdfgRegularize_h6e95ff9d_0_10)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = ((IData)(vlSelfRef.main__DOT__u3__DOT____VdfgRegularize_h66142285_0_0)
                                                 ? vlSelfRef.main__DOT__u3__DOT__overlap_blk_di
                                                 : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = ((IData)(vlSelfRef.main__DOT__u3__DOT____VdfgRegularize_h66142285_0_1)
                                                 ? vlSelfRef.main__DOT__u3__DOT__overlap_blk_di
                                                 : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4);
    vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr = 
        ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__true_instr_we)
          ? vlSelfRef.main__DOT__u3_instr_rd : vlSelfRef.main__DOT__u4__DOT__u3__DOT__instr_reg);
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__rf_wd = 
        ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_flagset)
          ? ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_flagsel)
              ? (1U & (~ ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_aluflags) 
                          >> 2U))) : (1U & ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_aluflags) 
                                            >> 1U)))
          : ((2U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_wdsel))
              ? ((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_wdsel))
                  ? ((2U & (IData)(vlSelfRef.main__DOT__u4__DOT__s_funct3))
                      ? vlSelfRef.main__DOT__u3_rd : 
                     ((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__s_funct3))
                       ? (((- (IData)((1U & ((~ ((IData)(vlSelfRef.main__DOT__u4__DOT__s_funct3) 
                                                 >> 2U)) 
                                             & (vlSelfRef.main__DOT__u3_rd 
                                                >> 0x0000000fU))))) 
                           << 0x00000010U) | (0x0000ffffU 
                                              & vlSelfRef.main__DOT__u3_rd))
                       : (((- (IData)((1U & ((~ ((IData)(vlSelfRef.main__DOT__u4__DOT__s_funct3) 
                                                 >> 2U)) 
                                             & (vlSelfRef.main__DOT__u3_rd 
                                                >> 7U))))) 
                           << 8U) | (0x000000ffU & vlSelfRef.main__DOT__u3_rd))))
                  : vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_pcnext)
              : ((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_wdsel))
                  ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_imm
                  : vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_alu)));
    __Vtableidx2 = ((0x00000010U & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                    >> 1U)) | ((8U 
                                                & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                                   >> 0x0000001bU)) 
                                               | (7U 
                                                  & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                                     >> 0x0000000cU))));
    vlSelfRef.main__DOT__u4__DOT__u2__DOT__u1__DOT__iflag_set 
        = Vmain__ConstPool__TABLE_h680b07e8_0[__Vtableidx2];
    vlSelfRef.main__DOT__u4__DOT__flag_sel = Vmain__ConstPool__TABLE_h10089114_0
        [__Vtableidx2];
    vlSelfRef.main__DOT__u4__DOT__u2__DOT__u1__DOT__main_decoder 
        = Vmain__ConstPool__TABLE_ha36e368f_0[__Vtableidx2];
    vlSelfRef.main__DOT__rf_rd1 = vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x
        [(0x0000001fU & ((IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__en)
                          ? (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                             >> 0x0000000fU) : (IData)(vlSelfRef.main__DOT__u2_ra1)))];
    __Vtableidx4 = (0x0000007fU & vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr);
    vlSelfRef.main__DOT__u4__DOT__format = Vmain__ConstPool__TABLE_h6404059c_0
        [__Vtableidx4];
    main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_7 
        = ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rd) 
           == (0x0000001fU & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                              >> 0x0000000fU)));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_0 
        = ((0x0000001fU & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                           >> 0x0000000fU)) == (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rd));
    __Vtableidx1 = ((0x000000feU & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                    << 1U)) | (IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__en));
    vlSelfRef.main__DOT__u4__DOT__cede = Vmain__ConstPool__TABLE_hd2d35ee7_0
        [__Vtableidx1];
    vlSelfRef.main__DOT__u4__DOT__mem_we = Vmain__ConstPool__TABLE_h405619e0_0
        [__Vtableidx1];
    vlSelfRef.main__DOT__u4__DOT__instr_we = Vmain__ConstPool__TABLE_he624a3bd_0
        [__Vtableidx1];
    vlSelfRef.main__DOT__u4__DOT__rf_we = Vmain__ConstPool__TABLE_h1d2e9b19_0
        [__Vtableidx1];
    vlSelfRef.main__DOT__u4__DOT__pc_we = Vmain__ConstPool__TABLE_he624a3bd_0
        [__Vtableidx1];
    vlSelfRef.main__DOT__u4__DOT__a_sel = Vmain__ConstPool__TABLE_h1c4f8acd_0
        [__Vtableidx1];
    vlSelfRef.main__DOT__u4__DOT__b_sel = Vmain__ConstPool__TABLE_heef49184_0
        [__Vtableidx1];
    vlSelfRef.main__DOT__u4__DOT__u2__DOT__alu_op = Vmain__ConstPool__TABLE_h2caef67c_0
        [__Vtableidx1];
    vlSelfRef.main__DOT__u4__DOT__pc_sel = Vmain__ConstPool__TABLE_hbccc22bd_0
        [__Vtableidx1];
    vlSelfRef.main__DOT__u4__DOT__wd_sel = Vmain__ConstPool__TABLE_h542e459e_0
        [__Vtableidx1];
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_mux_rd2 
        = ((2U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_mux_rd2_sel))
            ? ((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_mux_rd2_sel))
                ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__backup_rfwd
                : vlSelfRef.main__DOT__u4__DOT__u3__DOT__rf_wd)
            : ((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_mux_rd2_sel))
                ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rfwd
                : vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rd2));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_a = 
        ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_asel)
          ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_pc
          : ((2U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_mux_rd1_sel))
              ? ((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_mux_rd1_sel))
                  ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__backup_rfwd
                  : vlSelfRef.main__DOT__u4__DOT__u3__DOT__rf_wd)
              : ((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_mux_rd1_sel))
                  ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rfwd
                  : vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rd1)));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__imm = ((0U 
                                                   == (IData)(vlSelfRef.main__DOT__u4__DOT__format))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                                                >> 0x0000001fU))) 
                                                    << 0x0000000cU) 
                                                   | (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                                      >> 0x00000014U))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.main__DOT__u4__DOT__format))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                                                 >> 0x0000001fU))) 
                                                     << 0x0000000cU) 
                                                    | ((0x00000fe0U 
                                                        & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                                           >> 0x00000014U)) 
                                                       | (0x0000001fU 
                                                          & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                                             >> 7U))))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.main__DOT__u4__DOT__format))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                                                  >> 0x0000001fU))) 
                                                      << 0x0000000dU) 
                                                     | ((((2U 
                                                           & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                                              >> 0x0000001eU)) 
                                                          | (1U 
                                                             & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                                                >> 7U))) 
                                                         << 0x0000000bU) 
                                                        | ((0x000007e0U 
                                                            & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                                               >> 0x00000014U)) 
                                                           | (0x0000001eU 
                                                              & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                                                 >> 7U)))))
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelfRef.main__DOT__u4__DOT__format))
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr)
                                                      : 
                                                     ((((0x00000ffeU 
                                                         & ((- (IData)(
                                                                       (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                                                        >> 0x0000001fU))) 
                                                            << 1U)) 
                                                        | (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                                           >> 0x0000001fU)) 
                                                       << 0x00000014U) 
                                                      | ((((0x000001feU 
                                                            & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                                               >> 0x0000000bU)) 
                                                           | (1U 
                                                              & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                                                 >> 0x00000014U))) 
                                                          << 0x0000000bU) 
                                                         | (0x000007feU 
                                                            & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                                               >> 0x00000014U))))))));
    if ((0U == (IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__alu_op))) {
        vlSelfRef.main__DOT__u4__DOT__alu_cin = (1U 
                                                 & ((IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__u1__DOT__main_decoder) 
                                                    >> 5U));
        vlSelfRef.main__DOT__u4__DOT__alu_arith = (1U 
                                                   & ((IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__u1__DOT__main_decoder) 
                                                      >> 4U));
        vlSelfRef.main__DOT__u4__DOT__alu_sel = (0x0000000fU 
                                                 & (IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__u1__DOT__main_decoder));
    } else if ((1U == (IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__alu_op))) {
        vlSelfRef.main__DOT__u4__DOT__alu_cin = 0U;
        vlSelfRef.main__DOT__u4__DOT__alu_arith = 1U;
        vlSelfRef.main__DOT__u4__DOT__alu_sel = 0U;
    } else if ((2U == (IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__alu_op))) {
        vlSelfRef.main__DOT__u4__DOT__alu_cin = 0U;
        vlSelfRef.main__DOT__u4__DOT__alu_arith = 1U;
        vlSelfRef.main__DOT__u4__DOT__alu_sel = 3U;
    } else if ((3U == (IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__alu_op))) {
        vlSelfRef.main__DOT__u4__DOT__alu_cin = 0U;
        vlSelfRef.main__DOT__u4__DOT__alu_arith = 1U;
        vlSelfRef.main__DOT__u4__DOT__alu_sel = 3U;
    }
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__d_rs1_dh 
        = ((((IData)(main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_7) 
             & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rfwe)) 
            | (((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_0) 
                & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rfwe)) 
               | (((0x0000001fU & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                   >> 0x0000000fU)) 
                   == (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_rd)) 
                  & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_rfwe)))) 
           & ((2U == (IData)(vlSelfRef.main__DOT__u4__DOT__pc_sel)) 
              & (0U != (0x0000001fU & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                       >> 0x0000000fU)))));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b = 
        ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_bsel)
          ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_imm
          : vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_mux_rd2);
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__a_to 
        = (vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_a 
           ^ (- (IData)((IData)((2U == (3U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel)))))));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT__set_1 
        = ((vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_a 
            >> 0x0000001fU) & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alucin));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__stall_d 
        = ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__d_rs1_dh) 
           & ((IData)(main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_7) 
              | ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_0) 
                 & (3U == (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_wdsel)))));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__d_mux_rd1_sel 
        = (((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__d_rs1_dh) 
            & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_0))
            ? 1U : ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__d_rs1_dh)
                     ? 2U : 0U));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__b_to 
        = (vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b 
           ^ (- (IData)((IData)((1U == (3U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel)))))));
    if ((1U & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)) {
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_13 
            = ((vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_a 
                << 1U) | ((vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_a 
                           >> 0x0000001fU) & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel)));
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_0 
            = ((((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT__set_1) 
                 | (vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_a 
                    & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))) 
                << 0x0000001fU) | (vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_a 
                                   >> 1U));
    } else {
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_13 
            = vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_a;
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_0 
            = vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_a;
    }
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_a 
        = ((0x0000000fU == (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))
            ? (~ vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__a_to)
            : vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__a_to);
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__f_en = (1U 
                                                   & ((~ (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__stall_d)) 
                                                      & (~ (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_flush))));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__transfer 
        = (((IData)((2U == (IData)(vlSelfRef.main__DOT__u4__DOT__pc_sel)))
             ? ((2U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__d_mux_rd1_sel))
                 ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__rf_wd
                 : ((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__d_mux_rd1_sel))
                     ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rfwd
                     : vlSelfRef.main__DOT__rf_rd1))
             : vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__pc) 
           + vlSelfRef.main__DOT__u4__DOT__u3__DOT__imm);
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_b 
        = ((0xfffffffeU & (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__b_to 
                           & ((- (IData)((1U & (~ ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel) 
                                                   >> 2U))))) 
                              << 1U))) | (1U & (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__b_to 
                                                | ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel) 
                                                   >> 2U))));
    main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_18 
        = (0x0000000fU & (((2U & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)
                            ? (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_13 
                               >> 0x0000001aU) : (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_13 
                                                  >> 0x0000001cU)) 
                          & (- (IData)((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))))));
    main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_14 
        = (3U & ((vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_13 
                  >> 0x0000001eU) & (- (IData)((1U 
                                                & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))))));
    main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_11 
        = (0x0000000fU & ((- (IData)((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT__set_1))) 
                          | (((2U & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)
                               ? (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_0 
                                  >> 2U) : vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_0) 
                             & (- (IData)((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel)))))));
    main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_2 
        = (3U & ((- (IData)((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT__set_1))) 
                 | (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_0 
                    & (- (IData)((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel)))))));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1__DOT__b_op 
        = ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_subtr)
            ? (~ vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_b)
            : vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_b);
    if ((2U & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)) {
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_15 
            = ((vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_13 
                << 2U) | (IData)(main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_14));
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_3 
            = (((IData)(main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_2) 
                << 0x0000001eU) | (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_0 
                                   >> 2U));
    } else {
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_15 
            = vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_13;
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_3 
            = vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_0;
    }
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_out 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_a)) 
                                    + ((QData)((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1__DOT__b_op)) 
                                       + (QData)((IData)(
                                                         (((~ 
                                                            ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel) 
                                                             >> 3U)) 
                                                           & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alucin)) 
                                                          | (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_subtr)))))));
    if ((4U & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)) {
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_17 
            = ((((2U & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)
                  ? ((0x0ffffffcU & (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_13 
                                     << 2U)) | (IData)(main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_14))
                  : vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_13) 
                << 4U) | (IData)(main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_18));
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_10 
            = (((IData)(main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_11) 
                << 0x0000001cU) | (0x0fffffffU & ((2U 
                                                   & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)
                                                   ? 
                                                  (((IData)(main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_2) 
                                                    << 0x0000001aU) 
                                                   | (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_0 
                                                      >> 6U))
                                                   : 
                                                  (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_0 
                                                   >> 4U))));
    } else {
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_17 
            = vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_15;
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_10 
            = vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_3;
    }
    if ((8U & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)) {
        main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_19 
            = ((((4U & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)
                  ? ((0x00fffff0U & (((2U & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)
                                       ? ((0x000ffffcU 
                                           & (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_13 
                                              << 2U)) 
                                          | (IData)(main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_14))
                                       : vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_13) 
                                     << 4U)) | (IData)(main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_18))
                  : ((2U & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)
                      ? ((0x00fffffcU & (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_13 
                                         << 2U)) | (IData)(main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_14))
                      : vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_13)) 
                << 8U) | (0x000000ffU & (((4U & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)
                                           ? ((2U & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)
                                               ? (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_13 
                                                  >> 0x00000012U)
                                               : (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_13 
                                                  >> 0x00000014U))
                                           : ((2U & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)
                                               ? (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_13 
                                                  >> 0x00000016U)
                                               : (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_13 
                                                  >> 0x00000018U))) 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel)))))));
        main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_12 
            = ((((- (IData)((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT__set_1))) 
                 | (((4U & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)
                      ? ((2U & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)
                          ? (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_0 
                             >> 6U) : (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_0 
                                       >> 4U)) : ((2U 
                                                   & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)
                                                   ? 
                                                  (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_0 
                                                   >> 2U)
                                                   : vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_0)) 
                    & (- (IData)((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel)))))) 
                << 0x00000018U) | (0x00ffffffU & ((4U 
                                                   & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)
                                                   ? 
                                                  (((IData)(main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_11) 
                                                    << 0x00000014U) 
                                                   | (0x000fffffU 
                                                      & ((2U 
                                                          & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)
                                                          ? 
                                                         (((IData)(main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_2) 
                                                           << 0x00000012U) 
                                                          | (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_0 
                                                             >> 0x0000000eU))
                                                          : 
                                                         (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_0 
                                                          >> 0x0000000cU))))
                                                   : 
                                                  ((2U 
                                                    & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)
                                                    ? 
                                                   (((IData)(main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_2) 
                                                     << 0x00000016U) 
                                                    | (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_0 
                                                       >> 0x0000000aU))
                                                    : 
                                                   (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_0 
                                                    >> 8U)))));
    } else {
        main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_19 
            = vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_17;
        main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_12 
            = vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_10;
    }
    if ((0x00000010U & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)) {
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_16 
            = ((main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_19 
                << 0x00000010U) | (0x0000ffffU & ((main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_19 
                                                   >> 0x00000010U) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel)))))));
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_9 
            = ((((- (IData)((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT__set_1))) 
                 | (main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_12 
                    & (- (IData)((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel)))))) 
                << 0x00000010U) | (main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_12 
                                   >> 0x00000010U));
    } else {
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_16 
            = main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_19;
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_9 
            = main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_12;
    }
    __Vtemp_2[0U] = (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_out);
    __Vtemp_2[1U] = ((2U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))
                      ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_16
                      : vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_9);
    __Vtemp_2[2U] = (IData)((((QData)((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_out)) 
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
    __Vtemp_2[3U] = (IData)(((((QData)((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_out)) 
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
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_c = 
        ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_aluarith)
          ? __Vtemp_2[(3U & ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel) 
                             >> 2U))] : __Vtemp_4[(3U 
                                                   & ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel) 
                                                      >> 2U))]);
    vlSelfRef.main__DOT__u4__DOT__u2__DOT__u2__DOT__alu_flags 
        = ((((4U & (VL_REDXOR_32(vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_c) 
                    << 2U)) | ((2U & (((~ VL_REDXOR_32(
                                                       (3U 
                                                        & ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel) 
                                                           >> 2U)))) 
                                       & (((vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_a 
                                            >> 0x0000001fU) 
                                           & ((~ (IData)(
                                                         (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_out 
                                                          >> 0x0000001fU))) 
                                              & (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1__DOT__b_op 
                                                 >> 0x0000001fU))) 
                                          | ((~ (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_a 
                                                 >> 0x0000001fU)) 
                                             & ((~ 
                                                 (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1__DOT__b_op 
                                                  >> 0x0000001fU)) 
                                                & (IData)(
                                                          (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_out 
                                                           >> 0x0000001fU)))))) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_out 
                                                            >> 0x00000020U))))) 
            << 2U) | ((2U & (vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_c 
                             >> 0x0000001eU)) | (0U 
                                                 == vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_c)));
    __Vtableidx3 = (((IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__u2__DOT__alu_flags) 
                     << 3U) | (IData)(vlSelfRef.main__DOT__u4__DOT__c_funct3));
    vlSelfRef.main__DOT__u4__DOT__branch = Vmain__ConstPool__TABLE_h177e513c_0
        [__Vtableidx3];
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__f_flush 
        = ((3U == (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_pcsel)) 
           & ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_prediction) 
              != (IData)(vlSelfRef.main__DOT__u4__DOT__branch)));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_flush 
        = ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__f_flush) 
           | (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__stall_d));
    vlSelfRef.main__DOT__u4__DOT__pc_in = ((IData)(vlSelfRef.main__DOT__u4__DOT__init)
                                            ? 0U : 
                                           ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__f_flush)
                                             ? ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_prediction)
                                                 ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_pcnext
                                                 : vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_transfer)
                                             : ((1U 
                                                 & (VL_REDXOR_2(vlSelfRef.main__DOT__u4__DOT__pc_sel) 
                                                    | ((3U 
                                                        == (IData)(vlSelfRef.main__DOT__u4__DOT__pc_sel)) 
                                                       & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                                          >> 0x0000001fU))))
                                                 ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__transfer
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__pc))));
    vlSelfRef.main__DOT__u3_instr_ad = ((IData)(vlSelfRef.main__DOT__state)
                                         ? (0x0007ffffU 
                                            & vlSelfRef.main__DOT__u4__DOT__pc_in)
                                         : 0U);
    vlSelfRef.main__DOT__u3__DOT__inblk_decoder = 0ULL;
    vlSelfRef.main__DOT__u3__DOT__inblk_decoder = (vlSelfRef.main__DOT__u3__DOT__inblk_decoder 
                                                   | ((QData)((IData)(1U)) 
                                                      << 
                                                      (0x0000003fU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (vlSelfRef.main__DOT__u3_instr_ad 
                                                           >> 0x0000000dU)))));
    vlSelfRef.main__DOT__u3__DOT__ioverlap = (IData)(
                                                     ((0x00001ffcU 
                                                       == 
                                                       (0x00001ffcU 
                                                        & vlSelfRef.main__DOT__u3_instr_ad)) 
                                                      & (0U 
                                                         != 
                                                         (3U 
                                                          & vlSelfRef.main__DOT__u3_instr_ad))));
    __VdfgRegularize_h6e95ff9d_0_13 = ((2U & (VL_REDXOR_32(
                                                           (3U 
                                                            & vlSelfRef.main__DOT__u3_instr_ad)) 
                                              << 1U)) 
                                       | (1U & vlSelfRef.main__DOT__u3_instr_ad));
    vlSelfRef.main__DOT__u3__DOT__blk_iofst = ((((0x0000000cU 
                                                  & ((~ vlSelfRef.main__DOT__u3_instr_ad) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((~ 
                                                         VL_REDXOR_32(
                                                                      (3U 
                                                                       & vlSelfRef.main__DOT__u3_instr_ad))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & vlSelfRef.main__DOT__u3_instr_ad))) 
                                                << 4U) 
                                               | ((8U 
                                                   & (vlSelfRef.main__DOT__u3_instr_ad 
                                                      << 2U)) 
                                                  | ((4U 
                                                      & ((~ vlSelfRef.main__DOT__u3_instr_ad) 
                                                         << 2U)) 
                                                     | (IData)(__VdfgRegularize_h6e95ff9d_0_13))));
    vlSelfRef.main__DOT__u3__DOT__blk_iad = (((QData)((IData)(
                                                              ((0x03ffe000U 
                                                                & ((vlSelfRef.main__DOT__u3_instr_ad 
                                                                    + 
                                                                    (3U 
                                                                     & (~ vlSelfRef.main__DOT__u3_instr_ad))) 
                                                                   << 0x0000000dU)) 
                                                               | (0x00001fffU 
                                                                  & (vlSelfRef.main__DOT__u3_instr_ad 
                                                                     + 
                                                                     (3U 
                                                                      & ((IData)(vlSelfRef.main__DOT__u3__DOT__blk_iofst) 
                                                                         >> 4U))))))) 
                                              << 0x0000001aU) 
                                             | (QData)((IData)(
                                                               ((0x03ffe000U 
                                                                 & ((vlSelfRef.main__DOT__u3_instr_ad 
                                                                     + 
                                                                     (3U 
                                                                      & ((IData)(vlSelfRef.main__DOT__u3__DOT__blk_iofst) 
                                                                         >> 2U))) 
                                                                    << 0x0000000dU)) 
                                                                | (0x00001fffU 
                                                                   & (vlSelfRef.main__DOT__u3_instr_ad 
                                                                      + (IData)(__VdfgRegularize_h6e95ff9d_0_13)))))));
}

VL_ATTR_COLD void Vmain_reduced_memblk___stl_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk__0(Vmain_reduced_memblk* vlSelf);
VL_ATTR_COLD void Vmain_reduced_memblk___stl_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk__0(Vmain_reduced_memblk* vlSelf);

VL_ATTR_COLD void Vmain___024root___eval_stl(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_stl\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vmain___024root___stl_sequent__TOP__0(vlSelf);
        Vmain___024root____Vm_traceActivitySetAll(vlSelf);
        Vmain_reduced_memblk___stl_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk__0((&vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk));
        Vmain_reduced_memblk___stl_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk__0((&vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk));
    }
}

VL_ATTR_COLD bool Vmain___024root___eval_phase__stl(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_phase__stl\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmain___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmain___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vmain___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vmain___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vmain___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vmain___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vmain___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vmain___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmain___024root____Vm_traceActivitySetAll(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root____Vm_traceActivitySetAll\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vmain___024root___ctor_var_reset(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___ctor_var_reset\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10105644630884274164ull);
    vlSelf->toggle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15156108214686754859ull);
    vlSelf->bsel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4809668084300324951ull);
    vlSelf->ad = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 18290523468037346343ull);
    vlSelf->wd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18210509495843279068ull);
    vlSelf->cpu_cede = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10977606728341266474ull);
    vlSelf->main__DOT__u3_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11064088570133817401ull);
    vlSelf->main__DOT__u3_bsel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2271348629320996657ull);
    vlSelf->main__DOT__u3_ad = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 1657183776234686559ull);
    vlSelf->main__DOT__u3_instr_ad = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 9405488110193165087ull);
    vlSelf->main__DOT__u3_wd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8382266364170669106ull);
    vlSelf->main__DOT__u3_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15563920699691455729ull);
    vlSelf->main__DOT__u3_instr_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12723739742873986037ull);
    vlSelf->main__DOT__cpu_adsel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2894021594695049154ull);
    vlSelf->main__DOT__rf_rd1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14850738394923723823ull);
    vlSelf->main__DOT__uart_rx_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10563858130393657357ull);
    vlSelf->main__DOT__uart_tx_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5306298667052169169ull);
    vlSelf->main__DOT__u2_ra1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3685437912661711099ull);
    vlSelf->main__DOT__u3__DOT__overlap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15616723633317581966ull);
    vlSelf->main__DOT__u3__DOT__ioverlap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5659918536079994379ull);
    vlSelf->main__DOT__u3__DOT__ebr_a0 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13782969556900495363ull);
    vlSelf->main__DOT__u3__DOT__ebr_b0 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7478704263792310041ull);
    vlSelf->main__DOT__u3__DOT__overlap_blk_di = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10343630823286418291ull);
    vlSelf->main__DOT__u3__DOT__blk_ad = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 14221892240884080438ull);
    vlSelf->main__DOT__u3__DOT__blk_iad = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 17477857237465619413ull);
    vlSelf->main__DOT__u3__DOT__blk_ofst = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12366655346515643182ull);
    vlSelf->main__DOT__u3__DOT__blk_iofst = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16822698344037697656ull);
    vlSelf->main__DOT__u3__DOT__r_bsel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4387045482033151576ull);
    vlSelf->main__DOT__u3__DOT__n_bsel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 584094811475783997ull);
    vlSelf->main__DOT__u3__DOT__p_overlap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10959824580081134679ull);
    vlSelf->main__DOT__u3__DOT__p_ioverlap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8073068470885045909ull);
    vlSelf->main__DOT__u3__DOT__p_blk = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12361939702963335336ull);
    vlSelf->main__DOT__u3__DOT__p_iblk = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4174844980456337722ull);
    vlSelf->main__DOT__u3__DOT__p_nblk = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1780473001667534619ull);
    vlSelf->main__DOT__u3__DOT__p_inblk = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13639012204933501283ull);
    vlSelf->main__DOT__u3__DOT__p_ad = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 801470567921666828ull);
    vlSelf->main__DOT__u3__DOT__p_iad = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10208164360062245826ull);
    vlSelf->main__DOT__u3__DOT__decoder = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17274091329444718637ull);
    vlSelf->main__DOT__u3__DOT__nblk_decoder = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14962238684361835541ull);
    vlSelf->main__DOT__u3__DOT__inblk_decoder = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17175919443174914773ull);
    vlSelf->main__DOT__u3__DOT__blk_a0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9238693182601779819ull);
    vlSelf->main__DOT__u3__DOT__blk_b0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12660434213001769830ull);
    vlSelf->main__DOT__u3__DOT__nblk_a0 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11859816019174048399ull);
    vlSelf->main__DOT__u3__DOT__nblk_b0 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13922601598406432040ull);
    vlSelf->main__DOT__u3__DOT____VdfgRegularize_h66142285_0_0 = 0;
    vlSelf->main__DOT__u3__DOT____VdfgRegularize_h66142285_0_1 = 0;
    vlSelf->main__DOT__u4__DOT__prev_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 673009284257227869ull);
    vlSelf->main__DOT__u4__DOT__init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16103033309291622542ull);
    vlSelf->main__DOT__u4__DOT__pc_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2809284719461988975ull);
    vlSelf->main__DOT__u4__DOT__wd_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14290652919850195883ull);
    vlSelf->main__DOT__u4__DOT__format = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1684572089465582565ull);
    vlSelf->main__DOT__u4__DOT__alu_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8114473959038082920ull);
    vlSelf->main__DOT__u4__DOT__m_memwe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3459777866829561051ull);
    vlSelf->main__DOT__u4__DOT__c_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9983107742089901858ull);
    vlSelf->main__DOT__u4__DOT__m_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5168410515366370707ull);
    vlSelf->main__DOT__u4__DOT__s_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10316191331684958361ull);
    vlSelf->main__DOT__u4__DOT__pc_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13467051035014953966ull);
    vlSelf->main__DOT__u4__DOT__m_rd2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6812259093400470444ull);
    vlSelf->main__DOT__u4__DOT__m_alu = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14236661955004362436ull);
    vlSelf->main__DOT__u4__DOT__cede = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6201385811510820132ull);
    vlSelf->main__DOT__u4__DOT__mem_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1450173200925190856ull);
    vlSelf->main__DOT__u4__DOT__instr_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7604988667133927081ull);
    vlSelf->main__DOT__u4__DOT__rf_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1055829552310045230ull);
    vlSelf->main__DOT__u4__DOT__pc_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13322276441572406387ull);
    vlSelf->main__DOT__u4__DOT__a_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1680096620624127504ull);
    vlSelf->main__DOT__u4__DOT__b_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6440082717502034336ull);
    vlSelf->main__DOT__u4__DOT__alu_cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15467161002312509677ull);
    vlSelf->main__DOT__u4__DOT__alu_arith = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10281907375236462524ull);
    vlSelf->main__DOT__u4__DOT__flag_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 410024388869774012ull);
    vlSelf->main__DOT__u4__DOT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15213724132077751466ull);
    vlSelf->main__DOT__u4__DOT__u2__DOT__en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4692633867223545867ull);
    vlSelf->main__DOT__u4__DOT__u2__DOT__instr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12933387086568163347ull);
    vlSelf->main__DOT__u4__DOT__u2__DOT__alu_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17654131433074205878ull);
    vlSelf->main__DOT__u4__DOT__u2__DOT__u1__DOT__main_decoder = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5281988845393615250ull);
    vlSelf->main__DOT__u4__DOT__u2__DOT__u1__DOT__iflag_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14823755861958189140ull);
    vlSelf->main__DOT__u4__DOT__u2__DOT__u1__DOT__iflag_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1451097401264376947ull);
    vlSelf->main__DOT__u4__DOT__u2__DOT__u2__DOT__alu_flags = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4036802102268413959ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12890573692017741504ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__rf_wd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18332851324018951244ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__transfer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8198927753096032988ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__alu_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15478334406923751443ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__alu_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15907573363664005162ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__alu_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3450706226609675027ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__true_instr_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14175507504275345852ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__instr_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 921522834047302409ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__d_transfer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10447261250072620867ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__d_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7479838523578623132ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__d_ipcnext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5302729261541966310ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_rd1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16040348603780271656ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_rd2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3920719854519257217ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17046490178302038506ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_transfer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10990877807086804397ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9463391628859977740ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_ipcnext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14789009622070135672ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_pcnext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11634700611032547344ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5176579330563703252ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18397647425562660464ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6330627403388644238ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_alusel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13135575458461941239ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_pcsel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3773156783571622980ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_wdsel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3554337630623742878ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_cede = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 438212410122776242ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_rfwe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10551769821901703294ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_asel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3791644037111804634ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_bsel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10432661914284881910ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_aluarith = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15582490096763678920ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_alucin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17417492491440604389ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_flagset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16706304842822382579ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_flagsel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9139922952841286976ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_memwe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3931290657827363419ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_prediction = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9867096257349870503ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__m_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7038854314015897912ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__m_pcnext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2858793362331132052ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__m_aluflags = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3676662810279970509ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__m_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2233784408279513483ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__m_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7102257353467820454ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__m_wdsel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10899306195407022854ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__m_cede = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16530636006326484015ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__m_rfwe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8232020619834451892ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__m_flagset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4277285305150969055ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__m_flagsel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10828483228961149672ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__s_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6437284825795435920ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__s_alu = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12846665697989917533ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__s_pcnext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 249106116822355311ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__s_aluflags = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11408661403092836909ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__s_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7848643996137466437ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__s_wdsel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16181436706502634777ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__s_cede = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13118615005342848408ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__s_rfwe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1286663226219112070ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__s_flagset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13128612278043731807ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__s_flagsel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7835183779862882619ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__s_validrd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9089566406293627549ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__f_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 751301833700267396ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__f_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16992087561411510462ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6004170850206690633ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__m_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10694312397540538545ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_mux_rd2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3094295280762131958ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__m_rfwd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1804220449283163407ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__backup_rfwd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4406480176106705957ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__backup_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8412836850736160761ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__backup_rfwe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5696568691789348056ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__d_mux_rd1_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14386374076607569090ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_mux_rd1_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16767306964575103961ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__c_mux_rd2_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11913847177306616279ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->main__DOT__u4__DOT__u3__DOT__u2__DOT__x[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 214005461330961085ull);
    }
    vlSelf->main__DOT__u4__DOT__u3__DOT__u2__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 503849315477664895ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__u2__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1225896582086834761ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__u3__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13241448782585025709ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__u3__DOT__a_to = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2087886932153415259ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__u3__DOT__b_to = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18036222376404045296ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7171832179629835570ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10869015979429524335ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_subtr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5777451480694542565ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_out = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 14818656353825406112ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT__set_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4742439102345566048ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_0 = 0;
    vlSelf->main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_3 = 0;
    vlSelf->main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_9 = 0;
    vlSelf->main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_10 = 0;
    vlSelf->main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_13 = 0;
    vlSelf->main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_15 = 0;
    vlSelf->main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_16 = 0;
    vlSelf->main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_17 = 0;
    vlSelf->main__DOT__u4__DOT__u3__DOT__u3__DOT__u1__DOT__b_op = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16289105046514156828ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__u4__DOT__d_rs1_dh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17489434274996881763ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs1_dh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13062247956389516946ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs2_dh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 29450760005396787ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__u4__DOT__stall_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15811914141559843886ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__u4__DOT__prev_stallc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8235820333859063302ull);
    vlSelf->main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_0 = 0;
    vlSelf->main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_1 = 0;
    vlSelf->main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_2 = 0;
    vlSelf->main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_3 = 0;
    vlSelf->main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_4 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_5 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_7 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_8 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
