// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vmain__Syms.h"


void Vmain___024root__trace_chg_0_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmain___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_chg_0\n"); );
    // Body
    Vmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain___024root*>(voidSelf);
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vmain___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmain___024root__trace_chg_0_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_chg_0_sub_0\n"); );
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
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.main__DOT__u3_we));
        bufp->chgCData(oldp+1,(vlSelfRef.main__DOT__u3_bsel),4);
        bufp->chgIData(oldp+2,(vlSelfRef.main__DOT__u3_ad),19);
        bufp->chgIData(oldp+3,(vlSelfRef.main__DOT__u3_wd),32);
        bufp->chgBit(oldp+4,(vlSelfRef.main__DOT__u3__DOT__overlap));
        bufp->chgIData(oldp+5,((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                 << 0x00000018U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)),32);
        bufp->chgIData(oldp+6,(vlSelfRef.main__DOT__u3__DOT__overlap_blk_di),24);
        bufp->chgQData(oldp+7,(vlSelfRef.main__DOT__u3__DOT__blk_ad),52);
        bufp->chgCData(oldp+9,(vlSelfRef.main__DOT__u3__DOT__blk_ofst),8);
        bufp->chgCData(oldp+10,(vlSelfRef.main__DOT__u3__DOT__r_bsel),4);
        bufp->chgCData(oldp+11,(vlSelfRef.main__DOT__u3__DOT__n_bsel),4);
        bufp->chgCData(oldp+12,((0x0000003fU & ((IData)(1U) 
                                                + (vlSelfRef.main__DOT__u3_ad 
                                                   >> 0x0000000dU)))),6);
        bufp->chgQData(oldp+13,(vlSelfRef.main__DOT__u3__DOT__decoder),64);
        bufp->chgQData(oldp+15,(vlSelfRef.main__DOT__u3__DOT__nblk_decoder),64);
        bufp->chgBit(oldp+17,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.we));
        bufp->chgCData(oldp+18,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.r_bsel),4);
        bufp->chgIData(oldp+19,((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                  << 0x00000018U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)),32);
        bufp->chgQData(oldp+20,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad),52);
        __Vtemp_1[0U] = (IData)((((QData)((IData)((0x000000ffU 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                                      >> 8U)))) 
                                  << 0x00000012U) | (QData)((IData)(
                                                                    (0x000000ffU 
                                                                     & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))));
        __Vtemp_1[1U] = (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)) 
                                    << 0x00000012U) 
                                   | (QData)((IData)(
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
                                    << 0x00000012U) 
                                   | (QData)((IData)(
                                                     (0x000000ffU 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                                         >> 0x00000010U)))))) 
                          >> 0x0000001cU) | ((IData)(
                                                     ((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)) 
                                                        << 0x00000012U) 
                                                       | (QData)((IData)(
                                                                         (0x000000ffU 
                                                                          & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                                                             >> 0x00000010U))))) 
                                                      >> 0x00000020U)) 
                                             << 4U));
        bufp->chgWData(oldp+22,(__Vtemp_1),72);
        bufp->chgQData(oldp+25,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__ebr_ada),56);
        bufp->chgCData(oldp+27,(((0xfffffff8U & ((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.r_bsel) 
                                                 & ((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.we) 
                                                    << 3U))) 
                                 | ((0xfffffffcU & 
                                     ((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.r_bsel) 
                                      & ((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.we) 
                                         << 2U))) | 
                                    (3U & ((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.r_bsel) 
                                           & (- (IData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.we)))))))),4);
        bufp->chgBit(oldp+28,((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)));
        bufp->chgBit(oldp+29,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                     >> 1U))));
        bufp->chgBit(oldp+30,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                     >> 2U))));
        bufp->chgBit(oldp+31,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                     >> 3U))));
        bufp->chgBit(oldp+32,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                     >> 4U))));
        bufp->chgBit(oldp+33,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                     >> 5U))));
        bufp->chgBit(oldp+34,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                     >> 6U))));
        bufp->chgBit(oldp+35,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                     >> 7U))));
        bufp->chgBit(oldp+36,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 2U)))));
        bufp->chgBit(oldp+37,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 3U)))));
        bufp->chgBit(oldp+38,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 4U)))));
        bufp->chgBit(oldp+39,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 5U)))));
        bufp->chgBit(oldp+40,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 6U)))));
        bufp->chgBit(oldp+41,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 7U)))));
        bufp->chgBit(oldp+42,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 8U)))));
        bufp->chgBit(oldp+43,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 9U)))));
        bufp->chgBit(oldp+44,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x0000000aU)))));
        bufp->chgBit(oldp+45,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x0000000bU)))));
        bufp->chgBit(oldp+46,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x0000000cU)))));
        bufp->chgBit(oldp+47,(((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.r_bsel) 
                               & (IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.we))));
        bufp->chgIData(oldp+48,((0x000000ffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)),18);
        bufp->chgSData(oldp+49,((0x00003ff8U & ((IData)(
                                                        (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                                         >> 2U)) 
                                                << 3U))),14);
        bufp->chgBit(oldp+50,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                     >> 8U))));
        bufp->chgBit(oldp+51,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                     >> 9U))));
        bufp->chgBit(oldp+52,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                     >> 0x0000000aU))));
        bufp->chgBit(oldp+53,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                     >> 0x0000000bU))));
        bufp->chgBit(oldp+54,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                     >> 0x0000000cU))));
        bufp->chgBit(oldp+55,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                     >> 0x0000000dU))));
        bufp->chgBit(oldp+56,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                     >> 0x0000000eU))));
        bufp->chgBit(oldp+57,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                     >> 0x0000000fU))));
        bufp->chgBit(oldp+58,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x0000000fU)))));
        bufp->chgBit(oldp+59,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x00000010U)))));
        bufp->chgBit(oldp+60,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x00000011U)))));
        bufp->chgBit(oldp+61,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x00000012U)))));
        bufp->chgBit(oldp+62,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x00000013U)))));
        bufp->chgBit(oldp+63,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x00000014U)))));
        bufp->chgBit(oldp+64,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x00000015U)))));
        bufp->chgBit(oldp+65,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x00000016U)))));
        bufp->chgBit(oldp+66,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x00000017U)))));
        bufp->chgBit(oldp+67,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x00000018U)))));
        bufp->chgBit(oldp+68,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x00000019U)))));
        bufp->chgBit(oldp+69,((((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.r_bsel) 
                                >> 1U) & (IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.we))));
        bufp->chgIData(oldp+70,((0x000000ffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                                >> 8U))),18);
        bufp->chgSData(oldp+71,((0x00003ff8U & ((IData)(
                                                        (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                                         >> 0x0000000fU)) 
                                                << 3U))),14);
        bufp->chgBit(oldp+72,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                     >> 0x00000010U))));
        bufp->chgBit(oldp+73,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                     >> 0x00000011U))));
        bufp->chgBit(oldp+74,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                     >> 0x00000012U))));
        bufp->chgBit(oldp+75,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                     >> 0x00000013U))));
        bufp->chgBit(oldp+76,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                     >> 0x00000014U))));
        bufp->chgBit(oldp+77,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                     >> 0x00000015U))));
        bufp->chgBit(oldp+78,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                     >> 0x00000016U))));
        bufp->chgBit(oldp+79,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                     >> 0x00000017U))));
        bufp->chgBit(oldp+80,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x0000001cU)))));
        bufp->chgBit(oldp+81,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x0000001dU)))));
        bufp->chgBit(oldp+82,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x0000001eU)))));
        bufp->chgBit(oldp+83,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x0000001fU)))));
        bufp->chgBit(oldp+84,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x00000020U)))));
        bufp->chgBit(oldp+85,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x00000021U)))));
        bufp->chgBit(oldp+86,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x00000022U)))));
        bufp->chgBit(oldp+87,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x00000023U)))));
        bufp->chgBit(oldp+88,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x00000024U)))));
        bufp->chgBit(oldp+89,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x00000025U)))));
        bufp->chgBit(oldp+90,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                             >> 0x00000026U)))));
        bufp->chgBit(oldp+91,((((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.r_bsel) 
                                >> 2U) & (IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.we))));
        bufp->chgIData(oldp+92,((0x000000ffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                                >> 0x00000010U))),18);
        bufp->chgSData(oldp+93,((0x00003ff8U & ((IData)(
                                                        (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                                         >> 0x0000001cU)) 
                                                << 3U))),14);
        bufp->chgBit(oldp+94,((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5))));
        bufp->chgBit(oldp+95,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                     >> 1U))));
        bufp->chgBit(oldp+96,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                     >> 2U))));
        bufp->chgBit(oldp+97,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                     >> 3U))));
        bufp->chgBit(oldp+98,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                     >> 4U))));
        bufp->chgBit(oldp+99,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                     >> 5U))));
        bufp->chgBit(oldp+100,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                      >> 6U))));
        bufp->chgBit(oldp+101,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                      >> 7U))));
        bufp->chgBit(oldp+102,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                              >> 0x00000029U)))));
        bufp->chgBit(oldp+103,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                              >> 0x0000002aU)))));
        bufp->chgBit(oldp+104,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                              >> 0x0000002bU)))));
        bufp->chgBit(oldp+105,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                              >> 0x0000002cU)))));
        bufp->chgBit(oldp+106,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                              >> 0x0000002dU)))));
        bufp->chgBit(oldp+107,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                              >> 0x0000002eU)))));
        bufp->chgBit(oldp+108,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                              >> 0x0000002fU)))));
        bufp->chgBit(oldp+109,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                              >> 0x00000030U)))));
        bufp->chgBit(oldp+110,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                              >> 0x00000031U)))));
        bufp->chgBit(oldp+111,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                              >> 0x00000032U)))));
        bufp->chgBit(oldp+112,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_ad 
                                              >> 0x00000033U)))));
        bufp->chgBit(oldp+113,((((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.r_bsel) 
                                 >> 3U) & (IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.we))));
        bufp->chgIData(oldp+114,(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5),18);
        bufp->chgSData(oldp+115,((0x00003fffU & (IData)(
                                                        (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__ebr_ada 
                                                         >> 0x0000002aU)))),14);
        bufp->chgBit(oldp+116,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.we));
        bufp->chgCData(oldp+117,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.r_bsel),4);
        bufp->chgIData(oldp+118,((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                   << 0x00000018U) 
                                  | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)),32);
        bufp->chgQData(oldp+119,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad),52);
        __Vtemp_2[0U] = (IData)((((QData)((IData)((0x000000ffU 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                                      >> 8U)))) 
                                  << 0x00000012U) | (QData)((IData)(
                                                                    (0x000000ffU 
                                                                     & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)))));
        __Vtemp_2[1U] = (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)) 
                                    << 0x00000012U) 
                                   | (QData)((IData)(
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
                                    << 0x00000012U) 
                                   | (QData)((IData)(
                                                     (0x000000ffU 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                                         >> 0x00000010U)))))) 
                          >> 0x0000001cU) | ((IData)(
                                                     ((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)) 
                                                        << 0x00000012U) 
                                                       | (QData)((IData)(
                                                                         (0x000000ffU 
                                                                          & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                                                             >> 0x00000010U))))) 
                                                      >> 0x00000020U)) 
                                             << 4U));
        bufp->chgWData(oldp+121,(__Vtemp_2),72);
        bufp->chgQData(oldp+124,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__ebr_ada),56);
        bufp->chgCData(oldp+126,(((0xfffffff8U & ((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.r_bsel) 
                                                  & ((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.we) 
                                                     << 3U))) 
                                  | ((0xfffffffcU & 
                                      ((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.r_bsel) 
                                       & ((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.we) 
                                          << 2U))) 
                                     | (3U & ((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.r_bsel) 
                                              & (- (IData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.we)))))))),4);
        bufp->chgBit(oldp+127,((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)));
        bufp->chgBit(oldp+128,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                      >> 1U))));
        bufp->chgBit(oldp+129,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                      >> 2U))));
        bufp->chgBit(oldp+130,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                      >> 3U))));
        bufp->chgBit(oldp+131,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                      >> 4U))));
        bufp->chgBit(oldp+132,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                      >> 5U))));
        bufp->chgBit(oldp+133,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                      >> 6U))));
        bufp->chgBit(oldp+134,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                      >> 7U))));
        bufp->chgBit(oldp+135,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 2U)))));
        bufp->chgBit(oldp+136,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 3U)))));
        bufp->chgBit(oldp+137,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 4U)))));
        bufp->chgBit(oldp+138,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 5U)))));
        bufp->chgBit(oldp+139,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 6U)))));
        bufp->chgBit(oldp+140,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 7U)))));
        bufp->chgBit(oldp+141,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 8U)))));
        bufp->chgBit(oldp+142,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 9U)))));
        bufp->chgBit(oldp+143,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x0000000aU)))));
        bufp->chgBit(oldp+144,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x0000000bU)))));
        bufp->chgBit(oldp+145,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x0000000cU)))));
        bufp->chgBit(oldp+146,(((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.r_bsel) 
                                & (IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.we))));
        bufp->chgIData(oldp+147,((0x000000ffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)),18);
        bufp->chgSData(oldp+148,((0x00003ff8U & ((IData)(
                                                         (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                                          >> 2U)) 
                                                 << 3U))),14);
        bufp->chgBit(oldp+149,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                      >> 8U))));
        bufp->chgBit(oldp+150,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                      >> 9U))));
        bufp->chgBit(oldp+151,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+152,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+153,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+154,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+155,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+156,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+157,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x0000000fU)))));
        bufp->chgBit(oldp+158,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x00000010U)))));
        bufp->chgBit(oldp+159,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x00000011U)))));
        bufp->chgBit(oldp+160,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x00000012U)))));
        bufp->chgBit(oldp+161,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x00000013U)))));
        bufp->chgBit(oldp+162,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x00000014U)))));
        bufp->chgBit(oldp+163,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x00000015U)))));
        bufp->chgBit(oldp+164,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x00000016U)))));
        bufp->chgBit(oldp+165,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x00000017U)))));
        bufp->chgBit(oldp+166,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x00000018U)))));
        bufp->chgBit(oldp+167,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x00000019U)))));
        bufp->chgBit(oldp+168,((((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.r_bsel) 
                                 >> 1U) & (IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.we))));
        bufp->chgIData(oldp+169,((0x000000ffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                                 >> 8U))),18);
        bufp->chgSData(oldp+170,((0x00003ff8U & ((IData)(
                                                         (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                                          >> 0x0000000fU)) 
                                                 << 3U))),14);
        bufp->chgBit(oldp+171,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+172,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                      >> 0x00000011U))));
        bufp->chgBit(oldp+173,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                      >> 0x00000012U))));
        bufp->chgBit(oldp+174,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                      >> 0x00000013U))));
        bufp->chgBit(oldp+175,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                      >> 0x00000014U))));
        bufp->chgBit(oldp+176,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                      >> 0x00000015U))));
        bufp->chgBit(oldp+177,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                      >> 0x00000016U))));
        bufp->chgBit(oldp+178,((1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                      >> 0x00000017U))));
        bufp->chgBit(oldp+179,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x0000001cU)))));
        bufp->chgBit(oldp+180,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x0000001dU)))));
        bufp->chgBit(oldp+181,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x0000001eU)))));
        bufp->chgBit(oldp+182,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x0000001fU)))));
        bufp->chgBit(oldp+183,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x00000020U)))));
        bufp->chgBit(oldp+184,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x00000021U)))));
        bufp->chgBit(oldp+185,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x00000022U)))));
        bufp->chgBit(oldp+186,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x00000023U)))));
        bufp->chgBit(oldp+187,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x00000024U)))));
        bufp->chgBit(oldp+188,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x00000025U)))));
        bufp->chgBit(oldp+189,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x00000026U)))));
        bufp->chgBit(oldp+190,((((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.r_bsel) 
                                 >> 2U) & (IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.we))));
        bufp->chgIData(oldp+191,((0x000000ffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                                 >> 0x00000010U))),18);
        bufp->chgSData(oldp+192,((0x00003ff8U & ((IData)(
                                                         (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                                          >> 0x0000001cU)) 
                                                 << 3U))),14);
        bufp->chgBit(oldp+193,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x00000029U)))));
        bufp->chgBit(oldp+194,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x0000002aU)))));
        bufp->chgBit(oldp+195,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x0000002bU)))));
        bufp->chgBit(oldp+196,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x0000002cU)))));
        bufp->chgBit(oldp+197,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x0000002dU)))));
        bufp->chgBit(oldp+198,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x0000002eU)))));
        bufp->chgBit(oldp+199,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x0000002fU)))));
        bufp->chgBit(oldp+200,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x00000030U)))));
        bufp->chgBit(oldp+201,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x00000031U)))));
        bufp->chgBit(oldp+202,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x00000032U)))));
        bufp->chgBit(oldp+203,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_ad 
                                              >> 0x00000033U)))));
        bufp->chgBit(oldp+204,((((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.r_bsel) 
                                 >> 3U) & (IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.we))));
        bufp->chgSData(oldp+205,((0x00003fffU & (IData)(
                                                        (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__ebr_ada 
                                                         >> 0x0000002aU)))),14);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+206,(vlSelfRef.main__DOT__state));
        bufp->chgIData(oldp+207,(vlSelfRef.main__DOT__u3_rd),32);
        bufp->chgIData(oldp+208,(vlSelfRef.main__DOT__u3_instr_rd),32);
        bufp->chgBit(oldp+209,(vlSelfRef.main__DOT__u4__DOT__m_memwe));
        bufp->chgCData(oldp+210,(((2U & (IData)(vlSelfRef.main__DOT__u4__DOT__m_funct3))
                                   ? 0x0fU : ((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__m_funct3))
                                               ? 3U
                                               : 1U))),4);
        bufp->chgIData(oldp+211,((0x0007ffffU & vlSelfRef.main__DOT__u4__DOT__m_alu)),19);
        bufp->chgIData(oldp+212,(vlSelfRef.main__DOT__u4__DOT__m_rd2),32);
        bufp->chgIData(oldp+213,(vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr),32);
        bufp->chgIData(oldp+214,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__pc),32);
        bufp->chgQData(oldp+215,(vlSelfRef.main__DOT__u3__DOT__ebr_a0),64);
        bufp->chgQData(oldp+217,(vlSelfRef.main__DOT__u3__DOT__ebr_b0),64);
        bufp->chgBit(oldp+219,(vlSelfRef.main__DOT__u3__DOT__p_overlap));
        bufp->chgBit(oldp+220,(vlSelfRef.main__DOT__u3__DOT__p_ioverlap));
        bufp->chgCData(oldp+221,(vlSelfRef.main__DOT__u3__DOT__p_blk),6);
        bufp->chgCData(oldp+222,(vlSelfRef.main__DOT__u3__DOT__p_iblk),6);
        bufp->chgCData(oldp+223,(vlSelfRef.main__DOT__u3__DOT__p_nblk),6);
        bufp->chgCData(oldp+224,(vlSelfRef.main__DOT__u3__DOT__p_inblk),6);
        bufp->chgCData(oldp+225,(vlSelfRef.main__DOT__u3__DOT__p_ad),2);
        bufp->chgCData(oldp+226,(vlSelfRef.main__DOT__u3__DOT__p_iad),2);
        bufp->chgIData(oldp+227,(vlSelfRef.main__DOT__u3__DOT__blk_a0),32);
        bufp->chgIData(oldp+228,(vlSelfRef.main__DOT__u3__DOT__blk_b0),32);
        bufp->chgIData(oldp+229,(vlSelfRef.main__DOT__u3__DOT__nblk_a0),24);
        bufp->chgIData(oldp+230,(vlSelfRef.main__DOT__u3__DOT__nblk_b0),24);
        bufp->chgBit(oldp+231,(vlSelfRef.main__DOT__u4__DOT__prev_state));
        bufp->chgBit(oldp+232,(vlSelfRef.main__DOT__u4__DOT__init));
        bufp->chgBit(oldp+233,(vlSelfRef.main__DOT__u4__DOT__u2__DOT__en));
        bufp->chgIData(oldp+234,(((2U & (IData)(vlSelfRef.main__DOT__u4__DOT__s_funct3))
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
                                           << 8U) | 
                                          (0x000000ffU 
                                           & vlSelfRef.main__DOT__u3_rd))))),32);
        bufp->chgCData(oldp+235,(vlSelfRef.main__DOT__u4__DOT__pc_sel),2);
        bufp->chgCData(oldp+236,(vlSelfRef.main__DOT__u4__DOT__wd_sel),2);
        bufp->chgCData(oldp+237,(vlSelfRef.main__DOT__u4__DOT__format),3);
        bufp->chgCData(oldp+238,(vlSelfRef.main__DOT__u4__DOT__alu_sel),4);
        bufp->chgBit(oldp+239,(vlSelfRef.main__DOT__u4__DOT__cede));
        bufp->chgBit(oldp+240,(vlSelfRef.main__DOT__u4__DOT__mem_we));
        bufp->chgBit(oldp+241,(vlSelfRef.main__DOT__u4__DOT__instr_we));
        bufp->chgBit(oldp+242,(vlSelfRef.main__DOT__u4__DOT__rf_we));
        bufp->chgBit(oldp+243,(vlSelfRef.main__DOT__u4__DOT__pc_we));
        bufp->chgBit(oldp+244,(vlSelfRef.main__DOT__u4__DOT__a_sel));
        bufp->chgBit(oldp+245,(vlSelfRef.main__DOT__u4__DOT__b_sel));
        bufp->chgBit(oldp+246,(vlSelfRef.main__DOT__u4__DOT__alu_cin));
        bufp->chgBit(oldp+247,(vlSelfRef.main__DOT__u4__DOT__alu_arith));
        bufp->chgBit(oldp+248,(((0U == (IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__alu_op)) 
                                & (IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__u1__DOT__iflag_set))));
        bufp->chgBit(oldp+249,(vlSelfRef.main__DOT__u4__DOT__flag_sel));
        bufp->chgBit(oldp+250,(vlSelfRef.main__DOT__u4__DOT__branch));
        bufp->chgCData(oldp+251,(vlSelfRef.main__DOT__u4__DOT__c_funct3),3);
        bufp->chgCData(oldp+252,(vlSelfRef.main__DOT__u4__DOT__m_funct3),3);
        bufp->chgCData(oldp+253,(vlSelfRef.main__DOT__u4__DOT__s_funct3),3);
        bufp->chgCData(oldp+254,(vlSelfRef.main__DOT__u4__DOT__u2__DOT__u2__DOT__alu_flags),5);
        bufp->chgIData(oldp+255,(vlSelfRef.main__DOT__u4__DOT__m_alu),32);
        bufp->chgCData(oldp+256,(vlSelfRef.main__DOT__u4__DOT__u2__DOT__alu_op),2);
        bufp->chgCData(oldp+257,((0x0000007fU & vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr)),7);
        bufp->chgCData(oldp+258,((7U & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                        >> 0x0000000cU))),3);
        bufp->chgBit(oldp+259,((1U & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                      >> 5U))));
        bufp->chgBit(oldp+260,((1U & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                      >> 0x0000001eU))));
        bufp->chgCData(oldp+261,(vlSelfRef.main__DOT__u4__DOT__u2__DOT__u1__DOT__main_decoder),6);
        bufp->chgBit(oldp+262,(vlSelfRef.main__DOT__u4__DOT__u2__DOT__u1__DOT__iflag_set));
        bufp->chgIData(oldp+263,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__imm),32);
        bufp->chgIData(oldp+264,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__rf_wd),32);
        bufp->chgIData(oldp+265,(((IData)(4U) + vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__pc)),32);
        bufp->chgIData(oldp+266,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_a),32);
        bufp->chgIData(oldp+267,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b),32);
        bufp->chgIData(oldp+268,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_c),32);
        bufp->chgBit(oldp+269,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__true_instr_we));
        bufp->chgIData(oldp+270,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__instr_reg),32);
        bufp->chgIData(oldp+271,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__d_transfer),32);
        bufp->chgIData(oldp+272,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__d_pc),32);
        bufp->chgIData(oldp+273,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__d_ipcnext),32);
        bufp->chgIData(oldp+274,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rd1),32);
        bufp->chgIData(oldp+275,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rd2),32);
        bufp->chgIData(oldp+276,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_imm),32);
        bufp->chgIData(oldp+277,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_transfer),32);
        bufp->chgIData(oldp+278,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_pc),32);
        bufp->chgIData(oldp+279,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_ipcnext),32);
        bufp->chgIData(oldp+280,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_pcnext),32);
        bufp->chgCData(oldp+281,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rd),5);
        bufp->chgCData(oldp+282,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rs1),5);
        bufp->chgCData(oldp+283,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rs2),5);
        bufp->chgCData(oldp+284,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel),4);
        bufp->chgCData(oldp+285,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_pcsel),2);
        bufp->chgCData(oldp+286,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_wdsel),2);
        bufp->chgBit(oldp+287,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_cede));
        bufp->chgBit(oldp+288,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rfwe));
        bufp->chgBit(oldp+289,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_asel));
        bufp->chgBit(oldp+290,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_bsel));
        bufp->chgBit(oldp+291,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_aluarith));
        bufp->chgBit(oldp+292,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alucin));
        bufp->chgBit(oldp+293,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_flagset));
        bufp->chgBit(oldp+294,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_flagsel));
        bufp->chgBit(oldp+295,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_memwe));
        bufp->chgBit(oldp+296,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_prediction));
        bufp->chgIData(oldp+297,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_imm),32);
        bufp->chgIData(oldp+298,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_pcnext),32);
        bufp->chgCData(oldp+299,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_aluflags),5);
        bufp->chgCData(oldp+300,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rd),5);
        bufp->chgCData(oldp+301,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rs2),5);
        bufp->chgCData(oldp+302,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_wdsel),2);
        bufp->chgBit(oldp+303,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_cede));
        bufp->chgBit(oldp+304,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rfwe));
        bufp->chgBit(oldp+305,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_flagset));
        bufp->chgBit(oldp+306,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_flagsel));
        bufp->chgIData(oldp+307,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_imm),32);
        bufp->chgIData(oldp+308,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_alu),32);
        bufp->chgIData(oldp+309,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_pcnext),32);
        bufp->chgCData(oldp+310,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_aluflags),5);
        bufp->chgCData(oldp+311,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_rd),5);
        bufp->chgCData(oldp+312,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_wdsel),2);
        bufp->chgBit(oldp+313,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_cede));
        bufp->chgBit(oldp+314,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_rfwe));
        bufp->chgBit(oldp+315,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_flagset));
        bufp->chgBit(oldp+316,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_flagsel));
        bufp->chgBit(oldp+317,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__f_en));
        bufp->chgBit(oldp+318,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__f_flush));
        bufp->chgBit(oldp+319,((1U & (~ (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_flush)))));
        bufp->chgBit(oldp+320,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_flush));
        bufp->chgBit(oldp+321,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_flush));
        bufp->chgIData(oldp+322,(((2U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_mux_rd1_sel))
                                   ? ((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_mux_rd1_sel))
                                       ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__backup_rfwd
                                       : vlSelfRef.main__DOT__u4__DOT__u3__DOT__rf_wd)
                                   : ((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_mux_rd1_sel))
                                       ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rfwd
                                       : vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_rd1))),32);
        bufp->chgIData(oldp+323,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_mux_rd2),32);
        bufp->chgIData(oldp+324,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rfwd),32);
        bufp->chgIData(oldp+325,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__backup_rfwd),32);
        bufp->chgCData(oldp+326,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__backup_rd),5);
        bufp->chgBit(oldp+327,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__backup_rfwe));
        bufp->chgBit(oldp+328,((vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                >> 0x0000001fU)));
        bufp->chgCData(oldp+329,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__d_mux_rd1_sel),2);
        bufp->chgCData(oldp+330,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_mux_rd1_sel),2);
        bufp->chgCData(oldp+331,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_mux_rd2_sel),2);
        bufp->chgCData(oldp+332,((0x0000001fU & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                                 >> 0x0000000fU))),5);
        bufp->chgBit(oldp+333,(((IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__en) 
                                & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__s_rfwe))));
        bufp->chgBit(oldp+334,((((IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__en) 
                                 | (IData)(vlSelfRef.main__DOT__u4__DOT__init)) 
                                & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__f_en))));
        bufp->chgCData(oldp+335,((0x0000001fU & ((IData)(vlSelfRef.main__DOT__u4__DOT__u2__DOT__en)
                                                  ? 
                                                 (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                                  >> 0x0000000fU)
                                                  : (IData)(vlSelfRef.main__DOT__u2_ra1)))),5);
        bufp->chgCData(oldp+336,((0x0000001fU & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                                 >> 0x00000014U))),5);
        bufp->chgIData(oldp+337,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__a_to),32);
        bufp->chgIData(oldp+338,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__b_to),32);
        bufp->chgBit(oldp+339,((IData)((2U == (3U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))))));
        bufp->chgBit(oldp+340,((IData)((1U == (3U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))))));
        bufp->chgIData(oldp+341,(((2U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))
                                   ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_16
                                   : vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_9)),32);
        bufp->chgIData(oldp+342,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_a),32);
        bufp->chgIData(oldp+343,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_b),32);
        bufp->chgBit(oldp+344,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_subtr));
        bufp->chgBit(oldp+345,(((~ ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel) 
                                    >> 3U)) & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alucin))));
        bufp->chgQData(oldp+346,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_out),33);
        bufp->chgBit(oldp+348,((1U & (((vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_a 
                                        >> 0x0000001fU) 
                                       & ((~ (IData)(
                                                     (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_out 
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
                                                   ^ 
                                                   (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__b_to 
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
        __Vtemp_4[3U] = (IData)(((((QData)((IData)(
                                                   (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__a_to 
                                                    ^ 
                                                    (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__b_to 
                                                     ^ 
                                                     (- (IData)(
                                                                (3U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))))))))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    ((vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__a_to 
                                                      & vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__b_to) 
                                                     ^ 
                                                     (- (IData)(
                                                                (3U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))))))))) 
                                 >> 0x00000020U));
        bufp->chgWData(oldp+349,(__Vtemp_4),128);
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
                                   << 0x00000020U) 
                                  | (QData)((IData)(
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
        bufp->chgWData(oldp+353,(__Vtemp_6),128);
        bufp->chgBit(oldp+357,((1U & ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel) 
                                      >> 1U))));
        bufp->chgBit(oldp+358,((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel))));
        bufp->chgCData(oldp+359,((0x0000001fU & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)),5);
        __Vtemp_9[0U] = vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_0;
        __Vtemp_9[1U] = vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_3;
        __Vtemp_9[2U] = ((4U & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)
                          ? ((((- (IData)((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT__set_1))) 
                               | (vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_3 
                                  & (- (IData)((1U 
                                                & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel)))))) 
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
                                   << 0x00000020U) 
                                  | (QData)((IData)(
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
        bufp->chgWData(oldp+360,(__Vtemp_9),160);
        __Vtemp_12[0U] = vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_13;
        __Vtemp_12[1U] = vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_15;
        __Vtemp_12[2U] = ((4U & vlSelfRef.main__DOT__u4__DOT__u3__DOT__alu_b)
                           ? ((vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_15 
                               << 4U) | (0x0000000fU 
                                         & ((vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_15 
                                             >> 0x0000001cU) 
                                            & (- (IData)(
                                                         (1U 
                                                          & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel)))))))
                           : vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_15);
        __Vtemp_12[3U] = (IData)((((QData)((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_16)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
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
                                    << 0x00000020U) 
                                   | (QData)((IData)(
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
        bufp->chgWData(oldp+365,(__Vtemp_12),160);
        bufp->chgBit(oldp+370,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT__set_1));
        bufp->chgBit(oldp+371,((((~ ((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alusel) 
                                     >> 3U)) & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__c_alucin)) 
                                | (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_subtr))));
        bufp->chgIData(oldp+372,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u3__DOT__u1__DOT__b_op),32);
        bufp->chgBit(oldp+373,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__d_rs1_dh));
        bufp->chgBit(oldp+374,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs1_dh));
        bufp->chgBit(oldp+375,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs2_dh));
        bufp->chgBit(oldp+376,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__stall_d));
        bufp->chgBit(oldp+377,(((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__d_rs1_dh) 
                                & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_0))));
        bufp->chgBit(oldp+378,(((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs1_dh) 
                                & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_1))));
        bufp->chgBit(oldp+379,(((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs2_dh) 
                                & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_3))));
        bufp->chgBit(oldp+380,(((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs1_dh) 
                                & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_2))));
        bufp->chgBit(oldp+381,(((IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs2_dh) 
                                & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_4))));
        bufp->chgBit(oldp+382,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u4__DOT__prev_stallc));
        bufp->chgIData(oldp+383,(((((0x0000ff00U & 
                                     (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      << 8U)) | (0x000000ffU 
                                                 & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa)) 
                                   << 0x00000010U) 
                                  | ((0x0000ff00U & 
                                      (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                       << 8U)) | (0x000000ffU 
                                                  & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa)))),32);
        bufp->chgIData(oldp+384,(((((0x0000ff00U & 
                                     (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      << 8U)) | (0x000000ffU 
                                                 & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob)) 
                                   << 0x00000010U) 
                                  | ((0x0000ff00U & 
                                      (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                       << 8U)) | (0x000000ffU 
                                                  & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob)))),32);
        __Vtemp_13[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa)) 
                                   << 0x00000012U) 
                                  | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa))));
        __Vtemp_13[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa)) 
                                     << 0x00000012U) 
                                    | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa)))) 
                           << 4U) | (IData)(((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa)) 
                                               << 0x00000012U) 
                                              | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa))) 
                                             >> 0x00000020U)));
        __Vtemp_13[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa)) 
                                     << 0x00000012U) 
                                    | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa)))) 
                           >> 0x0000001cU) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa)) 
                                                         << 0x00000012U) 
                                                        | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa))) 
                                                       >> 0x00000020U)) 
                                              << 4U));
        bufp->chgWData(oldp+385,(__Vtemp_13),72);
        __Vtemp_14[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob)) 
                                   << 0x00000012U) 
                                  | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob))));
        __Vtemp_14[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob)) 
                                     << 0x00000012U) 
                                    | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob)))) 
                           << 4U) | (IData)(((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob)) 
                                               << 0x00000012U) 
                                              | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob))) 
                                             >> 0x00000020U)));
        __Vtemp_14[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob)) 
                                     << 0x00000012U) 
                                    | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob)))) 
                           >> 0x0000001cU) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob)) 
                                                         << 0x00000012U) 
                                                        | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob))) 
                                                       >> 0x00000020U)) 
                                              << 4U));
        bufp->chgWData(oldp+388,(__Vtemp_14),72);
        bufp->chgBit(oldp+391,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa)));
        bufp->chgBit(oldp+392,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 1U))));
        bufp->chgBit(oldp+393,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 2U))));
        bufp->chgBit(oldp+394,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 3U))));
        bufp->chgBit(oldp+395,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 4U))));
        bufp->chgBit(oldp+396,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 5U))));
        bufp->chgBit(oldp+397,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 6U))));
        bufp->chgBit(oldp+398,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 7U))));
        bufp->chgBit(oldp+399,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 8U))));
        bufp->chgBit(oldp+400,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 9U))));
        bufp->chgBit(oldp+401,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+402,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+403,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+404,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+405,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+406,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+407,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+408,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 0x00000011U))));
        bufp->chgBit(oldp+409,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob)));
        bufp->chgBit(oldp+410,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 1U))));
        bufp->chgBit(oldp+411,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 2U))));
        bufp->chgBit(oldp+412,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 3U))));
        bufp->chgBit(oldp+413,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 4U))));
        bufp->chgBit(oldp+414,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 5U))));
        bufp->chgBit(oldp+415,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 6U))));
        bufp->chgBit(oldp+416,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 7U))));
        bufp->chgBit(oldp+417,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 8U))));
        bufp->chgBit(oldp+418,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 9U))));
        bufp->chgBit(oldp+419,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+420,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+421,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+422,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+423,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+424,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+425,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+426,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 0x00000011U))));
        bufp->chgIData(oldp+427,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa),18);
        bufp->chgIData(oldp+428,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob),18);
        bufp->chgBit(oldp+429,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa)));
        bufp->chgBit(oldp+430,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 1U))));
        bufp->chgBit(oldp+431,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 2U))));
        bufp->chgBit(oldp+432,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 3U))));
        bufp->chgBit(oldp+433,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 4U))));
        bufp->chgBit(oldp+434,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 5U))));
        bufp->chgBit(oldp+435,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 6U))));
        bufp->chgBit(oldp+436,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 7U))));
        bufp->chgBit(oldp+437,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 8U))));
        bufp->chgBit(oldp+438,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 9U))));
        bufp->chgBit(oldp+439,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+440,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+441,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+442,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+443,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+444,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+445,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+446,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 0x00000011U))));
        bufp->chgBit(oldp+447,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob)));
        bufp->chgBit(oldp+448,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 1U))));
        bufp->chgBit(oldp+449,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 2U))));
        bufp->chgBit(oldp+450,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 3U))));
        bufp->chgBit(oldp+451,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 4U))));
        bufp->chgBit(oldp+452,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 5U))));
        bufp->chgBit(oldp+453,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 6U))));
        bufp->chgBit(oldp+454,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 7U))));
        bufp->chgBit(oldp+455,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 8U))));
        bufp->chgBit(oldp+456,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 9U))));
        bufp->chgBit(oldp+457,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+458,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+459,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+460,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+461,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+462,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+463,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+464,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 0x00000011U))));
        bufp->chgIData(oldp+465,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa),18);
        bufp->chgIData(oldp+466,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob),18);
        bufp->chgBit(oldp+467,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa)));
        bufp->chgBit(oldp+468,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 1U))));
        bufp->chgBit(oldp+469,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 2U))));
        bufp->chgBit(oldp+470,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 3U))));
        bufp->chgBit(oldp+471,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 4U))));
        bufp->chgBit(oldp+472,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 5U))));
        bufp->chgBit(oldp+473,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 6U))));
        bufp->chgBit(oldp+474,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 7U))));
        bufp->chgBit(oldp+475,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 8U))));
        bufp->chgBit(oldp+476,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 9U))));
        bufp->chgBit(oldp+477,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+478,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+479,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+480,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+481,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+482,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+483,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+484,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 0x00000011U))));
        bufp->chgBit(oldp+485,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob)));
        bufp->chgBit(oldp+486,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 1U))));
        bufp->chgBit(oldp+487,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 2U))));
        bufp->chgBit(oldp+488,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 3U))));
        bufp->chgBit(oldp+489,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 4U))));
        bufp->chgBit(oldp+490,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 5U))));
        bufp->chgBit(oldp+491,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 6U))));
        bufp->chgBit(oldp+492,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 7U))));
        bufp->chgBit(oldp+493,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 8U))));
        bufp->chgBit(oldp+494,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 9U))));
        bufp->chgBit(oldp+495,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+496,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+497,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+498,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+499,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+500,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+501,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+502,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 0x00000011U))));
        bufp->chgIData(oldp+503,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa),18);
        bufp->chgIData(oldp+504,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob),18);
        bufp->chgBit(oldp+505,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa)));
        bufp->chgBit(oldp+506,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 1U))));
        bufp->chgBit(oldp+507,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 2U))));
        bufp->chgBit(oldp+508,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 3U))));
        bufp->chgBit(oldp+509,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 4U))));
        bufp->chgBit(oldp+510,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 5U))));
        bufp->chgBit(oldp+511,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 6U))));
        bufp->chgBit(oldp+512,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 7U))));
        bufp->chgBit(oldp+513,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 8U))));
        bufp->chgBit(oldp+514,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 9U))));
        bufp->chgBit(oldp+515,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+516,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+517,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+518,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+519,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+520,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+521,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+522,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 0x00000011U))));
        bufp->chgBit(oldp+523,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob)));
        bufp->chgBit(oldp+524,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 1U))));
        bufp->chgBit(oldp+525,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 2U))));
        bufp->chgBit(oldp+526,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 3U))));
        bufp->chgBit(oldp+527,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 4U))));
        bufp->chgBit(oldp+528,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 5U))));
        bufp->chgBit(oldp+529,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 6U))));
        bufp->chgBit(oldp+530,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 7U))));
        bufp->chgBit(oldp+531,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 8U))));
        bufp->chgBit(oldp+532,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 9U))));
        bufp->chgBit(oldp+533,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+534,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+535,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+536,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+537,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+538,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+539,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+540,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 0x00000011U))));
        bufp->chgIData(oldp+541,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa),18);
        bufp->chgIData(oldp+542,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob),18);
        bufp->chgIData(oldp+543,(((((0x0000ff00U & 
                                     (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      << 8U)) | (0x000000ffU 
                                                 & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa)) 
                                   << 0x00000010U) 
                                  | ((0x0000ff00U & 
                                      (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                       << 8U)) | (0x000000ffU 
                                                  & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa)))),32);
        bufp->chgIData(oldp+544,(((((0x0000ff00U & 
                                     (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      << 8U)) | (0x000000ffU 
                                                 & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob)) 
                                   << 0x00000010U) 
                                  | ((0x0000ff00U & 
                                      (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                       << 8U)) | (0x000000ffU 
                                                  & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob)))),32);
        __Vtemp_15[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa)) 
                                   << 0x00000012U) 
                                  | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa))));
        __Vtemp_15[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa)) 
                                     << 0x00000012U) 
                                    | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa)))) 
                           << 4U) | (IData)(((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa)) 
                                               << 0x00000012U) 
                                              | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa))) 
                                             >> 0x00000020U)));
        __Vtemp_15[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa)) 
                                     << 0x00000012U) 
                                    | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa)))) 
                           >> 0x0000001cU) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa)) 
                                                         << 0x00000012U) 
                                                        | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa))) 
                                                       >> 0x00000020U)) 
                                              << 4U));
        bufp->chgWData(oldp+545,(__Vtemp_15),72);
        __Vtemp_16[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob)) 
                                   << 0x00000012U) 
                                  | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob))));
        __Vtemp_16[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob)) 
                                     << 0x00000012U) 
                                    | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob)))) 
                           << 4U) | (IData)(((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob)) 
                                               << 0x00000012U) 
                                              | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob))) 
                                             >> 0x00000020U)));
        __Vtemp_16[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob)) 
                                     << 0x00000012U) 
                                    | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob)))) 
                           >> 0x0000001cU) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob)) 
                                                         << 0x00000012U) 
                                                        | (QData)((IData)(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob))) 
                                                       >> 0x00000020U)) 
                                              << 4U));
        bufp->chgWData(oldp+548,(__Vtemp_16),72);
        bufp->chgBit(oldp+551,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa)));
        bufp->chgBit(oldp+552,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 1U))));
        bufp->chgBit(oldp+553,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 2U))));
        bufp->chgBit(oldp+554,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 3U))));
        bufp->chgBit(oldp+555,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 4U))));
        bufp->chgBit(oldp+556,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 5U))));
        bufp->chgBit(oldp+557,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 6U))));
        bufp->chgBit(oldp+558,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 7U))));
        bufp->chgBit(oldp+559,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 8U))));
        bufp->chgBit(oldp+560,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 9U))));
        bufp->chgBit(oldp+561,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+562,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+563,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+564,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+565,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+566,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+567,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+568,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa 
                                      >> 0x00000011U))));
        bufp->chgBit(oldp+569,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob)));
        bufp->chgBit(oldp+570,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 1U))));
        bufp->chgBit(oldp+571,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 2U))));
        bufp->chgBit(oldp+572,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 3U))));
        bufp->chgBit(oldp+573,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 4U))));
        bufp->chgBit(oldp+574,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 5U))));
        bufp->chgBit(oldp+575,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 6U))));
        bufp->chgBit(oldp+576,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 7U))));
        bufp->chgBit(oldp+577,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 8U))));
        bufp->chgBit(oldp+578,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 9U))));
        bufp->chgBit(oldp+579,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+580,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+581,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+582,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+583,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+584,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+585,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+586,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob 
                                      >> 0x00000011U))));
        bufp->chgIData(oldp+587,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa),18);
        bufp->chgIData(oldp+588,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob),18);
        bufp->chgBit(oldp+589,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa)));
        bufp->chgBit(oldp+590,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 1U))));
        bufp->chgBit(oldp+591,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 2U))));
        bufp->chgBit(oldp+592,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 3U))));
        bufp->chgBit(oldp+593,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 4U))));
        bufp->chgBit(oldp+594,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 5U))));
        bufp->chgBit(oldp+595,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 6U))));
        bufp->chgBit(oldp+596,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 7U))));
        bufp->chgBit(oldp+597,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 8U))));
        bufp->chgBit(oldp+598,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 9U))));
        bufp->chgBit(oldp+599,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+600,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+601,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+602,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+603,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+604,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+605,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+606,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa 
                                      >> 0x00000011U))));
        bufp->chgBit(oldp+607,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob)));
        bufp->chgBit(oldp+608,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 1U))));
        bufp->chgBit(oldp+609,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 2U))));
        bufp->chgBit(oldp+610,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 3U))));
        bufp->chgBit(oldp+611,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 4U))));
        bufp->chgBit(oldp+612,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 5U))));
        bufp->chgBit(oldp+613,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 6U))));
        bufp->chgBit(oldp+614,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 7U))));
        bufp->chgBit(oldp+615,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 8U))));
        bufp->chgBit(oldp+616,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 9U))));
        bufp->chgBit(oldp+617,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+618,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+619,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+620,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+621,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+622,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+623,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+624,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob 
                                      >> 0x00000011U))));
        bufp->chgIData(oldp+625,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa),18);
        bufp->chgIData(oldp+626,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob),18);
        bufp->chgBit(oldp+627,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa)));
        bufp->chgBit(oldp+628,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 1U))));
        bufp->chgBit(oldp+629,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 2U))));
        bufp->chgBit(oldp+630,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 3U))));
        bufp->chgBit(oldp+631,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 4U))));
        bufp->chgBit(oldp+632,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 5U))));
        bufp->chgBit(oldp+633,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 6U))));
        bufp->chgBit(oldp+634,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 7U))));
        bufp->chgBit(oldp+635,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 8U))));
        bufp->chgBit(oldp+636,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 9U))));
        bufp->chgBit(oldp+637,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+638,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+639,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+640,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+641,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+642,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+643,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+644,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa 
                                      >> 0x00000011U))));
        bufp->chgBit(oldp+645,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob)));
        bufp->chgBit(oldp+646,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 1U))));
        bufp->chgBit(oldp+647,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 2U))));
        bufp->chgBit(oldp+648,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 3U))));
        bufp->chgBit(oldp+649,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 4U))));
        bufp->chgBit(oldp+650,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 5U))));
        bufp->chgBit(oldp+651,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 6U))));
        bufp->chgBit(oldp+652,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 7U))));
        bufp->chgBit(oldp+653,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 8U))));
        bufp->chgBit(oldp+654,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 9U))));
        bufp->chgBit(oldp+655,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+656,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+657,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+658,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+659,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+660,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+661,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+662,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob 
                                      >> 0x00000011U))));
        bufp->chgIData(oldp+663,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa),18);
        bufp->chgIData(oldp+664,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob),18);
        bufp->chgBit(oldp+665,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa)));
        bufp->chgBit(oldp+666,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 1U))));
        bufp->chgBit(oldp+667,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 2U))));
        bufp->chgBit(oldp+668,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 3U))));
        bufp->chgBit(oldp+669,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 4U))));
        bufp->chgBit(oldp+670,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 5U))));
        bufp->chgBit(oldp+671,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 6U))));
        bufp->chgBit(oldp+672,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 7U))));
        bufp->chgBit(oldp+673,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 8U))));
        bufp->chgBit(oldp+674,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 9U))));
        bufp->chgBit(oldp+675,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+676,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+677,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+678,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+679,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+680,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+681,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+682,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa 
                                      >> 0x00000011U))));
        bufp->chgBit(oldp+683,((1U & vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob)));
        bufp->chgBit(oldp+684,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 1U))));
        bufp->chgBit(oldp+685,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 2U))));
        bufp->chgBit(oldp+686,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 3U))));
        bufp->chgBit(oldp+687,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 4U))));
        bufp->chgBit(oldp+688,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 5U))));
        bufp->chgBit(oldp+689,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 6U))));
        bufp->chgBit(oldp+690,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 7U))));
        bufp->chgBit(oldp+691,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 8U))));
        bufp->chgBit(oldp+692,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 9U))));
        bufp->chgBit(oldp+693,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+694,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+695,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+696,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+697,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+698,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+699,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+700,((1U & (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob 
                                      >> 0x00000011U))));
        bufp->chgIData(oldp+701,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa),18);
        bufp->chgIData(oldp+702,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob),18);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+703,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[31]),32);
        bufp->chgIData(oldp+704,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[30]),32);
        bufp->chgIData(oldp+705,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[29]),32);
        bufp->chgIData(oldp+706,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[28]),32);
        bufp->chgIData(oldp+707,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[27]),32);
        bufp->chgIData(oldp+708,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[26]),32);
        bufp->chgIData(oldp+709,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[25]),32);
        bufp->chgIData(oldp+710,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[24]),32);
        bufp->chgIData(oldp+711,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[23]),32);
        bufp->chgIData(oldp+712,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[22]),32);
        bufp->chgIData(oldp+713,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[21]),32);
        bufp->chgIData(oldp+714,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[20]),32);
        bufp->chgIData(oldp+715,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[19]),32);
        bufp->chgIData(oldp+716,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[18]),32);
        bufp->chgIData(oldp+717,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[17]),32);
        bufp->chgIData(oldp+718,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[16]),32);
        bufp->chgIData(oldp+719,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[15]),32);
        bufp->chgIData(oldp+720,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[14]),32);
        bufp->chgIData(oldp+721,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[13]),32);
        bufp->chgIData(oldp+722,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[12]),32);
        bufp->chgIData(oldp+723,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[11]),32);
        bufp->chgIData(oldp+724,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[10]),32);
        bufp->chgIData(oldp+725,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[9]),32);
        bufp->chgIData(oldp+726,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[8]),32);
        bufp->chgIData(oldp+727,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[7]),32);
        bufp->chgIData(oldp+728,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[6]),32);
        bufp->chgIData(oldp+729,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[5]),32);
        bufp->chgIData(oldp+730,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[4]),32);
        bufp->chgIData(oldp+731,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[3]),32);
        bufp->chgIData(oldp+732,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[2]),32);
        bufp->chgIData(oldp+733,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[1]),32);
        bufp->chgIData(oldp+734,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x[0]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+735,(vlSelfRef.main__DOT__u3_instr_ad),19);
        bufp->chgIData(oldp+736,((0x0007ffffU & vlSelfRef.main__DOT__u4__DOT__pc_in)),19);
        bufp->chgIData(oldp+737,(vlSelfRef.main__DOT__rf_rd1),32);
        bufp->chgBit(oldp+738,(vlSelfRef.main__DOT__u3__DOT__ioverlap));
        bufp->chgQData(oldp+739,(vlSelfRef.main__DOT__u3__DOT__blk_iad),52);
        bufp->chgCData(oldp+741,(vlSelfRef.main__DOT__u3__DOT__blk_iofst),8);
        bufp->chgCData(oldp+742,((0x0000003fU & ((IData)(1U) 
                                                 + 
                                                 (vlSelfRef.main__DOT__u3_instr_ad 
                                                  >> 0x0000000dU)))),6);
        bufp->chgQData(oldp+743,(vlSelfRef.main__DOT__u3__DOT__inblk_decoder),64);
        bufp->chgIData(oldp+745,(vlSelfRef.main__DOT__u4__DOT__pc_in),32);
        bufp->chgIData(oldp+746,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__transfer),32);
        bufp->chgIData(oldp+747,((0xfffffffeU & vlSelfRef.main__DOT__u4__DOT__pc_in)),32);
        bufp->chgQData(oldp+748,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad),52);
        bufp->chgQData(oldp+750,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__ebr_adb),56);
        bufp->chgBit(oldp+752,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 2U)))));
        bufp->chgBit(oldp+753,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 3U)))));
        bufp->chgBit(oldp+754,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 4U)))));
        bufp->chgBit(oldp+755,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 5U)))));
        bufp->chgBit(oldp+756,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 6U)))));
        bufp->chgBit(oldp+757,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 7U)))));
        bufp->chgBit(oldp+758,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 8U)))));
        bufp->chgBit(oldp+759,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 9U)))));
        bufp->chgBit(oldp+760,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x0000000aU)))));
        bufp->chgBit(oldp+761,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x0000000bU)))));
        bufp->chgBit(oldp+762,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x0000000cU)))));
        bufp->chgSData(oldp+763,((0x00003ff8U & ((IData)(
                                                         (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                                          >> 2U)) 
                                                 << 3U))),14);
        bufp->chgBit(oldp+764,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x0000000fU)))));
        bufp->chgBit(oldp+765,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x00000010U)))));
        bufp->chgBit(oldp+766,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x00000011U)))));
        bufp->chgBit(oldp+767,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x00000012U)))));
        bufp->chgBit(oldp+768,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x00000013U)))));
        bufp->chgBit(oldp+769,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x00000014U)))));
        bufp->chgBit(oldp+770,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x00000015U)))));
        bufp->chgBit(oldp+771,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x00000016U)))));
        bufp->chgBit(oldp+772,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x00000017U)))));
        bufp->chgBit(oldp+773,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x00000018U)))));
        bufp->chgBit(oldp+774,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x00000019U)))));
        bufp->chgSData(oldp+775,((0x00003ff8U & ((IData)(
                                                         (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                                          >> 0x0000000fU)) 
                                                 << 3U))),14);
        bufp->chgBit(oldp+776,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x0000001cU)))));
        bufp->chgBit(oldp+777,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x0000001dU)))));
        bufp->chgBit(oldp+778,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x0000001eU)))));
        bufp->chgBit(oldp+779,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x0000001fU)))));
        bufp->chgBit(oldp+780,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x00000020U)))));
        bufp->chgBit(oldp+781,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x00000021U)))));
        bufp->chgBit(oldp+782,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x00000022U)))));
        bufp->chgBit(oldp+783,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x00000023U)))));
        bufp->chgBit(oldp+784,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x00000024U)))));
        bufp->chgBit(oldp+785,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x00000025U)))));
        bufp->chgBit(oldp+786,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x00000026U)))));
        bufp->chgSData(oldp+787,((0x00003ff8U & ((IData)(
                                                         (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                                          >> 0x0000001cU)) 
                                                 << 3U))),14);
        bufp->chgBit(oldp+788,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x00000029U)))));
        bufp->chgBit(oldp+789,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x0000002aU)))));
        bufp->chgBit(oldp+790,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x0000002bU)))));
        bufp->chgBit(oldp+791,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x0000002cU)))));
        bufp->chgBit(oldp+792,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x0000002dU)))));
        bufp->chgBit(oldp+793,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x0000002eU)))));
        bufp->chgBit(oldp+794,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x0000002fU)))));
        bufp->chgBit(oldp+795,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x00000030U)))));
        bufp->chgBit(oldp+796,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x00000031U)))));
        bufp->chgBit(oldp+797,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x00000032U)))));
        bufp->chgBit(oldp+798,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.blk_iad 
                                              >> 0x00000033U)))));
        bufp->chgSData(oldp+799,((0x00003fffU & (IData)(
                                                        (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__PVT__ebr_adb 
                                                         >> 0x0000002aU)))),14);
        bufp->chgQData(oldp+800,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad),52);
        bufp->chgQData(oldp+802,(vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__ebr_adb),56);
        bufp->chgBit(oldp+804,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 2U)))));
        bufp->chgBit(oldp+805,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 3U)))));
        bufp->chgBit(oldp+806,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 4U)))));
        bufp->chgBit(oldp+807,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 5U)))));
        bufp->chgBit(oldp+808,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 6U)))));
        bufp->chgBit(oldp+809,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 7U)))));
        bufp->chgBit(oldp+810,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 8U)))));
        bufp->chgBit(oldp+811,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 9U)))));
        bufp->chgBit(oldp+812,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x0000000aU)))));
        bufp->chgBit(oldp+813,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x0000000bU)))));
        bufp->chgBit(oldp+814,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x0000000cU)))));
        bufp->chgSData(oldp+815,((0x00003ff8U & ((IData)(
                                                         (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                                          >> 2U)) 
                                                 << 3U))),14);
        bufp->chgBit(oldp+816,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x0000000fU)))));
        bufp->chgBit(oldp+817,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x00000010U)))));
        bufp->chgBit(oldp+818,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x00000011U)))));
        bufp->chgBit(oldp+819,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x00000012U)))));
        bufp->chgBit(oldp+820,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x00000013U)))));
        bufp->chgBit(oldp+821,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x00000014U)))));
        bufp->chgBit(oldp+822,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x00000015U)))));
        bufp->chgBit(oldp+823,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x00000016U)))));
        bufp->chgBit(oldp+824,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x00000017U)))));
        bufp->chgBit(oldp+825,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x00000018U)))));
        bufp->chgBit(oldp+826,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x00000019U)))));
        bufp->chgSData(oldp+827,((0x00003ff8U & ((IData)(
                                                         (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                                          >> 0x0000000fU)) 
                                                 << 3U))),14);
        bufp->chgBit(oldp+828,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x0000001cU)))));
        bufp->chgBit(oldp+829,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x0000001dU)))));
        bufp->chgBit(oldp+830,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x0000001eU)))));
        bufp->chgBit(oldp+831,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x0000001fU)))));
        bufp->chgBit(oldp+832,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x00000020U)))));
        bufp->chgBit(oldp+833,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x00000021U)))));
        bufp->chgBit(oldp+834,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x00000022U)))));
        bufp->chgBit(oldp+835,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x00000023U)))));
        bufp->chgBit(oldp+836,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x00000024U)))));
        bufp->chgBit(oldp+837,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x00000025U)))));
        bufp->chgBit(oldp+838,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x00000026U)))));
        bufp->chgSData(oldp+839,((0x00003ff8U & ((IData)(
                                                         (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                                          >> 0x0000001cU)) 
                                                 << 3U))),14);
        bufp->chgBit(oldp+840,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x00000029U)))));
        bufp->chgBit(oldp+841,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x0000002aU)))));
        bufp->chgBit(oldp+842,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x0000002bU)))));
        bufp->chgBit(oldp+843,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x0000002cU)))));
        bufp->chgBit(oldp+844,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x0000002dU)))));
        bufp->chgBit(oldp+845,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x0000002eU)))));
        bufp->chgBit(oldp+846,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x0000002fU)))));
        bufp->chgBit(oldp+847,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x00000030U)))));
        bufp->chgBit(oldp+848,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x00000031U)))));
        bufp->chgBit(oldp+849,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x00000032U)))));
        bufp->chgBit(oldp+850,((1U & (IData)((vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.blk_iad 
                                              >> 0x00000033U)))));
        bufp->chgSData(oldp+851,((0x00003fffU & (IData)(
                                                        (vlSymsp->TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__PVT__ebr_adb 
                                                         >> 0x0000002aU)))),14);
    }
    bufp->chgBit(oldp+852,(vlSelfRef.clk));
    bufp->chgBit(oldp+853,(vlSelfRef.we));
    bufp->chgBit(oldp+854,(vlSelfRef.toggle));
    bufp->chgCData(oldp+855,(vlSelfRef.bsel),4);
    bufp->chgIData(oldp+856,(vlSelfRef.ad),19);
    bufp->chgIData(oldp+857,(vlSelfRef.wd),32);
    bufp->chgBit(oldp+858,(vlSelfRef.cpu_cede));
    bufp->chgIData(oldp+859,(vlSelfRef.main__DOT__u4__DOT__u3__DOT__u2__DOT__x
                             [(0x0000001fU & (vlSelfRef.main__DOT__u4__DOT__u2__DOT__instr 
                                              >> 0x00000014U))]),32);
    bufp->chgIData(oldp+860,(((2U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__d_mux_rd1_sel))
                               ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__rf_wd
                               : ((1U & (IData)(vlSelfRef.main__DOT__u4__DOT__u3__DOT__d_mux_rd1_sel))
                                   ? vlSelfRef.main__DOT__u4__DOT__u3__DOT__m_rfwd
                                   : vlSelfRef.main__DOT__rf_rd1))),32);
}

void Vmain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_cleanup\n"); );
    // Body
    Vmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain___024root*>(voidSelf);
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
