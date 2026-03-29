// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmain__pch.h"

Vmain__Syms::Vmain__Syms(VerilatedContext* contextp, const char* namep, Vmain* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(578);
    // Setup sub module instances
    TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.ctor(this, "main.u3.genblk1[0].blk");
    TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.ctor(this, "main.u3.genblk1[1].blk");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk = &TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk;
    TOP.__PVT__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk = &TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.__Vconfigure(true);
    TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.__Vconfigure(false);
    // Setup scopes
}

Vmain__Syms::~Vmain__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk.dtor();
    TOP__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk.dtor();
}
