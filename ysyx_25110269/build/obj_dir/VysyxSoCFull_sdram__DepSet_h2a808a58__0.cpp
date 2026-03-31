// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_sdram.h"

VL_INLINE_OPT void VysyxSoCFull_sdram___ico_sequent__TOP__ysyxSoCFull__sdram0__0(VysyxSoCFull_sdram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VysyxSoCFull_sdram___ico_sequent__TOP__ysyxSoCFull__sdram0__0\n"); );
    // Body
    vlSelf->cmd = (((IData)(vlSelf->cs) << 3U) | (((IData)(vlSelf->ras) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->cas) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->we))));
}

VL_INLINE_OPT void VysyxSoCFull_sdram___nba_sequent__TOP__ysyxSoCFull__sdram0__0(VysyxSoCFull_sdram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VysyxSoCFull_sdram___nba_sequent__TOP__ysyxSoCFull__sdram0__0\n"); );
    // Init
    CData/*1:0*/ __Vdlyvdim0__active_row__v0;
    __Vdlyvdim0__active_row__v0 = 0;
    SData/*12:0*/ __Vdlyvval__active_row__v0;
    __Vdlyvval__active_row__v0 = 0;
    CData/*0:0*/ __Vdlyvset__active_row__v0;
    __Vdlyvset__active_row__v0 = 0;
    CData/*3:0*/ __Vdly__in_read;
    __Vdly__in_read = 0;
    SData/*15:0*/ __Vdly__read_data_pipe;
    __Vdly__read_data_pipe = 0;
    CData/*0:0*/ __Vdly__read_valid_pipe;
    __Vdly__read_valid_pipe = 0;
    CData/*2:0*/ __Vdly__read_latency;
    __Vdly__read_latency = 0;
    CData/*1:0*/ __Vdlyvdim0__memory__v0;
    __Vdlyvdim0__memory__v0 = 0;
    SData/*12:0*/ __Vdlyvdim1__memory__v0;
    __Vdlyvdim1__memory__v0 = 0;
    SData/*8:0*/ __Vdlyvdim2__memory__v0;
    __Vdlyvdim2__memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__memory__v0;
    __Vdlyvlsb__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__memory__v0;
    __Vdlyvval__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__memory__v0;
    __Vdlyvset__memory__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__memory__v1;
    __Vdlyvdim0__memory__v1 = 0;
    SData/*12:0*/ __Vdlyvdim1__memory__v1;
    __Vdlyvdim1__memory__v1 = 0;
    SData/*8:0*/ __Vdlyvdim2__memory__v1;
    __Vdlyvdim2__memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__memory__v1;
    __Vdlyvlsb__memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__memory__v1;
    __Vdlyvval__memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__memory__v1;
    __Vdlyvset__memory__v1 = 0;
    // Body
    __Vdlyvset__active_row__v0 = 0U;
    __Vdly__read_latency = vlSelf->read_latency;
    __Vdly__read_valid_pipe = vlSelf->read_valid_pipe;
    __Vdly__read_data_pipe = vlSelf->read_data_pipe;
    __Vdly__in_read = vlSelf->in_read;
    __Vdlyvset__memory__v0 = 0U;
    __Vdlyvset__memory__v1 = 0U;
    if (vlSelf->cke) {
        if ((1U & (~ ((IData)(vlSelf->cmd) >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->cmd) >> 2U)))) {
                if ((2U & (IData)(vlSelf->cmd))) {
                    if ((1U & (IData)(vlSelf->cmd))) {
                        __Vdlyvval__active_row__v0 
                            = vlSelf->a;
                        __Vdlyvset__active_row__v0 = 1U;
                        __Vdlyvdim0__active_row__v0 
                            = vlSelf->ba;
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->cmd) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->cmd)))) {
                        vlSelf->burst_length = (7U 
                                                & (IData)(vlSelf->a));
                    }
                }
            }
            if ((4U & (IData)(vlSelf->cmd))) {
                if ((1U & (~ ((IData)(vlSelf->cmd) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->cmd))) {
                        if ((1U & ((IData)(vlSelf->bank_active) 
                                   >> (IData)(vlSelf->ba)))) {
                            __Vdly__in_read = (0xfU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->in_read)));
                            __Vdly__read_data_pipe 
                                = vlSelf->memory[vlSelf->ba]
                                [vlSelf->active_row
                                [vlSelf->ba]][(0x1ffU 
                                               & (IData)(vlSelf->a))];
                            __Vdly__read_valid_pipe = 1U;
                            __Vdly__read_latency = 0U;
                        }
                    } else if ((1U & ((IData)(vlSelf->bank_active) 
                                      >> (IData)(vlSelf->ba)))) {
                        if ((1U & (~ (IData)(vlSelf->dqm)))) {
                            __Vdlyvval__memory__v0 
                                = (0xffU & (IData)(vlSelf->dq));
                            __Vdlyvset__memory__v0 = 1U;
                            __Vdlyvlsb__memory__v0 = 0U;
                            __Vdlyvdim2__memory__v0 
                                = (0x1ffU & (IData)(vlSelf->a));
                            __Vdlyvdim1__memory__v0 
                                = vlSelf->active_row
                                [vlSelf->ba];
                            __Vdlyvdim0__memory__v0 
                                = vlSelf->ba;
                        }
                        if ((1U & (~ ((IData)(vlSelf->dqm) 
                                      >> 1U)))) {
                            __Vdlyvval__memory__v1 
                                = (0xffU & ((IData)(vlSelf->dq) 
                                            >> 8U));
                            __Vdlyvset__memory__v1 = 1U;
                            __Vdlyvlsb__memory__v1 = 8U;
                            __Vdlyvdim2__memory__v1 
                                = (0x1ffU & (IData)(vlSelf->a));
                            __Vdlyvdim1__memory__v1 
                                = vlSelf->active_row
                                [vlSelf->ba];
                            __Vdlyvdim0__memory__v1 
                                = vlSelf->ba;
                        }
                    }
                }
            }
        }
        if ((0U != (IData)(vlSelf->in_read))) {
            if ((2U == (IData)(vlSelf->cas_latency))) {
                if (((IData)(vlSelf->read_latency) 
                     == ((IData)(vlSelf->cas_latency) 
                         - (IData)(1U)))) {
                    __Vdly__read_latency = (7U & ((IData)(1U) 
                                                  + (IData)(vlSelf->read_latency)));
                    vlSelf->data_out_en = vlSelf->read_valid_pipe;
                    vlSelf->data_out = vlSelf->read_data_pipe;
                } else if (((IData)(vlSelf->read_latency) 
                            == (IData)(vlSelf->cas_latency))) {
                    __Vdly__in_read = (0xfU & ((IData)(vlSelf->in_read) 
                                               - (IData)(1U)));
                    vlSelf->data_out_en = 0U;
                    __Vdly__read_latency = 1U;
                } else {
                    __Vdly__read_latency = (7U & ((IData)(1U) 
                                                  + (IData)(vlSelf->read_latency)));
                    vlSelf->data_out_en = 0U;
                }
            } else {
                vlSelf->data_out_en = 0U;
                vlSelf->data_out = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->cmd) >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->cmd) >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->cmd) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->cmd)))) {
                        vlSelf->cas_latency = (7U & 
                                               ((IData)(vlSelf->a) 
                                                >> 4U));
                    }
                }
                if ((2U & (IData)(vlSelf->cmd))) {
                    if ((1U & (IData)(vlSelf->cmd))) {
                        vlSelf->bank_active = ((IData)(vlSelf->bank_active) 
                                               | (0xfU 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->ba))));
                    } else if ((0x400U & (IData)(vlSelf->a))) {
                        vlSelf->bank_active = 0U;
                    } else {
                        vlSelf->bank_active = ((~ ((IData)(1U) 
                                                   << (IData)(vlSelf->ba))) 
                                               & (IData)(vlSelf->bank_active));
                    }
                }
            }
        }
    } else {
        __Vdly__in_read = 0U;
    }
    vlSelf->in_read = __Vdly__in_read;
    vlSelf->read_data_pipe = __Vdly__read_data_pipe;
    vlSelf->read_valid_pipe = __Vdly__read_valid_pipe;
    vlSelf->read_latency = __Vdly__read_latency;
    if (__Vdlyvset__active_row__v0) {
        vlSelf->active_row[__Vdlyvdim0__active_row__v0] 
            = __Vdlyvval__active_row__v0;
    }
    if (__Vdlyvset__memory__v0) {
        vlSelf->memory[__Vdlyvdim0__memory__v0][__Vdlyvdim1__memory__v0][__Vdlyvdim2__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__memory__v0))) 
                & vlSelf->memory[__Vdlyvdim0__memory__v0]
                [__Vdlyvdim1__memory__v0][__Vdlyvdim2__memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__memory__v0) 
                             << (IData)(__Vdlyvlsb__memory__v0))));
    }
    if (__Vdlyvset__memory__v1) {
        vlSelf->memory[__Vdlyvdim0__memory__v1][__Vdlyvdim1__memory__v1][__Vdlyvdim2__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__memory__v1))) 
                & vlSelf->memory[__Vdlyvdim0__memory__v1]
                [__Vdlyvdim1__memory__v1][__Vdlyvdim2__memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__memory__v1) 
                             << (IData)(__Vdlyvlsb__memory__v1))));
    }
}
