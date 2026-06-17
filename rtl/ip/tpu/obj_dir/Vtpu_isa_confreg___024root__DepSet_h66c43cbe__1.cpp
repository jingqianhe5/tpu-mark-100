// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtpu_isa_confreg.h for the primary calling header

#include "verilated.h"

#include "Vtpu_isa_confreg___024root.h"

VL_INLINE_OPT void Vtpu_isa_confreg___024root___nba_comb__TOP__0(Vtpu_isa_confreg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_isa_confreg___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[0U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_valid_q
           [0U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [3U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [3U][0U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[0U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_valid_q
           [0U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [4U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [4U][0U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[1U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_valid_q
           [1U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [3U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [3U][1U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[1U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_valid_q
           [1U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [4U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [4U][1U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[2U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_valid_q
           [2U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [3U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [3U][2U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[2U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_valid_q
           [2U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [4U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [4U][2U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[3U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_valid_q
           [3U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [3U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [3U][3U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[3U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_valid_q
           [3U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [4U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [4U][3U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[4U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_valid_q
           [4U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [3U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [3U][4U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[4U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_valid_q
           [4U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [4U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [4U][4U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[5U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_valid_q
           [5U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [3U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [3U][5U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[5U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_valid_q
           [5U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [4U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [4U][5U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[6U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_valid_q
           [6U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [3U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [3U][6U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[6U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_valid_q
           [6U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [4U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [4U][6U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[7U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_valid_q
           [7U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [3U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [3U][7U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[7U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_valid_q
           [7U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [4U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [4U][7U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[0U] 
        = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
        [2U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
        [2U][0U]];
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[1U] 
        = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
        [2U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
        [2U][1U]];
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[2U] 
        = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
        [2U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
        [2U][2U]];
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[3U] 
        = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
        [2U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
        [2U][3U]];
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[4U] 
        = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
        [2U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
        [2U][4U]];
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[5U] 
        = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
        [2U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
        [2U][5U]];
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[6U] 
        = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
        [2U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
        [2U][6U]];
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[7U] 
        = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
        [2U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
        [2U][7U]];
    if (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in
        [0U]) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[0U] 
            = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [5U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [5U][0U]];
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[0U] 
            = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [6U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [6U][0U]];
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[0U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[0U] = 0U;
    }
    if (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in
        [1U]) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[1U] 
            = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [5U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [5U][1U]];
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[1U] 
            = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [6U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [6U][1U]];
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[1U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[1U] = 0U;
    }
    if (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in
        [2U]) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[2U] 
            = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [5U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [5U][2U]];
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[2U] 
            = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [6U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [6U][2U]];
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[2U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[2U] = 0U;
    }
    if (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in
        [3U]) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[3U] 
            = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [5U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [5U][3U]];
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[3U] 
            = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [6U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [6U][3U]];
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[3U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[3U] = 0U;
    }
    if (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in
        [4U]) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[4U] 
            = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [5U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [5U][4U]];
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[4U] 
            = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [6U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [6U][4U]];
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[4U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[4U] = 0U;
    }
    if (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in
        [5U]) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[5U] 
            = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [5U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [5U][5U]];
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[5U] 
            = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [6U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [6U][5U]];
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[5U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[5U] = 0U;
    }
    if (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in
        [6U]) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[6U] 
            = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [5U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [5U][6U]];
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[6U] 
            = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [6U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [6U][6U]];
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[6U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[6U] = 0U;
    }
    if (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in
        [7U]) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[7U] 
            = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [5U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [5U][7U]];
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[7U] 
            = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [6U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [6U][7U]];
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[7U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[7U] = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[0U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
           [0U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [0U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [0U][0U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[1U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
           [1U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [0U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [0U][1U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[2U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
           [2U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [0U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [0U][2U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[3U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
           [3U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [0U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [0U][3U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[4U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
           [4U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [0U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [0U][4U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[5U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
           [5U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [0U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [0U][5U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[6U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
           [6U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [0U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [0U][6U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[7U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
           [7U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [0U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [0U][7U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[0U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
           [0U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [1U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [1U][0U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[1U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
           [1U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [1U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [1U][1U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[2U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
           [2U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [1U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [1U][2U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[3U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
           [3U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [1U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [1U][3U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[4U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
           [4U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [1U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [1U][4U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[5U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
           [5U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [1U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [1U][5U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[6U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
           [6U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [1U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [1U][6U]] : 0U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[7U] 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
           [7U] ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [1U][vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [1U][7U]] : 0U);
    vlSelf->ub_rd_Y_data_out_0 = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
        [0U];
    vlSelf->ub_rd_Y_data_out_1 = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
        [1U];
    vlSelf->ub_rd_H_data_out_0 = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
        [0U];
    vlSelf->ub_rd_H_data_out_1 = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
        [1U];
    vlSelf->ub_rd_bias_data_out_0 = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
        [0U];
    vlSelf->ub_rd_bias_data_out_1 = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
        [1U];
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__sum_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                     [2U]) + VL_EXTENDS_II(17,16, 
                                                           vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                           [2U])));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__result = 0x7fffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__result = 0x8000U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__result 
            = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__sum_full);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__add_overflow = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__sum_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                     [3U]) + VL_EXTENDS_II(17,16, 
                                                           vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                           [3U])));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__result = 0x7fffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__result = 0x8000U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__result 
            = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__sum_full);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__add_overflow = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__sum_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                     [4U]) + VL_EXTENDS_II(17,16, 
                                                           vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                           [4U])));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__result = 0x7fffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__result = 0x8000U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__result 
            = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__sum_full);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__add_overflow = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__sum_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                     [5U]) + VL_EXTENDS_II(17,16, 
                                                           vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                           [5U])));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__result = 0x7fffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__result = 0x8000U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__result 
            = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__sum_full);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__add_overflow = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__sum_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                     [6U]) + VL_EXTENDS_II(17,16, 
                                                           vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                           [6U])));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__result = 0x7fffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__result = 0x8000U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__result 
            = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__sum_full);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__add_overflow = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__sum_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                     [7U]) + VL_EXTENDS_II(17,16, 
                                                           vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                           [7U])));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__result = 0x7fffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__result = 0x8000U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__result 
            = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__sum_full);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__add_overflow = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__mul_full 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in
                                        [0U]), VL_EXTENDS_II(32,16, (IData)(vlSelf->learn_rate_in)));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__mul_shifted 
        = VL_SHIFTRS_III(32,32,32, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__mul_full, 8U);
    if (VL_LTS_III(32, 0x7fffU, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__mul_shifted)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__mul_out = 0x7fffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__mul_overflow = 1U;
    } else if (VL_GTS_III(32, 0xffff8000U, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__mul_shifted)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__mul_out = 0x8000U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__mul_overflow = 1U;
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__mul_out 
            = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__mul_shifted);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__mul_overflow = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__mul_full 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in
                                        [1U]), VL_EXTENDS_II(32,16, (IData)(vlSelf->learn_rate_in)));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__mul_shifted 
        = VL_SHIFTRS_III(32,32,32, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__mul_full, 8U);
    if (VL_LTS_III(32, 0x7fffU, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__mul_shifted)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__mul_out = 0x7fffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__mul_overflow = 1U;
    } else if (VL_GTS_III(32, 0xffff8000U, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__mul_shifted)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__mul_out = 0x8000U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__mul_overflow = 1U;
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__mul_out 
            = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__mul_shifted);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__mul_overflow = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__mul_full 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in
                                        [2U]), VL_EXTENDS_II(32,16, (IData)(vlSelf->learn_rate_in)));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__mul_shifted 
        = VL_SHIFTRS_III(32,32,32, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__mul_full, 8U);
    if (VL_LTS_III(32, 0x7fffU, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__mul_shifted)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__mul_out = 0x7fffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__mul_overflow = 1U;
    } else if (VL_GTS_III(32, 0xffff8000U, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__mul_shifted)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__mul_out = 0x8000U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__mul_overflow = 1U;
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__mul_out 
            = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__mul_shifted);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__mul_overflow = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__mul_full 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in
                                        [3U]), VL_EXTENDS_II(32,16, (IData)(vlSelf->learn_rate_in)));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__mul_shifted 
        = VL_SHIFTRS_III(32,32,32, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__mul_full, 8U);
    if (VL_LTS_III(32, 0x7fffU, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__mul_shifted)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__mul_out = 0x7fffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__mul_overflow = 1U;
    } else if (VL_GTS_III(32, 0xffff8000U, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__mul_shifted)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__mul_out = 0x8000U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__mul_overflow = 1U;
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__mul_out 
            = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__mul_shifted);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__mul_overflow = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__mul_full 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in
                                        [4U]), VL_EXTENDS_II(32,16, (IData)(vlSelf->learn_rate_in)));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__mul_shifted 
        = VL_SHIFTRS_III(32,32,32, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__mul_full, 8U);
    if (VL_LTS_III(32, 0x7fffU, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__mul_shifted)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__mul_out = 0x7fffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__mul_overflow = 1U;
    } else if (VL_GTS_III(32, 0xffff8000U, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__mul_shifted)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__mul_out = 0x8000U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__mul_overflow = 1U;
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__mul_out 
            = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__mul_shifted);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__mul_overflow = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__mul_full 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in
                                        [5U]), VL_EXTENDS_II(32,16, (IData)(vlSelf->learn_rate_in)));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__mul_shifted 
        = VL_SHIFTRS_III(32,32,32, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__mul_full, 8U);
    if (VL_LTS_III(32, 0x7fffU, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__mul_shifted)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__mul_out = 0x7fffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__mul_overflow = 1U;
    } else if (VL_GTS_III(32, 0xffff8000U, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__mul_shifted)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__mul_out = 0x8000U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__mul_overflow = 1U;
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__mul_out 
            = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__mul_shifted);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__mul_overflow = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__mul_full 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in
                                        [6U]), VL_EXTENDS_II(32,16, (IData)(vlSelf->learn_rate_in)));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__mul_shifted 
        = VL_SHIFTRS_III(32,32,32, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__mul_full, 8U);
    if (VL_LTS_III(32, 0x7fffU, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__mul_shifted)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__mul_out = 0x7fffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__mul_overflow = 1U;
    } else if (VL_GTS_III(32, 0xffff8000U, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__mul_shifted)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__mul_out = 0x8000U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__mul_overflow = 1U;
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__mul_out 
            = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__mul_shifted);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__mul_overflow = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__mul_full 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in
                                        [7U]), VL_EXTENDS_II(32,16, (IData)(vlSelf->learn_rate_in)));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__mul_shifted 
        = VL_SHIFTRS_III(32,32,32, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__mul_full, 8U);
    if (VL_LTS_III(32, 0x7fffU, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__mul_shifted)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__mul_out = 0x7fffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__mul_overflow = 1U;
    } else if (VL_GTS_III(32, 0xffff8000U, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__mul_shifted)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__mul_out = 0x8000U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__mul_overflow = 1U;
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__mul_out 
            = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__mul_shifted);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__mul_overflow = 0U;
    }
    vlSelf->ub_rd_input_data_out_0 = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
        [0U];
    vlSelf->ub_rd_input_data_out_1 = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
        [1U];
    vlSelf->ub_rd_weight_data_out_0 = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
        [0U];
    vlSelf->ub_rd_weight_data_out_1 = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
        [1U];
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__sum_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                     [0U]) + VL_EXTENDS_II(17,16, (IData)(vlSelf->ub_rd_bias_data_out_0))));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__result = 0x7fffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__result = 0x8000U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__result 
            = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__sum_full);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__add_overflow = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__sum_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                     [1U]) + VL_EXTENDS_II(17,16, (IData)(vlSelf->ub_rd_bias_data_out_1))));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__result = 0x7fffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__result = 0x8000U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__result 
            = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__sum_full);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__add_overflow = 0U;
    }
    if (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_bias_or_weight) {
        if (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_bias_or_weight) {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                [0U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                [1U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                [2U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                [3U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                [4U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                [5U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                [6U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                [7U];
        }
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
            = ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__grad_descent_done_out)
                ? (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__value_updated_out)
                : vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
               [0U]);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
            = ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__grad_descent_done_out)
                ? (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__value_updated_out)
                : vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
               [1U]);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
            = ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__grad_descent_done_out)
                ? (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__value_updated_out)
                : vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
               [2U]);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
            = ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__grad_descent_done_out)
                ? (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__value_updated_out)
                : vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
               [3U]);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
            = ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__grad_descent_done_out)
                ? (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__value_updated_out)
                : vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
               [4U]);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
            = ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__grad_descent_done_out)
                ? (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__value_updated_out)
                : vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
               [5U]);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
            = ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__grad_descent_done_out)
                ? (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__value_updated_out)
                : vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
               [6U]);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
            = ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__grad_descent_done_out)
                ? (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__value_updated_out)
                : vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
               [7U]);
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_in_a)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__mul_out))));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x7fffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x8000U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_value_out 
            = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_full);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_in_a)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__mul_out))));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x7fffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x8000U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_value_out 
            = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_full);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_in_a)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__mul_out))));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x7fffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x8000U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_value_out 
            = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_full);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_in_a)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__mul_out))));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x7fffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x8000U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_value_out 
            = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_full);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_in_a)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__mul_out))));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x7fffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x8000U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_value_out 
            = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_full);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_in_a)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__mul_out))));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x7fffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x8000U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_value_out 
            = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_full);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_in_a)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__mul_out))));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x7fffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x8000U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_value_out 
            = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_full);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_in_a)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__mul_out))));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x7fffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x8000U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_value_out 
            = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_full);
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 0U;
    }
}

void Vtpu_isa_confreg___024root___eval_triggers__ico(Vtpu_isa_confreg___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtpu_isa_confreg___024root___dump_triggers__ico(Vtpu_isa_confreg___024root* vlSelf);
#endif  // VL_DEBUG
void Vtpu_isa_confreg___024root___eval_ico(Vtpu_isa_confreg___024root* vlSelf);
void Vtpu_isa_confreg___024root___eval_triggers__act(Vtpu_isa_confreg___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtpu_isa_confreg___024root___dump_triggers__act(Vtpu_isa_confreg___024root* vlSelf);
#endif  // VL_DEBUG
void Vtpu_isa_confreg___024root___eval_act(Vtpu_isa_confreg___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtpu_isa_confreg___024root___dump_triggers__nba(Vtpu_isa_confreg___024root* vlSelf);
#endif  // VL_DEBUG
void Vtpu_isa_confreg___024root___eval_nba(Vtpu_isa_confreg___024root* vlSelf);

void Vtpu_isa_confreg___024root___eval(Vtpu_isa_confreg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_isa_confreg___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtpu_isa_confreg___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtpu_isa_confreg___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("tpu_isa_confreg.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtpu_isa_confreg___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtpu_isa_confreg___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtpu_isa_confreg___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tpu_isa_confreg.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtpu_isa_confreg___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtpu_isa_confreg___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tpu_isa_confreg.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtpu_isa_confreg___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtpu_isa_confreg___024root___eval_debug_assertions(Vtpu_isa_confreg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_isa_confreg___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->ins_valid & 0xfeU))) {
        Verilated::overWidthError("ins_valid");}
    if (VL_UNLIKELY((vlSelf->ub_wr_ext_valid & 0xfeU))) {
        Verilated::overWidthError("ub_wr_ext_valid");}
}
#endif  // VL_DEBUG
