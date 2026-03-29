// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "Vmain__pch.h"

void Vmain_reduced_memblk___ico_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk__0(Vmain_reduced_memblk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmain_reduced_memblk___ico_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk__0\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_bsel = ((IData)(vlSymsp->TOP.main__DOT__u3__DOT____VdfgRegularize_h66142285_0_0)
                         ? (IData)(vlSymsp->TOP.main__DOT__u3__DOT__n_bsel)
                         : (IData)(vlSymsp->TOP.main__DOT__u3__DOT__r_bsel));
    vlSelfRef.we = (((IData)(vlSymsp->TOP.main__DOT__u3__DOT__decoder) 
                     | (IData)(vlSymsp->TOP.main__DOT__u3__DOT____VdfgRegularize_h66142285_0_0)) 
                    & (IData)(vlSymsp->TOP.main__DOT__u3_we));
    vlSelfRef.blk_ad = (vlSymsp->TOP.main__DOT__u3__DOT__blk_ad 
                        & (- (QData)((IData)((1U & 
                                              (~ ((IData)(vlSymsp->TOP.main__DOT__u3__DOT__overlap) 
                                                  & (IData)(vlSymsp->TOP.main__DOT__u3__DOT__nblk_decoder))))))));
    vlSelfRef.__PVT__ebr_ada = (((QData)((IData)((0x000007ffU 
                                                  & (IData)(
                                                            (vlSelfRef.blk_ad 
                                                             >> 0x00000029U))))) 
                                 << 0x0000002dU) | 
                                (((QData)((IData)((0x00003ff8U 
                                                   & ((IData)(
                                                              (vlSelfRef.blk_ad 
                                                               >> 0x0000001cU)) 
                                                      << 3U)))) 
                                  << 0x0000001cU) | (QData)((IData)(
                                                                    ((0x0ffe0000U 
                                                                      & ((IData)(
                                                                                (vlSelfRef.blk_ad 
                                                                                >> 0x0000000fU)) 
                                                                         << 0x00000011U)) 
                                                                     | (0x00003ff8U 
                                                                        & ((IData)(
                                                                                (vlSelfRef.blk_ad 
                                                                                >> 2U)) 
                                                                           << 3U)))))));
}

void Vmain_reduced_memblk___nba_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk__0(Vmain_reduced_memblk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmain_reduced_memblk___nba_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk__0\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0;
    __VdlyVal__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0;
    __VdlyDim0__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0;
    __VdlySet__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0;
    __VdlyVal__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0;
    __VdlyDim0__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0;
    __VdlySet__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0;
    __VdlyVal__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0;
    __VdlyDim0__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0;
    __VdlySet__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyVal__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0;
    __VdlyVal__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0;
    __VdlyDim0__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0;
    __VdlySet__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0 = 0;
    // Body
    __VdlySet__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0 = 0U;
    __VdlySet__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0 = 0U;
    __VdlySet__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0 = 0U;
    __VdlySet__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0 = 0U;
    if ((((IData)(vlSelfRef.r_bsel) >> 3U) & (IData)(vlSelfRef.we))) {
        __VdlyVal__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0 
            = (0x000001ffU & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_5));
        __VdlyDim0__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0 
            = (0x000007ffU & (IData)((vlSelfRef.__PVT__ebr_ada 
                                      >> 0x0000002dU)));
        __VdlySet__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.r_bsel) & (IData)(vlSelfRef.we))) {
        __VdlyVal__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0 
            = (0x000000ffU & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_7);
        __VdlyDim0__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0 
            = (0x000007ffU & (IData)((vlSelfRef.blk_ad 
                                      >> 2U)));
        __VdlySet__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0 = 1U;
    }
    if ((((IData)(vlSelfRef.r_bsel) >> 1U) & (IData)(vlSelfRef.we))) {
        __VdlyVal__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0 
            = (0x000000ffU & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_7 
                              >> 8U));
        __VdlyDim0__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0 
            = (0x000007ffU & (IData)((vlSelfRef.blk_ad 
                                      >> 0x0000000fU)));
        __VdlySet__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0 = 1U;
    }
    if ((((IData)(vlSelfRef.r_bsel) >> 2U) & (IData)(vlSelfRef.we))) {
        __VdlyVal__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0 
            = (0x000000ffU & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_7 
                              >> 0x00000010U));
        __VdlyDim0__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0 
            = (0x000007ffU & (IData)((vlSelfRef.blk_ad 
                                      >> 0x0000001cU)));
        __VdlySet__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0 = 1U;
    }
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
        = ((0x0003fe00U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa) 
           | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__mem
           [(0x000007ffU & (IData)((vlSelfRef.__PVT__ebr_ada 
                                    >> 0x0000002dU)))]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
        = ((0x0003fe00U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob) 
           | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__mem
           [(0x000007ffU & (IData)((vlSelfRef.__PVT__ebr_adb 
                                    >> 0x0000002dU)))]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
        = (0x000001ffU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
        = (0x000001ffU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
        = ((0x0003fe00U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa) 
           | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__mem
           [(0x000007ffU & (IData)((vlSelfRef.blk_ad 
                                    >> 2U)))]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
        = ((0x0003fe00U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob) 
           | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__mem
           [(0x000007ffU & (IData)((vlSelfRef.blk_iad 
                                    >> 2U)))]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
        = (0x000001ffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
        = (0x000001ffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
        = ((0x0003fe00U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa) 
           | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__mem
           [(0x000007ffU & (IData)((vlSelfRef.blk_ad 
                                    >> 0x0000000fU)))]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
        = ((0x0003fe00U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob) 
           | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__mem
           [(0x000007ffU & (IData)((vlSelfRef.blk_iad 
                                    >> 0x0000000fU)))]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
        = (0x000001ffU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
        = (0x000001ffU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
        = ((0x0003fe00U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa) 
           | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__mem
           [(0x000007ffU & (IData)((vlSelfRef.blk_ad 
                                    >> 0x0000001cU)))]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
        = ((0x0003fe00U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob) 
           | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__mem
           [(0x000007ffU & (IData)((vlSelfRef.blk_iad 
                                    >> 0x0000001cU)))]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
        = (0x000001ffU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
        = (0x000001ffU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob);
    if (__VdlySet__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__mem[__VdlyDim0__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0] 
            = __VdlyVal__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0;
    }
    if (__VdlySet__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__mem[__VdlyDim0__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0;
    }
    if (__VdlySet__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__mem[__VdlyDim0__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0] 
            = __VdlyVal__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0;
    }
    if (__VdlySet__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__mem[__VdlyDim0__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0] 
            = __VdlyVal__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0;
    }
}

void Vmain_reduced_memblk___nba_comb__TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk__0(Vmain_reduced_memblk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmain_reduced_memblk___nba_comb__TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk__0\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.blk_iad = (vlSymsp->TOP.main__DOT__u3__DOT__blk_iad 
                         & (- (QData)((IData)((1U & 
                                               (~ ((IData)(vlSymsp->TOP.main__DOT__u3__DOT__ioverlap) 
                                                   & (IData)(vlSymsp->TOP.main__DOT__u3__DOT__inblk_decoder))))))));
    vlSelfRef.__PVT__ebr_adb = (((QData)((IData)((0x000007ffU 
                                                  & (IData)(
                                                            (vlSelfRef.blk_iad 
                                                             >> 0x00000029U))))) 
                                 << 0x0000002dU) | 
                                (((QData)((IData)((0x00003ff8U 
                                                   & ((IData)(
                                                              (vlSelfRef.blk_iad 
                                                               >> 0x0000001cU)) 
                                                      << 3U)))) 
                                  << 0x0000001cU) | (QData)((IData)(
                                                                    ((0x0ffe0000U 
                                                                      & ((IData)(
                                                                                (vlSelfRef.blk_iad 
                                                                                >> 0x0000000fU)) 
                                                                         << 0x00000011U)) 
                                                                     | (0x00003ff8U 
                                                                        & ((IData)(
                                                                                (vlSelfRef.blk_iad 
                                                                                >> 2U)) 
                                                                           << 3U)))))));
}

void Vmain_reduced_memblk___ico_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk__0(Vmain_reduced_memblk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmain_reduced_memblk___ico_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk__0\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_bsel = ((IData)(vlSymsp->TOP.main__DOT__u3__DOT____VdfgRegularize_h66142285_0_1)
                         ? (IData)(vlSymsp->TOP.main__DOT__u3__DOT__n_bsel)
                         : (IData)(vlSymsp->TOP.main__DOT__u3__DOT__r_bsel));
    vlSelfRef.we = (((IData)((vlSymsp->TOP.main__DOT__u3__DOT__decoder 
                              >> 1U)) | (IData)(vlSymsp->TOP.main__DOT__u3__DOT____VdfgRegularize_h66142285_0_1)) 
                    & (IData)(vlSymsp->TOP.main__DOT__u3_we));
    vlSelfRef.blk_ad = (vlSymsp->TOP.main__DOT__u3__DOT__blk_ad 
                        & (- (QData)((IData)((1U & 
                                              (~ ((IData)(vlSymsp->TOP.main__DOT__u3__DOT__overlap) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.main__DOT__u3__DOT__nblk_decoder 
                                                             >> 1U)))))))));
    vlSelfRef.__PVT__ebr_ada = (((QData)((IData)((0x000007ffU 
                                                  & (IData)(
                                                            (vlSelfRef.blk_ad 
                                                             >> 0x00000029U))))) 
                                 << 0x0000002dU) | 
                                (((QData)((IData)((0x00003ff8U 
                                                   & ((IData)(
                                                              (vlSelfRef.blk_ad 
                                                               >> 0x0000001cU)) 
                                                      << 3U)))) 
                                  << 0x0000001cU) | (QData)((IData)(
                                                                    ((0x0ffe0000U 
                                                                      & ((IData)(
                                                                                (vlSelfRef.blk_ad 
                                                                                >> 0x0000000fU)) 
                                                                         << 0x00000011U)) 
                                                                     | (0x00003ff8U 
                                                                        & ((IData)(
                                                                                (vlSelfRef.blk_ad 
                                                                                >> 2U)) 
                                                                           << 3U)))))));
}

void Vmain_reduced_memblk___nba_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk__0(Vmain_reduced_memblk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmain_reduced_memblk___nba_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk__0\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __VdlyVal__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0;
    __VdlyVal__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0;
    __VdlyDim0__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0;
    __VdlySet__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyVal__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0;
    __VdlyVal__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0;
    __VdlyDim0__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0;
    __VdlySet__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyVal__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0;
    __VdlyVal__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0;
    __VdlyDim0__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0;
    __VdlySet__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyVal__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0;
    __VdlyVal__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0;
    __VdlyDim0__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0;
    __VdlySet__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0 = 0;
    // Body
    __VdlySet__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0 = 0U;
    __VdlySet__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0 = 0U;
    __VdlySet__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0 = 0U;
    __VdlySet__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0 = 0U;
    if ((((IData)(vlSelfRef.r_bsel) >> 3U) & (IData)(vlSelfRef.we))) {
        __VdlyVal__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0 
            = (0x000001ffU & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_5));
        __VdlyDim0__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0 
            = (0x000007ffU & (IData)((vlSelfRef.__PVT__ebr_ada 
                                      >> 0x0000002dU)));
        __VdlySet__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.r_bsel) & (IData)(vlSelfRef.we))) {
        __VdlyVal__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0 
            = (0x000000ffU & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_8);
        __VdlyDim0__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0 
            = (0x000007ffU & (IData)((vlSelfRef.blk_ad 
                                      >> 2U)));
        __VdlySet__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0 = 1U;
    }
    if ((((IData)(vlSelfRef.r_bsel) >> 1U) & (IData)(vlSelfRef.we))) {
        __VdlyVal__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0 
            = (0x000000ffU & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_8 
                              >> 8U));
        __VdlyDim0__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0 
            = (0x000007ffU & (IData)((vlSelfRef.blk_ad 
                                      >> 0x0000000fU)));
        __VdlySet__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0 = 1U;
    }
    if ((((IData)(vlSelfRef.r_bsel) >> 2U) & (IData)(vlSelfRef.we))) {
        __VdlyVal__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0 
            = (0x000000ffU & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_8 
                              >> 0x00000010U));
        __VdlyDim0__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0 
            = (0x000007ffU & (IData)((vlSelfRef.blk_ad 
                                      >> 0x0000001cU)));
        __VdlySet__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0 = 1U;
    }
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
        = ((0x0003fe00U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa) 
           | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__mem
           [(0x000007ffU & (IData)((vlSelfRef.__PVT__ebr_ada 
                                    >> 0x0000002dU)))]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
        = ((0x0003fe00U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob) 
           | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__mem
           [(0x000007ffU & (IData)((vlSelfRef.__PVT__ebr_adb 
                                    >> 0x0000002dU)))]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
        = (0x000001ffU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
        = (0x000001ffU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
        = ((0x0003fe00U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa) 
           | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__mem
           [(0x000007ffU & (IData)((vlSelfRef.blk_ad 
                                    >> 2U)))]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
        = ((0x0003fe00U & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob) 
           | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__mem
           [(0x000007ffU & (IData)((vlSelfRef.blk_iad 
                                    >> 2U)))]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
        = (0x000001ffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
        = (0x000001ffU & vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
        = ((0x0003fe00U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa) 
           | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__mem
           [(0x000007ffU & (IData)((vlSelfRef.blk_ad 
                                    >> 0x0000000fU)))]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
        = ((0x0003fe00U & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob) 
           | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__mem
           [(0x000007ffU & (IData)((vlSelfRef.blk_iad 
                                    >> 0x0000000fU)))]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
        = (0x000001ffU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
        = (0x000001ffU & vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
        = ((0x0003fe00U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa) 
           | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__mem
           [(0x000007ffU & (IData)((vlSelfRef.blk_ad 
                                    >> 0x0000001cU)))]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
        = ((0x0003fe00U & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob) 
           | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__mem
           [(0x000007ffU & (IData)((vlSelfRef.blk_iad 
                                    >> 0x0000001cU)))]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
        = (0x000001ffU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
        = (0x000001ffU & vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob);
    if (__VdlySet__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__mem[__VdlyDim0__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0] 
            = __VdlyVal__genblk1__BRA__3__KET____DOT__ebr__DOT__mem__v0;
    }
    if (__VdlySet__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__mem[__VdlyDim0__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0] 
            = __VdlyVal__genblk1__BRA__0__KET____DOT__ebr__DOT__mem__v0;
    }
    if (__VdlySet__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__mem[__VdlyDim0__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0] 
            = __VdlyVal__genblk1__BRA__1__KET____DOT__ebr__DOT__mem__v0;
    }
    if (__VdlySet__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__mem[__VdlyDim0__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0] 
            = __VdlyVal__genblk1__BRA__2__KET____DOT__ebr__DOT__mem__v0;
    }
}

void Vmain_reduced_memblk___nba_comb__TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk__0(Vmain_reduced_memblk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmain_reduced_memblk___nba_comb__TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk__0\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.blk_iad = (vlSymsp->TOP.main__DOT__u3__DOT__blk_iad 
                         & (- (QData)((IData)((1U & 
                                               (~ ((IData)(vlSymsp->TOP.main__DOT__u3__DOT__ioverlap) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.main__DOT__u3__DOT__inblk_decoder 
                                                              >> 1U)))))))));
    vlSelfRef.__PVT__ebr_adb = (((QData)((IData)((0x000007ffU 
                                                  & (IData)(
                                                            (vlSelfRef.blk_iad 
                                                             >> 0x00000029U))))) 
                                 << 0x0000002dU) | 
                                (((QData)((IData)((0x00003ff8U 
                                                   & ((IData)(
                                                              (vlSelfRef.blk_iad 
                                                               >> 0x0000001cU)) 
                                                      << 3U)))) 
                                  << 0x0000001cU) | (QData)((IData)(
                                                                    ((0x0ffe0000U 
                                                                      & ((IData)(
                                                                                (vlSelfRef.blk_iad 
                                                                                >> 0x0000000fU)) 
                                                                         << 0x00000011U)) 
                                                                     | (0x00003ff8U 
                                                                        & ((IData)(
                                                                                (vlSelfRef.blk_iad 
                                                                                >> 2U)) 
                                                                           << 3U)))))));
}
