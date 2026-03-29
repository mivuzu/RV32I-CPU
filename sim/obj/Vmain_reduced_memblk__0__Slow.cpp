// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "Vmain__pch.h"

VL_ATTR_COLD void Vmain_reduced_memblk___stl_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk__0(Vmain_reduced_memblk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmain_reduced_memblk___stl_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk__0\n"); );
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
    vlSelfRef.blk_iad = (vlSymsp->TOP.main__DOT__u3__DOT__blk_iad 
                         & (- (QData)((IData)((1U & 
                                               (~ ((IData)(vlSymsp->TOP.main__DOT__u3__DOT__ioverlap) 
                                                   & (IData)(vlSymsp->TOP.main__DOT__u3__DOT__inblk_decoder))))))));
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

VL_ATTR_COLD void Vmain_reduced_memblk___stl_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk__0(Vmain_reduced_memblk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmain_reduced_memblk___stl_sequent__TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk__0\n"); );
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
    vlSelfRef.blk_iad = (vlSymsp->TOP.main__DOT__u3__DOT__blk_iad 
                         & (- (QData)((IData)((1U & 
                                               (~ ((IData)(vlSymsp->TOP.main__DOT__u3__DOT__ioverlap) 
                                                   & (IData)(
                                                             (vlSymsp->TOP.main__DOT__u3__DOT__inblk_decoder 
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

VL_ATTR_COLD void Vmain_reduced_memblk___ctor_var_reset(Vmain_reduced_memblk* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmain_reduced_memblk___ctor_var_reset\n"); );
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10105644630884274164ull);
    vlSelf->r_bsel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15770236777914873602ull);
    vlSelf->blk_di = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4032810241174190841ull);
    vlSelf->blk_ad = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 4388187757036026229ull);
    vlSelf->blk_iad = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 10656606640564588855ull);
    vlSelf->ebr_a0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5462904757004799021ull);
    vlSelf->ebr_b0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4068586495369123492ull);
    vlSelf->__PVT__ebr_ada = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 13172570636829886389ull);
    vlSelf->__PVT__ebr_adb = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 15019578421960970295ull);
    vlSelf->__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 15713496730682461997ull);
    vlSelf->__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 10175469698186771853ull);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14604431153381465518ull);
    }
    vlSelf->__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 1447022104625280255ull);
    vlSelf->__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 6354634239465503494ull);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1031529251452406051ull);
    }
    vlSelf->__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 4080638285519313056ull);
    vlSelf->__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 11927121976614703692ull);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1854084964855114274ull);
    }
    vlSelf->__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 11997782081755702919ull);
    vlSelf->__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 3930999030852730295ull);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17002632255545393451ull);
    }
}
