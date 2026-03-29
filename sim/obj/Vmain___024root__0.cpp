// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "Vmain__pch.h"

void Vmain___024root___eval_triggers_vec__ico(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_triggers_vec__ico\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vmain___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___trigger_anySet__ico\n"); );
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

void Vmain___024root___ico_sequent__TOP__0(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___ico_sequent__TOP__0\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
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
    // Body
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
    vlSelfRef.main__DOT__u3__DOT__decoder = 0ULL;
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
}

void Vmain_reduced_memblk___ico_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk__0(Vmain_reduced_memblk* vlSelf);
void Vmain_reduced_memblk___ico_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk__0(Vmain_reduced_memblk* vlSelf);

void Vmain___024root___eval_ico(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_ico\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vmain___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        Vmain_reduced_memblk___ico_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk__0((&vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk));
        Vmain_reduced_memblk___ico_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk__0((&vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vmain___024root___eval_phase__ico(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_phase__ico\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vmain___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmain___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vmain___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vmain___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vmain___024root___eval_triggers_vec__act(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_triggers_vec__act\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.clk)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

bool Vmain___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___trigger_anySet__act\n"); );
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

void Vmain___024root___nba_sequent__TOP__0(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_sequent__TOP__0\n"); );
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
    CData/*0:0*/ __Vdly__main__DOT__state;
    __Vdly__main__DOT__state = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    __Vdly__main__DOT__state = vlSelfRef.main__DOT__state;
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__backup_rfwe 
        = vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_rfwe;
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
    if (((IData)(vlSelfRef.toggle) | ((IData)(vlSelfRef.cpu_cede) 
                                      & (IData)(vlSelfRef.main__DOT__state)))) {
        __Vdly__main__DOT__state = (1U & (~ (IData)(vlSelfRef.main__DOT__state)));
    }
    vlSelfRef.main__DOT__u4__DOT__prev_state = vlSelfRef.main__DOT__state;
    vlSelfRef.main__DOT__u3__DOT__p_ioverlap = vlSelfRef.main__DOT__u3__DOT__ioverlap;
    vlSelfRef.main__DOT__u3__DOT__p_iad = (3U & vlSelfRef.main__DOT__u3_instr_ad);
    vlSelfRef.main__DOT__u3__DOT__p_inblk = (0x0000003fU 
                                             & ((IData)(1U) 
                                                + (vlSelfRef.main__DOT__u3_instr_ad 
                                                   >> 0x0000000dU)));
    vlSelfRef.main__DOT__u3__DOT__p_iblk = (0x0000003fU 
                                            & (vlSelfRef.main__DOT__u3_instr_ad 
                                               >> 0x0dU));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__prev_stallc 
        = vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_flush;
    vlSelfRef.main__DOT__u3__DOT__p_overlap = vlSelfRef.main__DOT__u3__DOT__overlap;
    vlSelfRef.main__DOT__u3__DOT__p_ad = (3U & vlSelfRef.main__DOT__u3_ad);
    vlSelfRef.main__DOT__u3__DOT__p_blk = (0x0000003fU 
                                           & (vlSelfRef.main__DOT__u3_ad 
                                              >> 0x0dU));
    vlSelfRef.main__DOT__u3__DOT__p_nblk = (0x0000003fU 
                                            & ((IData)(1U) 
                                               + (vlSelfRef.main__DOT__u3_ad 
                                                  >> 0x0000000dU)));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__backup_rfwd 
        = vlSelfRef.main__DOT__u4__DOT__u3__DOT__rf_wd;
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__backup_rd 
        = vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_rd;
    if (vlSelfRef.main__DOT__u4__DOT__u2__DOT__en) {
        if (vlSelfRef.main__DOT__u4__DOT__u3__DOT__f_en) {
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__d_transfer 
                = vlSelfRef.main__DOT__u4__DOT__u3__DOT__transfer;
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__d_pc 
                = vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__pc;
        }
        if ((1U & (~ (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_flush)))) {
            if (vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_flush) {
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_aluarith = 0U;
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_pcsel = 0U;
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_prediction = 0U;
            } else {
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_aluarith 
                    = (1U & (IData)(vlSelfRef.main__DOT__u4__DOT__alu_arith));
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_pcsel 
                    = (3U & (IData)(vlSelfRef.main__DOT__u4__DOT__pc_sel));
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_prediction 
                    = (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                       >> 0x0000001fU);
            }
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_transfer 
                = vlSelfRef.main__DOT__u4__DOT__u3__DOT__transfer;
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_ipcnext 
                = vlSelfRef.main__DOT__u4__DOT__u3__DOT__d_ipcnext;
        }
        if (vlSelfRef.main__DOT__u4__DOT__u3__DOT__f_en) {
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__d_ipcnext 
                = ((IData)(4U) + vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__pc);
        }
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_cede 
            = vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_cede;
        vlSelfRef.main__DOT__u4__DOT__m_rd2 = vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_mux_rd2;
        vlSelfRef.main__DOT__u4__DOT__s_funct3 = vlSelfRef.main__DOT__u4__DOT__m_funct3;
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_aluflags 
            = vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_aluflags;
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_flagsel 
            = vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_flagsel;
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_alu 
            = vlSelfRef.main__DOT__u4__DOT__m_alu;
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_flagset 
            = vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_flagset;
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_wdsel 
            = vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_wdsel;
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_pcnext 
            = vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_pcnext;
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_imm 
            = vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_imm;
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_rfwe 
            = vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rfwe;
        vlSelfRef.main__DOT__u4__DOT__m_alu = vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_c;
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_pcnext 
            = vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_pcnext;
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_imm 
            = vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_imm;
        if (vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_flush) {
            vlSelfRef.main__DOT__u4__DOT__m_memwe = 0U;
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rs2 = 0U;
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_cede = 0U;
            vlSelfRef.main__DOT__u4__DOT__m_funct3 = 0U;
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_aluflags = 0U;
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_flagsel = 0U;
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_flagset = 0U;
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_wdsel = 0U;
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_rd 
                = vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rd;
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rfwe = 0U;
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rd = 0U;
        } else {
            vlSelfRef.main__DOT__u4__DOT__m_memwe = 
                (1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_memwe));
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rs2 
                = (0x0000001fU & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rs2));
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_cede 
                = (1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_cede));
            vlSelfRef.main__DOT__u4__DOT__m_funct3 
                = (7U & (IData)(vlSelfRef.main__DOT__u4__DOT__c_funct3));
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_aluflags 
                = (0x0000001fU & (IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__u2__DOT__alu_flags));
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_flagsel 
                = (1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_flagsel));
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_flagset 
                = (1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_flagset));
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_wdsel 
                = (3U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_wdsel));
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_rd 
                = vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rd;
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rfwe 
                = (1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rfwe));
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rd 
                = (0x0000001fU & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rd));
        }
        if ((1U & (~ (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_flush)))) {
            if (vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_flush) {
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alucin = 0U;
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_bsel = 0U;
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_asel = 0U;
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel = 0U;
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rs1 = 0U;
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_memwe = 0U;
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rs2 = 0U;
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_cede = 0U;
                vlSelfRef.main__DOT__u4__DOT__c_funct3 = 0U;
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_flagsel = 0U;
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_flagset = 0U;
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_wdsel = 0U;
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rfwe = 0U;
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rd = 0U;
            } else {
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alucin 
                    = (1U & (IData)(vlSelfRef.main__DOT__u4__DOT__alu_cin));
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_bsel 
                    = (1U & (IData)(vlSelfRef.main__DOT__u4__DOT__b_sel));
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_asel 
                    = (1U & (IData)(vlSelfRef.main__DOT__u4__DOT__a_sel));
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel 
                    = (0x0000000fU & (IData)(vlSelfRef.main__DOT__u4__DOT__alu_sel));
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rs1 
                    = (0x0000001fU & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                      >> 0x0fU));
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_memwe 
                    = (1U & (IData)(vlSelfRef.main__DOT__u4__DOT__mem_we));
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rs2 
                    = (0x0000001fU & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                      >> 0x14U));
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_cede 
                    = (1U & (IData)(vlSelfRef.main__DOT__u4__DOT__cede));
                vlSelfRef.main__DOT__u4__DOT__c_funct3 
                    = (7U & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                             >> 0x0cU));
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_flagsel 
                    = (1U & (IData)(vlSelfRef.main__DOT__u4__DOT__flag_sel));
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_flagset 
                    = (IData)(((0U == (IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__alu_op)) 
                               & (IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__u1__DOT__iflag_set)));
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_wdsel 
                    = (3U & (IData)(vlSelfRef.main__DOT__u4__DOT__wd_sel));
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rfwe 
                    = (1U & (IData)(vlSelfRef.main__DOT__u4__DOT__rf_we));
                vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rd 
                    = (0x0000001fU & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                      >> 7U));
            }
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rd1 
                = vlSelfRef.main__DOT__rf_rd1;
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rd2 
                = vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x
                [(0x0000001fU & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                 >> 0x00000014U))];
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_pc 
                = vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__pc;
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_pcnext 
                = ((IData)(4U) + vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__pc);
            vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_imm 
                = vlSelfRef.main__DOT__u4__DOT__u3__DOT__imm;
        }
    }
    vlSelfRef.main__DOT__state = __Vdly__main__DOT__state;
    if (vlSelfRef.main__DOT__state) {
        vlSelfRef.main__DOT__u3_we = vlSelfRef.main__DOT__u4__DOT__m_memwe;
        vlSelfRef.main__DOT__u3_wd = vlSelfRef.main__DOT__u4__DOT__m_rd2;
        vlSelfRef.main__DOT__u3_bsel = ((2U & (IData)(vlSelfRef.main__DOT__u4__DOT__m_funct3))
                                         ? 0x0fU : 
                                        ((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__m_funct3))
                                          ? 3U : 1U));
        vlSelfRef.main__DOT__u3_ad = (0x0007ffffU & vlSelfRef.main__DOT__u4__DOT__m_alu);
    } else {
        vlSelfRef.main__DOT__u3_we = vlSelfRef.we;
        vlSelfRef.main__DOT__u3_wd = vlSelfRef.wd;
        vlSelfRef.main__DOT__u3_bsel = vlSelfRef.bsel;
        vlSelfRef.main__DOT__u3_ad = (0x0007ffffU & vlSelfRef.ad);
    }
    vlSelfRef.main__DOT__u3__DOT__nblk_b0 = (0x00ffffffU 
                                             & (IData)(
                                                       (vlSelfRef.main__DOT__u3__DOT__ebr_b0 
                                                        >> 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.main__DOT__u3__DOT__p_inblk), 5U)))));
    vlSelfRef.main__DOT__u3__DOT__blk_b0 = (IData)(
                                                   (vlSelfRef.main__DOT__u3__DOT__ebr_b0 
                                                    >> 
                                                    (0x0000003fU 
                                                     & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.main__DOT__u3__DOT__p_iblk), 5U))));
    if (vlSelfRef.main__DOT__u4__DOT__u3__DOT__true_instr_we) {
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__instr_reg 
            = vlSelfRef.main__DOT__u3_instr_rd;
    }
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__true_instr_we 
        = ((IData)(vlSelfRef.main__DOT__u4__DOT__init) 
           | ((IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__en) 
              & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__f_en)));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_subtr 
        = ((IData)((0x0dU == (0x0dU & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel)))) 
           | (3U == (3U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))));
    main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_6 
        = ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__backup_rfwe) 
           & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__prev_stallc));
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
    vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr = 
        ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__true_instr_we)
          ? vlSelfRef.main__DOT__u3_instr_rd : vlSelfRef.main__DOT__u4__DOT__u3__DOT__instr_reg);
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
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_4 
        = ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rs2) 
           == (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_rd));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_2 
        = ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rs1) 
           == (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_rd));
    vlSelfRef.main__DOT__u3__DOT__decoder = 0ULL;
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
    if ((((IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__en) 
          | (IData)(vlSelfRef.main__DOT__u4__DOT__init)) 
         & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__f_en))) {
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__pc 
            = (0xfffffffeU & vlSelfRef.main__DOT__u4__DOT__pc_in);
    }
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_3 
        = ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rs2) 
           == (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rd));
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_1 
        = ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rs1) 
           == (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rd));
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
    vlSelfRef.main__DOT__u4__DOT__init = ((~ (IData)(vlSelfRef.main__DOT__u4__DOT__prev_state)) 
                                          & (IData)(vlSelfRef.main__DOT__state));
    vlSelfRef.main__DOT__u4__DOT__u2__DOT__en = ((IData)(vlSelfRef.main__DOT__state) 
                                                 & (IData)(vlSelfRef.main__DOT__u4__DOT__prev_state));
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
    vlSelfRef.cpu_cede = ((IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__en) 
                          & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_cede));
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
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__f_en = (1U 
                                                   & ((~ (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__stall_d)) 
                                                      & (~ (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_flush))));
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
}

void Vmain___024root___nba_sequent__TOP__1(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_sequent__TOP__1\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__main__DOT__u4__DOT__u3__DOT__u2__DOT__x__v0;
    __VdlyVal__main__DOT__u4__DOT__u3__DOT__u2__DOT__x__v0 = 0;
    CData/*4:0*/ __VdlyDim0__main__DOT__u4__DOT__u3__DOT__u2__DOT__x__v0;
    __VdlyDim0__main__DOT__u4__DOT__u3__DOT__u2__DOT__x__v0 = 0;
    CData/*0:0*/ __VdlySet__main__DOT__u4__DOT__u3__DOT__u2__DOT__x__v0;
    __VdlySet__main__DOT__u4__DOT__u3__DOT__u2__DOT__x__v0 = 0;
    // Body
    __VdlySet__main__DOT__u4__DOT__u3__DOT__u2__DOT__x__v0 = 0U;
    if (((IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__en) 
         & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_rfwe))) {
        if ((0U != (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_rd))) {
            __VdlyVal__main__DOT__u4__DOT__u3__DOT__u2__DOT__x__v0 
                = vlSelfRef.main__DOT__u4__DOT__u3__DOT__rf_wd;
            __VdlyDim0__main__DOT__u4__DOT__u3__DOT__u2__DOT__x__v0 
                = vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_rd;
            __VdlySet__main__DOT__u4__DOT__u3__DOT__u2__DOT__x__v0 = 1U;
        }
    }
    if (__VdlySet__main__DOT__u4__DOT__u3__DOT__u2__DOT__x__v0) {
        vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[__VdlyDim0__main__DOT__u4__DOT__u3__DOT__u2__DOT__x__v0] 
            = __VdlyVal__main__DOT__u4__DOT__u3__DOT__u2__DOT__x__v0;
    }
}

void Vmain___024root___nba_comb__TOP__0(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___nba_comb__TOP__0\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_13;
    __VdfgRegularize_h6e95ff9d_0_13 = 0;
    // Body
    vlSelfRef.main__DOT__rf_rd1 = vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x
        [(0x0000001fU & ((IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__en)
                          ? (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                             >> 0x0000000fU) : (IData)(vlSelfRef.main__DOT__u2_ra1)))];
    vlSelfRef.main__DOT__u4__DOT__u3__DOT__transfer 
        = (((IData)((2U == (IData)(vlSelfRef.main__DOT__u4__DOT__pc_sel)))
             ? ((2U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__d_mux_rd1_sel))
                 ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__rf_wd
                 : ((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__d_mux_rd1_sel))
                     ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rfwd
                     : vlSelfRef.main__DOT__rf_rd1))
             : vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__pc) 
           + vlSelfRef.main__DOT__u4__DOT__u3__DOT__imm);
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

void Vmain_reduced_memblk___nba_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk__0(Vmain_reduced_memblk* vlSelf);
void Vmain_reduced_memblk___nba_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk__0(Vmain_reduced_memblk* vlSelf);
void Vmain_reduced_memblk___nba_comb__TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk__0(Vmain_reduced_memblk* vlSelf);
void Vmain_reduced_memblk___nba_comb__TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk__0(Vmain_reduced_memblk* vlSelf);

void Vmain___024root___eval_nba(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_nba\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmain_reduced_memblk___nba_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk__0((&vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        Vmain_reduced_memblk___nba_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk__0((&vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk));
        Vmain___024root___nba_sequent__TOP__0(vlSelf);
        Vmain_reduced_memblk___ico_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk__0((&vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk));
        Vmain_reduced_memblk___ico_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk__0((&vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk));
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmain___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmain___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        Vmain_reduced_memblk___nba_comb__TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk__0((&vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk));
        Vmain_reduced_memblk___nba_comb__TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk__0((&vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk));
    }
}

void Vmain___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vmain___024root___eval_phase__act(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_phase__act\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmain___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmain___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vmain___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vmain___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vmain___024root___eval_phase__nba(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_phase__nba\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vmain___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vmain___024root___eval_nba(vlSelf);
        Vmain___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vmain___024root___eval(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vmain___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("src/sim/main.v", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vmain___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmain___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("src/sim/main.v", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmain___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("src/sim/main.v", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vmain___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vmain___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vmain___024root___eval_debug_assertions(Vmain___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_debug_assertions\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.we & 0xfeU)))) {
        Verilated::overWidthError("we");
    }
    if (VL_UNLIKELY(((vlSelfRef.toggle & 0xfeU)))) {
        Verilated::overWidthError("toggle");
    }
    if (VL_UNLIKELY(((vlSelfRef.bsel & 0xf0U)))) {
        Verilated::overWidthError("bsel");
    }
    if (VL_UNLIKELY(((vlSelfRef.ad & 0xfff80000U)))) {
        Verilated::overWidthError("ad");
    }
}
#endif  // VL_DEBUG
