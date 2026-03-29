// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "Vmain__pch.h"

void Vmain_reduced_memblk___ctor_var_reset(Vmain_reduced_memblk* vlSelf);

Vmain_reduced_memblk::Vmain_reduced_memblk() = default;
Vmain_reduced_memblk::~Vmain_reduced_memblk() = default;

void Vmain_reduced_memblk::ctor(Vmain__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vmain_reduced_memblk___ctor_var_reset(this);
}

void Vmain_reduced_memblk::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vmain_reduced_memblk::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
