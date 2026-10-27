// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_system.h for the primary calling header

#include "Vtb_system__pch.h"
#include "Vtb_system__Syms.h"
#include "Vtb_system___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_system___024root___dump_triggers__stl(Vtb_system___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_system___024root___eval_triggers__stl(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_triggers__stl\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.setBit(1U, ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m__0)));
    vlSelfRef.__VstlTriggered.setBit(2U, ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m__0)));
    vlSelfRef.__VstlTriggered.setBit(3U, ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m__0)));
    vlSelfRef.__VstlTriggered.setBit(4U, vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes__0.neq(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes));
    vlSelfRef.__VstlTriggered.setBit(5U, vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes__0.neq(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes));
    vlSelfRef.__VstlTriggered.setBit(6U, vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes__0.neq(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m__0 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m__0 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m__0 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes__0.assign(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes__0.assign(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes__0.assign(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes);
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.setBit(1U, 1U);
        vlSelfRef.__VstlTriggered.setBit(2U, 1U);
        vlSelfRef.__VstlTriggered.setBit(3U, 1U);
        vlSelfRef.__VstlTriggered.setBit(4U, 1U);
        vlSelfRef.__VstlTriggered.setBit(5U, 1U);
        vlSelfRef.__VstlTriggered.setBit(6U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_system___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
