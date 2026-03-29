// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmain.h for the primary calling header

#ifndef VERILATED_VMAIN_REDUCED_MEMBLK_H_
#define VERILATED_VMAIN_REDUCED_MEMBLK_H_  // guard

#include "verilated.h"


class Vmain__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmain_reduced_memblk final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ clk;
    CData/*0:0*/ we;
    CData/*3:0*/ r_bsel;
    IData/*31:0*/ blk_di;
    IData/*31:0*/ ebr_a0;
    IData/*31:0*/ ebr_b0;
    QData/*51:0*/ blk_ad;
    QData/*51:0*/ blk_iad;
    QData/*55:0*/ __PVT__ebr_ada;
    QData/*55:0*/ __PVT__ebr_adb;
    IData/*17:0*/ __PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__doa;
    IData/*17:0*/ __PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__dob;
    IData/*17:0*/ __PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__doa;
    IData/*17:0*/ __PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__dob;
    IData/*17:0*/ __PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__doa;
    IData/*17:0*/ __PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__dob;
    IData/*17:0*/ __PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__doa;
    IData/*17:0*/ __PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__dob;
    VlUnpacked<SData/*8:0*/, 2048> __PVT__genblk1__BRA__0__KET____DOT__ebr__DOT__mem;
    VlUnpacked<SData/*8:0*/, 2048> __PVT__genblk1__BRA__1__KET____DOT__ebr__DOT__mem;
    VlUnpacked<SData/*8:0*/, 2048> __PVT__genblk1__BRA__2__KET____DOT__ebr__DOT__mem;
    VlUnpacked<SData/*8:0*/, 2048> __PVT__genblk1__BRA__3__KET____DOT__ebr__DOT__mem;

    // INTERNAL VARIABLES
    Vmain__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vmain_reduced_memblk();
    ~Vmain_reduced_memblk();
    void ctor(Vmain__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vmain_reduced_memblk);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
