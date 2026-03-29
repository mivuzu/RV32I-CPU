// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmain.h for the primary calling header

#ifndef VERILATED_VMAIN___024ROOT_H_
#define VERILATED_VMAIN___024ROOT_H_  // guard

#include "verilated.h"
class Vmain_reduced_memblk;


class Vmain__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmain___024root final {
  public:
    // CELLS
    Vmain_reduced_memblk* __PVT__main__DOT__u3__DOT__genblk1__BRA__0__KET____DOT__blk;
    Vmain_reduced_memblk* __PVT__main__DOT__u3__DOT__genblk1__BRA__1__KET____DOT__blk;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(we,0,0);
        VL_IN8(toggle,0,0);
        VL_IN8(bsel,3,0);
        VL_OUT8(cpu_cede,0,0);
        CData/*0:0*/ main__DOT__state;
        CData/*0:0*/ main__DOT__u3_we;
        CData/*3:0*/ main__DOT__u3_bsel;
        CData/*0:0*/ main__DOT__cpu_adsel;
        CData/*3:0*/ main__DOT__uart_rx_state;
        CData/*3:0*/ main__DOT__uart_tx_state;
        CData/*0:0*/ main__DOT__u2_ra1;
        CData/*0:0*/ main__DOT__u3__DOT__overlap;
        CData/*0:0*/ main__DOT__u3__DOT__ioverlap;
        QData/*63:0*/ main__DOT__u3__DOT__ebr_a0;
        QData/*63:0*/ main__DOT__u3__DOT__ebr_b0;
        IData/*23:0*/ main__DOT__u3__DOT__overlap_blk_di;
        CData/*7:0*/ main__DOT__u3__DOT__blk_ofst;
        CData/*7:0*/ main__DOT__u3__DOT__blk_iofst;
        CData/*3:0*/ main__DOT__u3__DOT__r_bsel;
        CData/*3:0*/ main__DOT__u3__DOT__n_bsel;
        CData/*0:0*/ main__DOT__u3__DOT__p_overlap;
        CData/*0:0*/ main__DOT__u3__DOT__p_ioverlap;
        CData/*5:0*/ main__DOT__u3__DOT__p_blk;
        CData/*5:0*/ main__DOT__u3__DOT__p_iblk;
        CData/*5:0*/ main__DOT__u3__DOT__p_nblk;
        CData/*5:0*/ main__DOT__u3__DOT__p_inblk;
        CData/*1:0*/ main__DOT__u3__DOT__p_ad;
        CData/*1:0*/ main__DOT__u3__DOT__p_iad;
        IData/*31:0*/ main__DOT__u3__DOT__blk_a0;
        IData/*31:0*/ main__DOT__u3__DOT__blk_b0;
        IData/*23:0*/ main__DOT__u3__DOT__nblk_a0;
        IData/*23:0*/ main__DOT__u3__DOT__nblk_b0;
        CData/*0:0*/ main__DOT__u3__DOT____VdfgRegularize_h66142285_0_0;
        CData/*0:0*/ main__DOT__u3__DOT____VdfgRegularize_h66142285_0_1;
        CData/*0:0*/ main__DOT__u4__DOT__prev_state;
        CData/*0:0*/ main__DOT__u4__DOT__init;
        CData/*1:0*/ main__DOT__u4__DOT__pc_sel;
        CData/*1:0*/ main__DOT__u4__DOT__wd_sel;
        CData/*2:0*/ main__DOT__u4__DOT__format;
        CData/*3:0*/ main__DOT__u4__DOT__alu_sel;
        CData/*0:0*/ main__DOT__u4__DOT__m_memwe;
        CData/*2:0*/ main__DOT__u4__DOT__c_funct3;
        CData/*2:0*/ main__DOT__u4__DOT__m_funct3;
        CData/*2:0*/ main__DOT__u4__DOT__s_funct3;
        CData/*0:0*/ main__DOT__u4__DOT__cede;
        CData/*0:0*/ main__DOT__u4__DOT__mem_we;
        CData/*0:0*/ main__DOT__u4__DOT__instr_we;
        CData/*0:0*/ main__DOT__u4__DOT__rf_we;
        CData/*0:0*/ main__DOT__u4__DOT__pc_we;
        CData/*0:0*/ main__DOT__u4__DOT__a_sel;
        CData/*0:0*/ main__DOT__u4__DOT__b_sel;
        CData/*0:0*/ main__DOT__u4__DOT__alu_cin;
        CData/*0:0*/ main__DOT__u4__DOT__alu_arith;
        CData/*0:0*/ main__DOT__u4__DOT__flag_sel;
        CData/*0:0*/ main__DOT__u4__DOT__branch;
        CData/*0:0*/ main__DOT__u4__DOT__u2__DOT__en;
        CData/*1:0*/ main__DOT__u4__DOT__u2__DOT__alu_op;
        CData/*5:0*/ main__DOT__u4__DOT__u2__DOT__u1__DOT__main_decoder;
        CData/*0:0*/ main__DOT__u4__DOT__u2__DOT__u1__DOT__iflag_set;
        CData/*0:0*/ main__DOT__u4__DOT__u2__DOT__u1__DOT__iflag_sel;
        CData/*4:0*/ main__DOT__u4__DOT__u2__DOT__u2__DOT__alu_flags;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__true_instr_we;
        CData/*4:0*/ main__DOT__u4__DOT__u3__DOT__c_rd;
    };
    struct {
        CData/*4:0*/ main__DOT__u4__DOT__u3__DOT__c_rs1;
        CData/*4:0*/ main__DOT__u4__DOT__u3__DOT__c_rs2;
        CData/*3:0*/ main__DOT__u4__DOT__u3__DOT__c_alusel;
        CData/*1:0*/ main__DOT__u4__DOT__u3__DOT__c_pcsel;
        CData/*1:0*/ main__DOT__u4__DOT__u3__DOT__c_wdsel;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__c_cede;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__c_rfwe;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__c_asel;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__c_bsel;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__c_aluarith;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__c_alucin;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__c_flagset;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__c_flagsel;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__c_memwe;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__c_prediction;
        CData/*4:0*/ main__DOT__u4__DOT__u3__DOT__m_aluflags;
        CData/*4:0*/ main__DOT__u4__DOT__u3__DOT__m_rd;
        CData/*4:0*/ main__DOT__u4__DOT__u3__DOT__m_rs2;
        CData/*1:0*/ main__DOT__u4__DOT__u3__DOT__m_wdsel;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__m_cede;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__m_rfwe;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__m_flagset;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__m_flagsel;
        CData/*4:0*/ main__DOT__u4__DOT__u3__DOT__s_aluflags;
        CData/*4:0*/ main__DOT__u4__DOT__u3__DOT__s_rd;
        CData/*1:0*/ main__DOT__u4__DOT__u3__DOT__s_wdsel;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__s_cede;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__s_rfwe;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__s_flagset;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__s_flagsel;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__s_validrd;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__f_en;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__f_flush;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__c_flush;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__m_flush;
        CData/*4:0*/ main__DOT__u4__DOT__u3__DOT__backup_rd;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__backup_rfwe;
        CData/*1:0*/ main__DOT__u4__DOT__u3__DOT__d_mux_rd1_sel;
        CData/*1:0*/ main__DOT__u4__DOT__u3__DOT__c_mux_rd1_sel;
        CData/*1:0*/ main__DOT__u4__DOT__u3__DOT__c_mux_rd2_sel;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_subtr;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT__set_1;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__u4__DOT__d_rs1_dh;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs1_dh;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__u4__DOT__c_rs2_dh;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__u4__DOT__stall_d;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__u4__DOT__prev_stallc;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_0;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_1;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_2;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_3;
        CData/*0:0*/ main__DOT__u4__DOT__u3__DOT__u4__DOT____VdfgRegularize_hd5284251_0_4;
        CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_5;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        QData/*51:0*/ main__DOT__u3__DOT__blk_ad;
        QData/*51:0*/ main__DOT__u3__DOT__blk_iad;
        VL_IN(ad,18,0);
        VL_IN(wd,31,0);
    };
    struct {
        IData/*18:0*/ main__DOT__u3_ad;
        IData/*18:0*/ main__DOT__u3_instr_ad;
        IData/*31:0*/ main__DOT__u3_wd;
        IData/*31:0*/ main__DOT__u3_rd;
        IData/*31:0*/ main__DOT__u3_instr_rd;
        IData/*31:0*/ main__DOT__rf_rd1;
        IData/*31:0*/ main__DOT__u4__DOT__pc_in;
        IData/*31:0*/ main__DOT__u4__DOT__m_rd2;
        IData/*31:0*/ main__DOT__u4__DOT__m_alu;
        IData/*31:0*/ main__DOT__u4__DOT__u2__DOT__instr;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__imm;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__rf_wd;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__transfer;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__alu_a;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__alu_b;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__alu_c;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__instr_reg;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__d_transfer;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__d_pc;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__d_ipcnext;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__c_rd1;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__c_rd2;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__c_imm;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__c_transfer;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__c_pc;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__c_ipcnext;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__c_pcnext;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__m_imm;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__m_pcnext;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__s_imm;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__s_alu;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__s_pcnext;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__c_mux_rd2;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__m_rfwd;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__backup_rfwd;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__u2__DOT__pc;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__u2__DOT__i;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__u3__DOT__i;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__u3__DOT__a_to;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__u3__DOT__b_to;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_a;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_b;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_0;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_3;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_9;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_10;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_13;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_15;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_16;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__u3__DOT__u0__DOT____VdfgRegularize_hb789f08c_0_17;
        IData/*31:0*/ main__DOT__u4__DOT__u3__DOT__u3__DOT__u1__DOT__b_op;
        IData/*23:0*/ __VdfgRegularize_h6e95ff9d_0_4;
        IData/*23:0*/ __VdfgRegularize_h6e95ff9d_0_7;
        IData/*23:0*/ __VdfgRegularize_h6e95ff9d_0_8;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ main__DOT__u3__DOT__decoder;
        QData/*63:0*/ main__DOT__u3__DOT__nblk_decoder;
        QData/*63:0*/ main__DOT__u3__DOT__inblk_decoder;
        QData/*32:0*/ main__DOT__u4__DOT__u3__DOT__u3__DOT__u1_out;
        VlUnpacked<IData/*31:0*/, 32> main__DOT__u4__DOT__u3__DOT__u2__DOT__x;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vmain__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vmain___024root(Vmain__Syms* symsp, const char* namep);
    ~Vmain___024root();
    VL_UNCOPYABLE(Vmain___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
