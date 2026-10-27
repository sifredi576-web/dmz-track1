// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_wav.h for the primary calling header

#include "Vtb_wav__pch.h"
#include "Vtb_wav__Syms.h"
#include "Vtb_wav___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_wav___024root___eval_initial__TOP__Vtiming__0(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_wav__DOT__u32__7__value;
    __Vtask_tb_wav__DOT__u32__7__value = 0;
    SData/*15:0*/ __Vtask_tb_wav__DOT__u16__8__value;
    __Vtask_tb_wav__DOT__u16__8__value = 0;
    SData/*15:0*/ __Vtask_tb_wav__DOT__u16__9__value;
    __Vtask_tb_wav__DOT__u16__9__value = 0;
    IData/*31:0*/ __Vtask_tb_wav__DOT__u32__10__value;
    __Vtask_tb_wav__DOT__u32__10__value = 0;
    SData/*15:0*/ __Vtask_tb_wav__DOT__u16__12__value;
    __Vtask_tb_wav__DOT__u16__12__value = 0;
    SData/*15:0*/ __Vtask_tb_wav__DOT__u16__13__value;
    __Vtask_tb_wav__DOT__u16__13__value = 0;
    IData/*31:0*/ __Vtask_tb_wav__DOT__u32__16__value;
    __Vtask_tb_wav__DOT__u32__16__value = 0;
    // Body
    if ((! VL_VALUEPLUSARGS_INN(64, std::string{"case=%s"}, 
                                vlSelfRef.tb_wav__DOT__test_case))) {
        vlSelfRef.tb_wav__DOT__test_case = std::string{"normal"};
    }
    if (VL_UNLIKELY(((1U & (~ (((((((((((((((((((((
                                                   std::string{"normal"} 
                                                   == vlSelfRef.tb_wav__DOT__test_case) 
                                                  || (std::string{"junkodd"} 
                                                      == vlSelfRef.tb_wav__DOT__test_case)) 
                                                 || (std::string{"fmt18"} 
                                                     == vlSelfRef.tb_wav__DOT__test_case)) 
                                                || (std::string{"trailing"} 
                                                    == vlSelfRef.tb_wav__DOT__test_case)) 
                                               || (std::string{"restart"} 
                                                   == vlSelfRef.tb_wav__DOT__test_case)) 
                                              || (std::string{"magic"} 
                                                  == vlSelfRef.tb_wav__DOT__test_case)) 
                                             || (std::string{"short"} 
                                                 == vlSelfRef.tb_wav__DOT__test_case)) 
                                            || (std::string{"headershort"} 
                                                == vlSelfRef.tb_wav__DOT__test_case)) 
                                           || (std::string{"overflow"} 
                                               == vlSelfRef.tb_wav__DOT__test_case)) 
                                          || (std::string{"chunkoverflow"} 
                                              == vlSelfRef.tb_wav__DOT__test_case)) 
                                         || (std::string{"shortfmt"} 
                                             == vlSelfRef.tb_wav__DOT__test_case)) 
                                        || (std::string{"float"} 
                                            == vlSelfRef.tb_wav__DOT__test_case)) 
                                       || (std::string{"mono"} 
                                           == vlSelfRef.tb_wav__DOT__test_case)) 
                                      || (std::string{"rate"} 
                                          == vlSelfRef.tb_wav__DOT__test_case)) 
                                     || (std::string{"align"} 
                                         == vlSelfRef.tb_wav__DOT__test_case)) 
                                    || (std::string{"bits"} 
                                        == vlSelfRef.tb_wav__DOT__test_case)) 
                                   || (std::string{"missingdata"} 
                                       == vlSelfRef.tb_wav__DOT__test_case)) 
                                  || (std::string{"nofmt"} 
                                      == vlSelfRef.tb_wav__DOT__test_case)) 
                                 || (std::string{"zerodata"} 
                                     == vlSelfRef.tb_wav__DOT__test_case)) 
                                || (std::string{"unaligned"} 
                                    == vlSelfRef.tb_wav__DOT__test_case)) 
                               || (std::string{"readerror"} 
                                   == vlSelfRef.tb_wav__DOT__test_case))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_wav.sv:40: Assertion failed in %Ntb_wav: unknown WAV test case %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(vlSelfRef.tb_wav__DOT__test_case));
        VL_STOP_MT("sim/media\\tb_wav.sv", 40, "", false);
    }
    vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] = 0x52U;
    vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                               + vlSelfRef.tb_wav__DOT__used))] = 0x49U;
    vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                               + vlSelfRef.tb_wav__DOT__used))] = 0x46U;
    vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                               + vlSelfRef.tb_wav__DOT__used))] = 0x46U;
    vlSelfRef.tb_wav__DOT__used = ((IData)(4U) + vlSelfRef.tb_wav__DOT__used);
    vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] = 0U;
    vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                               + vlSelfRef.tb_wav__DOT__used))] = 0U;
    vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                               + vlSelfRef.tb_wav__DOT__used))] = 0U;
    vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                               + vlSelfRef.tb_wav__DOT__used))] = 0U;
    vlSelfRef.tb_wav__DOT__used = ((IData)(4U) + vlSelfRef.tb_wav__DOT__used);
    vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] = 0x57U;
    vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                               + vlSelfRef.tb_wav__DOT__used))] = 0x41U;
    vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                               + vlSelfRef.tb_wav__DOT__used))] = 0x56U;
    vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                               + vlSelfRef.tb_wav__DOT__used))] = 0x45U;
    vlSelfRef.tb_wav__DOT__used = ((IData)(4U) + vlSelfRef.tb_wav__DOT__used);
    if ((std::string{"junkodd"} == vlSelfRef.tb_wav__DOT__test_case)) {
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] = 0x4aU;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x55U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x4eU;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x4bU;
        vlSelfRef.tb_wav__DOT__used = ((IData)(4U) 
                                       + vlSelfRef.tb_wav__DOT__used);
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] = 3U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0U;
        vlSelfRef.tb_wav__DOT__used = ((IData)(4U) 
                                       + vlSelfRef.tb_wav__DOT__used);
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] = 0xaaU;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x55U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x11U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0U;
        vlSelfRef.tb_wav__DOT__used = ((IData)(4U) 
                                       + vlSelfRef.tb_wav__DOT__used);
    }
    if ((1U & (~ (std::string{"nofmt"} == vlSelfRef.tb_wav__DOT__test_case)))) {
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] = 0x66U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x6dU;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x74U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x20U;
        vlSelfRef.tb_wav__DOT__used = ((IData)(4U) 
                                       + vlSelfRef.tb_wav__DOT__used);
        __Vtask_tb_wav__DOT__u32__7__value = (VL_TESTPLUSARGS_I(
                                                                std::string{"fmt18"})
                                               ? 0x12U
                                               : ((
                                                   std::string{"shortfmt"} 
                                                   == vlSelfRef.tb_wav__DOT__test_case)
                                                   ? 0xfU
                                                   : 0x10U));
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] 
            = (0xffU & __Vtask_tb_wav__DOT__u32__7__value);
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] 
            = (0xffU & (__Vtask_tb_wav__DOT__u32__7__value 
                        >> 8U));
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] 
            = (0xffU & (__Vtask_tb_wav__DOT__u32__7__value 
                        >> 0x10U));
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] 
            = (__Vtask_tb_wav__DOT__u32__7__value >> 0x18U);
        vlSelfRef.tb_wav__DOT__used = ((IData)(4U) 
                                       + vlSelfRef.tb_wav__DOT__used);
        __Vtask_tb_wav__DOT__u16__8__value = ((std::string{"float"} 
                                               == vlSelfRef.tb_wav__DOT__test_case)
                                               ? 3U
                                               : 1U);
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] 
            = (0xffU & (IData)(__Vtask_tb_wav__DOT__u16__8__value));
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] 
            = (0xffU & ((IData)(__Vtask_tb_wav__DOT__u16__8__value) 
                        >> 8U));
        vlSelfRef.tb_wav__DOT__used = ((IData)(2U) 
                                       + vlSelfRef.tb_wav__DOT__used);
        __Vtask_tb_wav__DOT__u16__9__value = ((std::string{"mono"} 
                                               == vlSelfRef.tb_wav__DOT__test_case)
                                               ? 1U
                                               : 2U);
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] 
            = (0xffU & (IData)(__Vtask_tb_wav__DOT__u16__9__value));
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] 
            = (0xffU & ((IData)(__Vtask_tb_wav__DOT__u16__9__value) 
                        >> 8U));
        vlSelfRef.tb_wav__DOT__used = ((IData)(2U) 
                                       + vlSelfRef.tb_wav__DOT__used);
        __Vtask_tb_wav__DOT__u32__10__value = ((std::string{"rate"} 
                                                == vlSelfRef.tb_wav__DOT__test_case)
                                                ? 0xac44U
                                                : 0xbb80U);
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] 
            = (0xffU & __Vtask_tb_wav__DOT__u32__10__value);
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] 
            = (0xffU & (__Vtask_tb_wav__DOT__u32__10__value 
                        >> 8U));
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] 
            = (0xffU & (__Vtask_tb_wav__DOT__u32__10__value 
                        >> 0x10U));
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] 
            = (__Vtask_tb_wav__DOT__u32__10__value 
               >> 0x18U);
        vlSelfRef.tb_wav__DOT__used = ((IData)(4U) 
                                       + vlSelfRef.tb_wav__DOT__used);
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] = 0U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0xeeU;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 2U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0U;
        vlSelfRef.tb_wav__DOT__used = ((IData)(4U) 
                                       + vlSelfRef.tb_wav__DOT__used);
        __Vtask_tb_wav__DOT__u16__12__value = ((std::string{"align"} 
                                                == vlSelfRef.tb_wav__DOT__test_case)
                                                ? 2U
                                                : 4U);
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] 
            = (0xffU & (IData)(__Vtask_tb_wav__DOT__u16__12__value));
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] 
            = (0xffU & ((IData)(__Vtask_tb_wav__DOT__u16__12__value) 
                        >> 8U));
        vlSelfRef.tb_wav__DOT__used = ((IData)(2U) 
                                       + vlSelfRef.tb_wav__DOT__used);
        __Vtask_tb_wav__DOT__u16__13__value = ((std::string{"bits"} 
                                                == vlSelfRef.tb_wav__DOT__test_case)
                                                ? 0x18U
                                                : 0x10U);
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] 
            = (0xffU & (IData)(__Vtask_tb_wav__DOT__u16__13__value));
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] 
            = (0xffU & ((IData)(__Vtask_tb_wav__DOT__u16__13__value) 
                        >> 8U));
        vlSelfRef.tb_wav__DOT__used = ((IData)(2U) 
                                       + vlSelfRef.tb_wav__DOT__used);
        if (VL_TESTPLUSARGS_I(std::string{"fmt18"})) {
            vlSelfRef.tb_wav__DOT__file_data[(0xffU 
                                              & vlSelfRef.tb_wav__DOT__used)] = 0U;
            vlSelfRef.tb_wav__DOT__file_data[(0xffU 
                                              & ((IData)(1U) 
                                                 + vlSelfRef.tb_wav__DOT__used))] = 0U;
            vlSelfRef.tb_wav__DOT__used = ((IData)(2U) 
                                           + vlSelfRef.tb_wav__DOT__used);
        }
    }
    if ((1U & (~ (std::string{"missingdata"} == vlSelfRef.tb_wav__DOT__test_case)))) {
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] = 0x64U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x61U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x74U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x61U;
        vlSelfRef.tb_wav__DOT__used = ((IData)(4U) 
                                       + vlSelfRef.tb_wav__DOT__used);
        vlSelfRef.tb_wav__DOT__data_size_at = vlSelfRef.tb_wav__DOT__used;
        __Vtask_tb_wav__DOT__u32__16__value = ((std::string{"zerodata"} 
                                                == vlSelfRef.tb_wav__DOT__test_case)
                                                ? 0U
                                                : (
                                                   (std::string{"unaligned"} 
                                                    == vlSelfRef.tb_wav__DOT__test_case)
                                                    ? 0x2fU
                                                    : 0x30U));
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] 
            = (0xffU & __Vtask_tb_wav__DOT__u32__16__value);
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] 
            = (0xffU & (__Vtask_tb_wav__DOT__u32__16__value 
                        >> 8U));
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] 
            = (0xffU & (__Vtask_tb_wav__DOT__u32__16__value 
                        >> 0x10U));
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] 
            = (__Vtask_tb_wav__DOT__u32__16__value 
               >> 0x18U);
        vlSelfRef.tb_wav__DOT__used = ((IData)(4U) 
                                       + vlSelfRef.tb_wav__DOT__used);
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] = 0U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x80U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0xffU;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x7fU;
        vlSelfRef.tb_wav__DOT__used = ((IData)(4U) 
                                       + vlSelfRef.tb_wav__DOT__used);
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] = 0xd2U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x84U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x2dU;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x7bU;
        vlSelfRef.tb_wav__DOT__used = ((IData)(4U) 
                                       + vlSelfRef.tb_wav__DOT__used);
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] = 0xa4U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x89U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x5bU;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x76U;
        vlSelfRef.tb_wav__DOT__used = ((IData)(4U) 
                                       + vlSelfRef.tb_wav__DOT__used);
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] = 0x76U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x8eU;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x89U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x71U;
        vlSelfRef.tb_wav__DOT__used = ((IData)(4U) 
                                       + vlSelfRef.tb_wav__DOT__used);
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] = 0x48U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x93U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0xb7U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x6cU;
        vlSelfRef.tb_wav__DOT__used = ((IData)(4U) 
                                       + vlSelfRef.tb_wav__DOT__used);
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] = 0x1aU;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x98U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0xe5U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x67U;
        vlSelfRef.tb_wav__DOT__used = ((IData)(4U) 
                                       + vlSelfRef.tb_wav__DOT__used);
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] = 0xecU;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x9cU;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x13U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x63U;
        vlSelfRef.tb_wav__DOT__used = ((IData)(4U) 
                                       + vlSelfRef.tb_wav__DOT__used);
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] = 0xbeU;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0xa1U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x41U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x5eU;
        vlSelfRef.tb_wav__DOT__used = ((IData)(4U) 
                                       + vlSelfRef.tb_wav__DOT__used);
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] = 0x90U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0xa6U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x6fU;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x59U;
        vlSelfRef.tb_wav__DOT__used = ((IData)(4U) 
                                       + vlSelfRef.tb_wav__DOT__used);
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] = 0x62U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0xabU;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x9dU;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x54U;
        vlSelfRef.tb_wav__DOT__used = ((IData)(4U) 
                                       + vlSelfRef.tb_wav__DOT__used);
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] = 0x34U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0xb0U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0xcbU;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x4fU;
        vlSelfRef.tb_wav__DOT__used = ((IData)(4U) 
                                       + vlSelfRef.tb_wav__DOT__used);
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] = 6U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0xb5U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0xf9U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0x4aU;
        vlSelfRef.tb_wav__DOT__used = ((IData)(4U) 
                                       + vlSelfRef.tb_wav__DOT__used);
    }
    vlSelfRef.tb_wav__DOT__file_data[4U] = (0xffU & 
                                            (vlSelfRef.tb_wav__DOT__used 
                                             - (IData)(8U)));
    vlSelfRef.tb_wav__DOT__file_data[5U] = (0xffU & 
                                            ((vlSelfRef.tb_wav__DOT__used 
                                              - (IData)(8U)) 
                                             >> 8U));
    vlSelfRef.tb_wav__DOT__file_data[6U] = (0xffU & 
                                            ((vlSelfRef.tb_wav__DOT__used 
                                              - (IData)(8U)) 
                                             >> 0x10U));
    vlSelfRef.tb_wav__DOT__file_data[7U] = ((vlSelfRef.tb_wav__DOT__used 
                                             - (IData)(8U)) 
                                            >> 0x18U);
    if ((std::string{"trailing"} == vlSelfRef.tb_wav__DOT__test_case)) {
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__used)] = 0xdU;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0xf0U;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0xfeU;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                                   + vlSelfRef.tb_wav__DOT__used))] = 0xcaU;
        vlSelfRef.tb_wav__DOT__used = ((IData)(4U) 
                                       + vlSelfRef.tb_wav__DOT__used);
    }
    vlSelfRef.tb_wav__DOT__length = vlSelfRef.tb_wav__DOT__used;
    if ((std::string{"magic"} == vlSelfRef.tb_wav__DOT__test_case)) {
        vlSelfRef.tb_wav__DOT__file_data[0U] = 0U;
        vlSelfRef.tb_wav__DOT__expected_error = 1U;
    }
    if ((std::string{"short"} == vlSelfRef.tb_wav__DOT__test_case)) {
        vlSelfRef.tb_wav__DOT__length = (vlSelfRef.tb_wav__DOT__length 
                                         - (IData)(1U));
        vlSelfRef.tb_wav__DOT__expected_error = 2U;
    }
    if ((std::string{"headershort"} == vlSelfRef.tb_wav__DOT__test_case)) {
        vlSelfRef.tb_wav__DOT__length = 8U;
        vlSelfRef.tb_wav__DOT__expected_error = 2U;
    }
    if ((std::string{"overflow"} == vlSelfRef.tb_wav__DOT__test_case)) {
        vlSelfRef.tb_wav__DOT__file_data[4U] = 0xffU;
        vlSelfRef.tb_wav__DOT__file_data[5U] = 0xffU;
        vlSelfRef.tb_wav__DOT__file_data[6U] = 0xffU;
        vlSelfRef.tb_wav__DOT__file_data[7U] = 0xffU;
        vlSelfRef.tb_wav__DOT__expected_error = 2U;
    }
    if ((std::string{"chunkoverflow"} == vlSelfRef.tb_wav__DOT__test_case)) {
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__data_size_at)] = 0xffU;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(1U) 
                                                   + vlSelfRef.tb_wav__DOT__data_size_at))] = 0xffU;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(2U) 
                                                   + vlSelfRef.tb_wav__DOT__data_size_at))] = 0xffU;
        vlSelfRef.tb_wav__DOT__file_data[(0xffU & ((IData)(3U) 
                                                   + vlSelfRef.tb_wav__DOT__data_size_at))] = 0xffU;
        vlSelfRef.tb_wav__DOT__expected_error = 4U;
    }
    if (((((((std::string{"shortfmt"} == vlSelfRef.tb_wav__DOT__test_case) 
             | (std::string{"float"} == vlSelfRef.tb_wav__DOT__test_case)) 
            | (std::string{"mono"} == vlSelfRef.tb_wav__DOT__test_case)) 
           | (std::string{"rate"} == vlSelfRef.tb_wav__DOT__test_case)) 
          | (std::string{"align"} == vlSelfRef.tb_wav__DOT__test_case)) 
         | (std::string{"bits"} == vlSelfRef.tb_wav__DOT__test_case))) {
        vlSelfRef.tb_wav__DOT__expected_error = 3U;
    }
    if ((std::string{"missingdata"} == vlSelfRef.tb_wav__DOT__test_case)) {
        vlSelfRef.tb_wav__DOT__expected_error = 4U;
    }
    if ((std::string{"nofmt"} == vlSelfRef.tb_wav__DOT__test_case)) {
        vlSelfRef.tb_wav__DOT__expected_error = 6U;
    }
    if (((std::string{"zerodata"} == vlSelfRef.tb_wav__DOT__test_case) 
         | (std::string{"unaligned"} == vlSelfRef.tb_wav__DOT__test_case))) {
        vlSelfRef.tb_wav__DOT__expected_error = 7U;
    }
    if ((std::string{"readerror"} == vlSelfRef.tb_wav__DOT__test_case)) {
        vlSelfRef.tb_wav__DOT__expected_error = 0x85U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "sim/media\tb_wav.sv", 
                                         67);
    co_await vlSelfRef.__VtrigSched_hf9582dc2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_wav.clk)", 
                                                         "sim/media\tb_wav.sv", 
                                                         67);
    vlSelfRef.tb_wav__DOT__reset = 0U;
    co_await vlSelfRef.__VtrigSched_hf9582dc2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_wav.clk)", 
                                                         "sim/media\tb_wav.sv", 
                                                         33);
    vlSelfRef.tb_wav__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_hf9582dc2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_wav.clk)", 
                                                         "sim/media\tb_wav.sv", 
                                                         33);
    vlSelfRef.tb_wav__DOT__start = 0U;
    if ((std::string{"restart"} == vlSelfRef.tb_wav__DOT__test_case)) {
        while ((3U != vlSelfRef.tb_wav__DOT__received)) {
            co_await vlSelfRef.__VtrigSched_hbdec5951__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (32'sh3 == tb_wav.received))", 
                                                                 "sim/media\tb_wav.sv", 
                                                                 68);
        }
        co_await vlSelfRef.__VtrigSched_hf9582dc2__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_wav.clk)", 
                                                             "sim/media\tb_wav.sv", 
                                                             33);
        vlSelfRef.tb_wav__DOT__start = 1U;
        co_await vlSelfRef.__VtrigSched_hf9582dc2__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_wav.clk)", 
                                                             "sim/media\tb_wav.sv", 
                                                             33);
        vlSelfRef.tb_wav__DOT__start = 0U;
    }
    while ((1U & (~ ((IData)(vlSelfRef.tb_wav__DOT__done) 
                     | (0U != (IData)(vlSelfRef.tb_wav__DOT__error)))))) {
        co_await vlSelfRef.__VtrigSched_h642ddb89__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (tb_wav.done | (8'h0 != tb_wav.error)))", 
                                                             "sim/media\tb_wav.sv", 
                                                             69);
    }
    co_await vlSelfRef.__VtrigSched_hf9582dc2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_wav.clk)", 
                                                         "sim/media\tb_wav.sv", 
                                                         69);
    if ((0U != vlSelfRef.tb_wav__DOT__expected_error)) {
        if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_wav__DOT__error) 
                            != vlSelfRef.tb_wav__DOT__expected_error) 
                           | (IData)(vlSelfRef.tb_wav__DOT__done)) 
                          | (0U != vlSelfRef.tb_wav__DOT__received))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_wav.sv:71: Assertion failed in %Ntb_wav: WAV rejection code=%0# expected=%0d received=%0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),8,(IData)(vlSelfRef.tb_wav__DOT__error),
                         32,vlSelfRef.tb_wav__DOT__expected_error,
                         32,vlSelfRef.tb_wav__DOT__received);
            VL_STOP_MT("sim/media\\tb_wav.sv", 71, "", false);
        }
        VL_WRITEF_NX("PASS WAV case=%@ invalid stream rejected, code=%0#\n",0,
                     -1,&(vlSelfRef.tb_wav__DOT__test_case),
                     8,(IData)(vlSelfRef.tb_wav__DOT__error));
    } else {
        if (VL_UNLIKELY(((1U & (((((0U != (IData)(vlSelfRef.tb_wav__DOT__error)) 
                                   | (~ (IData)(vlSelfRef.tb_wav__DOT__done))) 
                                  | (0xcU != vlSelfRef.tb_wav__DOT__received)) 
                                 | (0xcU != vlSelfRef.tb_wav__DOT__pairs)) 
                                | (0xcU != vlSelfRef.tb_wav__DOT__total)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_wav.sv:74: Assertion failed in %Ntb_wav: WAV decode failed received=%0d generated=%0# total=%0# error=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_wav__DOT__received,
                         32,vlSelfRef.tb_wav__DOT__pairs,
                         32,vlSelfRef.tb_wav__DOT__total,
                         8,(IData)(vlSelfRef.tb_wav__DOT__error));
            VL_STOP_MT("sim/media\\tb_wav.sv", 74, "", false);
        }
        VL_WRITEF_NX("PASS WAV case=%@ 48kHz/stereo/16bit: 12 signed PCM pairs, source/FIFO backpressure\n",0,
                     -1,&(vlSelfRef.tb_wav__DOT__test_case));
    }
    VL_FINISH_MT("sim/media\\tb_wav.sv", 77, "");
}

VL_INLINE_OPT VlCoroutine Vtb_wav___024root___eval_initial__TOP__Vtiming__1(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x3b9aca00ULL, 
                                         nullptr, "sim/media\tb_wav.sv", 
                                         79);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_wav.sv:79: Assertion failed in %Ntb_wav: WAV parser timeout state=%0# sent=%0d\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                 4,(IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state),
                 32,vlSelfRef.tb_wav__DOT__sent);
    VL_STOP_MT("sim/media\\tb_wav.sv", 79, "", false);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_wav___024root___dump_triggers__act(Vtb_wav___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_wav___024root___eval_triggers__act(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___eval_triggers__act\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtrigprevexpr_h69dc0e1f__0;
    __Vtrigprevexpr_h69dc0e1f__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h041a9367__0;
    __Vtrigprevexpr_h041a9367__0 = 0;
    // Body
    __Vtrigprevexpr_h69dc0e1f__0 = (3U == vlSelfRef.tb_wav__DOT__received);
    __Vtrigprevexpr_h041a9367__0 = ((IData)(vlSelfRef.tb_wav__DOT__done) 
                                    | (0U != (IData)(vlSelfRef.tb_wav__DOT__error)));
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_wav__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_wav__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(2U, ((~ (IData)(vlSelfRef.tb_wav__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_wav__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(__Vtrigprevexpr_h69dc0e1f__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h69dc0e1f__1)));
    vlSelfRef.__VactTriggered.setBit(4U, ((IData)(__Vtrigprevexpr_h041a9367__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h041a9367__1)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_wav__DOT__clk__0 
        = vlSelfRef.tb_wav__DOT__clk;
    vlSelfRef.__Vtrigprevexpr_h69dc0e1f__1 = __Vtrigprevexpr_h69dc0e1f__0;
    vlSelfRef.__Vtrigprevexpr_h041a9367__1 = __Vtrigprevexpr_h041a9367__0;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(3U, 1U);
        vlSelfRef.__VactTriggered.setBit(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_wav___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_wav___024root___nba_sequent__TOP__0(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___nba_sequent__TOP__0\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_tb_wav__DOT__expected__0__Vfuncout;
    __Vfunc_tb_wav__DOT__expected__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_wav__DOT__expected__0__i;
    __Vfunc_tb_wav__DOT__expected__0__i = 0;
    SData/*15:0*/ __Vfunc_tb_wav__DOT__expected__0__left;
    __Vfunc_tb_wav__DOT__expected__0__left = 0;
    IData/*31:0*/ __Vfunc_tb_wav__DOT__dut__DOT__le32__24__Vfuncout;
    __Vfunc_tb_wav__DOT__dut__DOT__le32__24__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_wav__DOT__dut__DOT__le32__25__Vfuncout;
    __Vfunc_tb_wav__DOT__dut__DOT__le32__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_wav__DOT__dut__DOT__le32__26__Vfuncout;
    __Vfunc_tb_wav__DOT__dut__DOT__le32__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_wav__DOT__dut__DOT__le32__27__Vfuncout;
    __Vfunc_tb_wav__DOT__dut__DOT__le32__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_wav__DOT__dut__DOT__le32__28__Vfuncout;
    __Vfunc_tb_wav__DOT__dut__DOT__le32__28__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_wav__DOT__dut__DOT__le32__29__Vfuncout;
    __Vfunc_tb_wav__DOT__dut__DOT__le32__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_wav__DOT__dut__DOT__le32__30__Vfuncout;
    __Vfunc_tb_wav__DOT__dut__DOT__le32__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_wav__DOT__dut__DOT__le32__31__Vfuncout;
    __Vfunc_tb_wav__DOT__dut__DOT__le32__31__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_wav__DOT__dut__DOT__le32__32__Vfuncout;
    __Vfunc_tb_wav__DOT__dut__DOT__le32__32__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_wav__DOT__dut__DOT__le16__33__Vfuncout;
    __Vfunc_tb_wav__DOT__dut__DOT__le16__33__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_wav__DOT__dut__DOT__le16__34__Vfuncout;
    __Vfunc_tb_wav__DOT__dut__DOT__le16__34__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_wav__DOT__dut__DOT__le32__35__Vfuncout;
    __Vfunc_tb_wav__DOT__dut__DOT__le32__35__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_wav__DOT__dut__DOT__le32__36__Vfuncout;
    __Vfunc_tb_wav__DOT__dut__DOT__le32__36__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_wav__DOT__dut__DOT__le16__37__Vfuncout;
    __Vfunc_tb_wav__DOT__dut__DOT__le16__37__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_wav__DOT__dut__DOT__le16__38__Vfuncout;
    __Vfunc_tb_wav__DOT__dut__DOT__le16__38__Vfuncout = 0;
    IData/*31:0*/ __Vdly__tb_wav__DOT__sent;
    __Vdly__tb_wav__DOT__sent = 0;
    IData/*31:0*/ __Vdly__tb_wav__DOT__received;
    __Vdly__tb_wav__DOT__received = 0;
    CData/*0:0*/ __Vdly__tb_wav__DOT__held;
    __Vdly__tb_wav__DOT__held = 0;
    IData/*31:0*/ __Vdly__tb_wav__DOT__cycle;
    __Vdly__tb_wav__DOT__cycle = 0;
    CData/*3:0*/ __Vdly__tb_wav__DOT__dut__DOT__state;
    __Vdly__tb_wav__DOT__dut__DOT__state = 0;
    CData/*3:0*/ __Vdly__tb_wav__DOT__dut__DOT__index;
    __Vdly__tb_wav__DOT__dut__DOT__index = 0;
    IData/*31:0*/ __Vdly__tb_wav__DOT__dut__DOT__offset;
    __Vdly__tb_wav__DOT__dut__DOT__offset = 0;
    IData/*31:0*/ __Vdly__tb_wav__DOT__dut__DOT__length;
    __Vdly__tb_wav__DOT__dut__DOT__length = 0;
    IData/*31:0*/ __Vdly__tb_wav__DOT__dut__DOT__riff_end;
    __Vdly__tb_wav__DOT__dut__DOT__riff_end = 0;
    IData/*31:0*/ __Vdly__tb_wav__DOT__dut__DOT__remaining;
    __Vdly__tb_wav__DOT__dut__DOT__remaining = 0;
    CData/*0:0*/ __Vdly__tb_wav__DOT__dut__DOT__chunk_odd;
    __Vdly__tb_wav__DOT__dut__DOT__chunk_odd = 0;
    CData/*0:0*/ __Vdly__tb_wav__DOT__dut__DOT__format_seen;
    __Vdly__tb_wav__DOT__dut__DOT__format_seen = 0;
    CData/*1:0*/ __Vdly__tb_wav__DOT__dut__DOT__channel_byte;
    __Vdly__tb_wav__DOT__dut__DOT__channel_byte = 0;
    IData/*23:0*/ __Vdly__tb_wav__DOT__dut__DOT__assembly;
    __Vdly__tb_wav__DOT__dut__DOT__assembly = 0;
    CData/*0:0*/ __Vdly__tb_wav__DOT__pcm_valid;
    __Vdly__tb_wav__DOT__pcm_valid = 0;
    IData/*31:0*/ __Vdly__tb_wav__DOT__pairs;
    __Vdly__tb_wav__DOT__pairs = 0;
    CData/*7:0*/ __VdlyVal__tb_wav__DOT__dut__DOT__header__v0;
    __VdlyVal__tb_wav__DOT__dut__DOT__header__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tb_wav__DOT__dut__DOT__header__v0;
    __VdlyDim0__tb_wav__DOT__dut__DOT__header__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_wav__DOT__dut__DOT__header__v0;
    __VdlySet__tb_wav__DOT__dut__DOT__header__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_wav__DOT__dut__DOT__header__v1;
    __VdlyVal__tb_wav__DOT__dut__DOT__header__v1 = 0;
    CData/*3:0*/ __VdlyDim0__tb_wav__DOT__dut__DOT__header__v1;
    __VdlyDim0__tb_wav__DOT__dut__DOT__header__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_wav__DOT__dut__DOT__header__v1;
    __VdlySet__tb_wav__DOT__dut__DOT__header__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_wav__DOT__dut__DOT__header__v2;
    __VdlyVal__tb_wav__DOT__dut__DOT__header__v2 = 0;
    CData/*3:0*/ __VdlyDim0__tb_wav__DOT__dut__DOT__header__v2;
    __VdlyDim0__tb_wav__DOT__dut__DOT__header__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_wav__DOT__dut__DOT__header__v2;
    __VdlySet__tb_wav__DOT__dut__DOT__header__v2 = 0;
    // Body
    __Vdly__tb_wav__DOT__dut__DOT__index = vlSelfRef.tb_wav__DOT__dut__DOT__index;
    __Vdly__tb_wav__DOT__dut__DOT__length = vlSelfRef.tb_wav__DOT__dut__DOT__length;
    __Vdly__tb_wav__DOT__dut__DOT__riff_end = vlSelfRef.tb_wav__DOT__dut__DOT__riff_end;
    __Vdly__tb_wav__DOT__dut__DOT__remaining = vlSelfRef.tb_wav__DOT__dut__DOT__remaining;
    __Vdly__tb_wav__DOT__dut__DOT__chunk_odd = vlSelfRef.tb_wav__DOT__dut__DOT__chunk_odd;
    __Vdly__tb_wav__DOT__dut__DOT__format_seen = vlSelfRef.tb_wav__DOT__dut__DOT__format_seen;
    __Vdly__tb_wav__DOT__dut__DOT__channel_byte = vlSelfRef.tb_wav__DOT__dut__DOT__channel_byte;
    __Vdly__tb_wav__DOT__dut__DOT__assembly = vlSelfRef.tb_wav__DOT__dut__DOT__assembly;
    __Vdly__tb_wav__DOT__pairs = vlSelfRef.tb_wav__DOT__pairs;
    __Vdly__tb_wav__DOT__dut__DOT__offset = vlSelfRef.tb_wav__DOT__dut__DOT__offset;
    __Vdly__tb_wav__DOT__dut__DOT__state = vlSelfRef.tb_wav__DOT__dut__DOT__state;
    __Vdly__tb_wav__DOT__pcm_valid = vlSelfRef.tb_wav__DOT__pcm_valid;
    __VdlySet__tb_wav__DOT__dut__DOT__header__v0 = 0U;
    __VdlySet__tb_wav__DOT__dut__DOT__header__v1 = 0U;
    __VdlySet__tb_wav__DOT__dut__DOT__header__v2 = 0U;
    __Vdly__tb_wav__DOT__received = vlSelfRef.tb_wav__DOT__received;
    __Vdly__tb_wav__DOT__held = vlSelfRef.tb_wav__DOT__held;
    __Vdly__tb_wav__DOT__sent = vlSelfRef.tb_wav__DOT__sent;
    __Vdly__tb_wav__DOT__cycle = vlSelfRef.tb_wav__DOT__cycle;
    if (((IData)(vlSelfRef.tb_wav__DOT__reset) | (IData)(vlSelfRef.tb_wav__DOT__start))) {
        __Vdly__tb_wav__DOT__sent = 0U;
        __Vdly__tb_wav__DOT__received = 0U;
        __Vdly__tb_wav__DOT__held = 0U;
    } else {
        if (((IData)(vlSelfRef.tb_wav__DOT__valid) 
             & (IData)(vlSelfRef.tb_wav__DOT__ready))) {
            __Vdly__tb_wav__DOT__sent = ((IData)(1U) 
                                         + vlSelfRef.tb_wav__DOT__sent);
        }
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_wav__DOT__held) 
                           & (0U == (IData)(vlSelfRef.tb_wav__DOT__source_error))) 
                          & ((~ (IData)(vlSelfRef.tb_wav__DOT__pcm_valid)) 
                             | (vlSelfRef.tb_wav__DOT__pair 
                                != vlSelfRef.tb_wav__DOT__held_pair)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_wav.sv:24: Assertion failed in %Ntb_wav: PCM changed under FIFO backpressure\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/media\\tb_wav.sv", 24, "", false);
        }
        if (((IData)(vlSelfRef.tb_wav__DOT__pcm_valid) 
             & (IData)(vlSelfRef.tb_wav__DOT__pcm_ready))) {
            if (VL_UNLIKELY(((vlSelfRef.tb_wav__DOT__pair 
                              != ([&]() {
                                    __Vfunc_tb_wav__DOT__expected__0__i 
                                        = vlSelfRef.tb_wav__DOT__received;
                                    __Vfunc_tb_wav__DOT__expected__0__left 
                                        = (0xffffU 
                                           & (VL_MULS_III(32, (IData)(0x4d2U), __Vfunc_tb_wav__DOT__expected__0__i) 
                                              - (IData)(0x8000U)));
                                    __Vfunc_tb_wav__DOT__expected__0__Vfuncout 
                                        = (((~ (IData)(__Vfunc_tb_wav__DOT__expected__0__left)) 
                                            << 0x10U) 
                                           | (IData)(__Vfunc_tb_wav__DOT__expected__0__left));
                                }(), __Vfunc_tb_wav__DOT__expected__0__Vfuncout))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_wav.sv:27: Assertion failed in %Ntb_wav: PCM pair/order/sign corruption index=%0d actual=%x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.tb_wav__DOT__received,
                             32,vlSelfRef.tb_wav__DOT__pair);
                VL_STOP_MT("sim/media\\tb_wav.sv", 27, "", false);
            }
            __Vdly__tb_wav__DOT__received = ((IData)(1U) 
                                             + vlSelfRef.tb_wav__DOT__received);
        }
        __Vdly__tb_wav__DOT__held = ((IData)(vlSelfRef.tb_wav__DOT__pcm_valid) 
                                     & (~ (IData)(vlSelfRef.tb_wav__DOT__pcm_ready)));
        vlSelfRef.tb_wav__DOT__held_pair = vlSelfRef.tb_wav__DOT__pair;
    }
    __Vdly__tb_wav__DOT__cycle = ((IData)(1U) + vlSelfRef.tb_wav__DOT__cycle);
    vlSelfRef.tb_wav__DOT__received = __Vdly__tb_wav__DOT__received;
    vlSelfRef.tb_wav__DOT__held = __Vdly__tb_wav__DOT__held;
    vlSelfRef.tb_wav__DOT__sent = __Vdly__tb_wav__DOT__sent;
    if (vlSelfRef.tb_wav__DOT__reset) {
        __Vdly__tb_wav__DOT__dut__DOT__state = 0U;
        __Vdly__tb_wav__DOT__dut__DOT__index = 0U;
        __Vdly__tb_wav__DOT__dut__DOT__offset = 0U;
        __Vdly__tb_wav__DOT__dut__DOT__length = 0U;
        __Vdly__tb_wav__DOT__dut__DOT__riff_end = 0U;
        __Vdly__tb_wav__DOT__dut__DOT__remaining = 0U;
        __Vdly__tb_wav__DOT__dut__DOT__chunk_odd = 0U;
        __Vdly__tb_wav__DOT__dut__DOT__format_seen = 0U;
        __Vdly__tb_wav__DOT__dut__DOT__channel_byte = 0U;
        __Vdly__tb_wav__DOT__dut__DOT__assembly = 0U;
        __Vdly__tb_wav__DOT__pcm_valid = 0U;
        vlSelfRef.tb_wav__DOT__pair = 0U;
        vlSelfRef.tb_wav__DOT__done = 0U;
        vlSelfRef.tb_wav__DOT__error = 0U;
        __Vdly__tb_wav__DOT__pairs = 0U;
        vlSelfRef.tb_wav__DOT__total = 0U;
    } else if (vlSelfRef.tb_wav__DOT__start) {
        __Vdly__tb_wav__DOT__dut__DOT__state = 1U;
        __Vdly__tb_wav__DOT__dut__DOT__index = 0U;
        __Vdly__tb_wav__DOT__dut__DOT__offset = 0U;
        __Vdly__tb_wav__DOT__dut__DOT__length = vlSelfRef.tb_wav__DOT__length;
        __Vdly__tb_wav__DOT__dut__DOT__riff_end = 0U;
        __Vdly__tb_wav__DOT__dut__DOT__remaining = 0U;
        __Vdly__tb_wav__DOT__dut__DOT__chunk_odd = 0U;
        __Vdly__tb_wav__DOT__dut__DOT__format_seen = 0U;
        __Vdly__tb_wav__DOT__dut__DOT__channel_byte = 0U;
        __Vdly__tb_wav__DOT__dut__DOT__assembly = 0U;
        __Vdly__tb_wav__DOT__pcm_valid = 0U;
        vlSelfRef.tb_wav__DOT__pair = 0U;
        vlSelfRef.tb_wav__DOT__done = 0U;
        __Vdly__tb_wav__DOT__pairs = 0U;
        vlSelfRef.tb_wav__DOT__total = 0U;
        vlSelfRef.tb_wav__DOT__error = 0U;
        if ((0xcU > vlSelfRef.tb_wav__DOT__length)) {
            __Vdly__tb_wav__DOT__dut__DOT__state = 0xfU;
            vlSelfRef.tb_wav__DOT__error = 2U;
        }
    } else {
        if (((IData)(vlSelfRef.tb_wav__DOT__pcm_valid) 
             & VL_LTES_III(32, 3U, VL_MODDIVS_III(32, vlSelfRef.tb_wav__DOT__cycle, (IData)(7U))))) {
            __Vdly__tb_wav__DOT__pcm_valid = 0U;
        }
        if (vlSelfRef.tb_wav__DOT__dut__DOT__consume) {
            __Vdly__tb_wav__DOT__dut__DOT__offset = 
                ((IData)(1U) + vlSelfRef.tb_wav__DOT__dut__DOT__offset);
        }
        if (((((0U != (IData)(vlSelfRef.tb_wav__DOT__source_error)) 
               & (0U != (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state))) 
              & (0xbU != (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state))) 
             & (0xfU != (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state)))) {
            vlSelfRef.tb_wav__DOT__error = (0x80U | (IData)(vlSelfRef.tb_wav__DOT__source_error));
            __Vdly__tb_wav__DOT__dut__DOT__state = 0xfU;
            __Vdly__tb_wav__DOT__pcm_valid = 0U;
        } else if (((((((((((0U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state)) 
                            || (0xbU == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state))) 
                           || (0xfU == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state))) 
                          | (1U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state))) 
                         | (2U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state))) 
                        | (3U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state))) 
                       | (4U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state))) 
                      | (5U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state))) 
                     | (6U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state))) 
                    | (7U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state)))) {
            if ((1U & (~ (((0U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state)) 
                           || (0xbU == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state))) 
                          || (0xfU == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state)))))) {
                if ((1U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state))) {
                    if (vlSelfRef.tb_wav__DOT__dut__DOT__consume) {
                        __VdlyVal__tb_wav__DOT__dut__DOT__header__v0 
                            = vlSelfRef.tb_wav__DOT____Vcellinp__dut__byte_data;
                        __VdlyDim0__tb_wav__DOT__dut__DOT__header__v0 
                            = vlSelfRef.tb_wav__DOT__dut__DOT__index;
                        __VdlySet__tb_wav__DOT__dut__DOT__header__v0 = 1U;
                        if ((0xbU == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__index))) {
                            __Vdly__tb_wav__DOT__dut__DOT__index = 0U;
                            __Vdly__tb_wav__DOT__dut__DOT__state = 2U;
                        } else {
                            __Vdly__tb_wav__DOT__dut__DOT__index 
                                = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__index)));
                        }
                    }
                } else if ((2U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state))) {
                    if (((0x46464952U != ([&]() {
                                        __Vfunc_tb_wav__DOT__dut__DOT__le32__24__Vfuncout 
                                            = (((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                 [3U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                   [2U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                   [1U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                  [0U]));
                                    }(), __Vfunc_tb_wav__DOT__dut__DOT__le32__24__Vfuncout)) 
                         | (0x45564157U != ([&]() {
                                        __Vfunc_tb_wav__DOT__dut__DOT__le32__25__Vfuncout 
                                            = (((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                 [0xbU] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                   [0xaU] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                   [9U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                  [8U]));
                                    }(), __Vfunc_tb_wav__DOT__dut__DOT__le32__25__Vfuncout)))) {
                        vlSelfRef.tb_wav__DOT__error = 1U;
                        __Vdly__tb_wav__DOT__dut__DOT__state = 0xfU;
                    } else if (((0xcULL > vlSelfRef.tb_wav__DOT__dut__DOT__riff_length) 
                                | (vlSelfRef.tb_wav__DOT__dut__DOT__riff_length 
                                   > (QData)((IData)(vlSelfRef.tb_wav__DOT__dut__DOT__length))))) {
                        vlSelfRef.tb_wav__DOT__error = 2U;
                        __Vdly__tb_wav__DOT__dut__DOT__state = 0xfU;
                    } else {
                        __Vdly__tb_wav__DOT__dut__DOT__riff_end 
                            = (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__riff_length);
                        __Vdly__tb_wav__DOT__dut__DOT__index = 0U;
                        __Vdly__tb_wav__DOT__dut__DOT__state = 3U;
                    }
                } else if ((3U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state))) {
                    if (((0U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__index)) 
                         & ((0x1ffffffffULL & (8ULL 
                                               + (QData)((IData)(vlSelfRef.tb_wav__DOT__dut__DOT__offset)))) 
                            > (QData)((IData)(vlSelfRef.tb_wav__DOT__dut__DOT__riff_end))))) {
                        vlSelfRef.tb_wav__DOT__error = 4U;
                        __Vdly__tb_wav__DOT__dut__DOT__state = 0xfU;
                    } else if (vlSelfRef.tb_wav__DOT__dut__DOT__consume) {
                        __VdlyVal__tb_wav__DOT__dut__DOT__header__v1 
                            = vlSelfRef.tb_wav__DOT____Vcellinp__dut__byte_data;
                        __VdlyDim0__tb_wav__DOT__dut__DOT__header__v1 
                            = vlSelfRef.tb_wav__DOT__dut__DOT__index;
                        __VdlySet__tb_wav__DOT__dut__DOT__header__v1 = 1U;
                        if ((7U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__index))) {
                            __Vdly__tb_wav__DOT__dut__DOT__index = 0U;
                            __Vdly__tb_wav__DOT__dut__DOT__state = 4U;
                        } else {
                            __Vdly__tb_wav__DOT__dut__DOT__index 
                                = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__index)));
                        }
                    }
                } else if ((4U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state))) {
                    __Vfunc_tb_wav__DOT__dut__DOT__le32__26__Vfuncout 
                        = (((vlSelfRef.tb_wav__DOT__dut__DOT__header
                             [7U] << 0x18U) | (vlSelfRef.tb_wav__DOT__dut__DOT__header
                                               [6U] 
                                               << 0x10U)) 
                           | ((vlSelfRef.tb_wav__DOT__dut__DOT__header
                               [5U] << 8U) | vlSelfRef.tb_wav__DOT__dut__DOT__header
                              [4U]));
                    __Vdly__tb_wav__DOT__dut__DOT__remaining 
                        = __Vfunc_tb_wav__DOT__dut__DOT__le32__26__Vfuncout;
                    __Vdly__tb_wav__DOT__dut__DOT__index = 0U;
                    __Vdly__tb_wav__DOT__dut__DOT__chunk_odd 
                        = (1U & vlSelfRef.tb_wav__DOT__dut__DOT__header
                           [4U]);
                    if ((vlSelfRef.tb_wav__DOT__dut__DOT__chunk_end 
                         > (QData)((IData)(vlSelfRef.tb_wav__DOT__dut__DOT__riff_end)))) {
                        vlSelfRef.tb_wav__DOT__error = 4U;
                        __Vdly__tb_wav__DOT__dut__DOT__state = 0xfU;
                    } else if ((0x20746d66U == ([&]() {
                                    __Vfunc_tb_wav__DOT__dut__DOT__le32__27__Vfuncout 
                                        = (((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                             [3U] << 0x18U) 
                                            | (vlSelfRef.tb_wav__DOT__dut__DOT__header
                                               [2U] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                               [1U] 
                                               << 8U) 
                                              | vlSelfRef.tb_wav__DOT__dut__DOT__header
                                              [0U]));
                                }(), __Vfunc_tb_wav__DOT__dut__DOT__le32__27__Vfuncout))) {
                        if (((0x10U > ([&]() {
                                            __Vfunc_tb_wav__DOT__dut__DOT__le32__28__Vfuncout 
                                                = (
                                                   ((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                     [7U] 
                                                     << 0x18U) 
                                                    | (vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                       [6U] 
                                                       << 0x10U)) 
                                                   | ((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                       [5U] 
                                                       << 8U) 
                                                      | vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                      [4U]));
                                        }(), __Vfunc_tb_wav__DOT__dut__DOT__le32__28__Vfuncout)) 
                             | (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__format_seen))) {
                            vlSelfRef.tb_wav__DOT__error = 3U;
                            __Vdly__tb_wav__DOT__dut__DOT__state = 0xfU;
                        } else {
                            __Vdly__tb_wav__DOT__dut__DOT__state = 5U;
                        }
                    } else if ((0x61746164U == ([&]() {
                                    __Vfunc_tb_wav__DOT__dut__DOT__le32__29__Vfuncout 
                                        = (((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                             [3U] << 0x18U) 
                                            | (vlSelfRef.tb_wav__DOT__dut__DOT__header
                                               [2U] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                               [1U] 
                                               << 8U) 
                                              | vlSelfRef.tb_wav__DOT__dut__DOT__header
                                              [0U]));
                                }(), __Vfunc_tb_wav__DOT__dut__DOT__le32__29__Vfuncout))) {
                        if (vlSelfRef.tb_wav__DOT__dut__DOT__format_seen) {
                            if (((0U == ([&]() {
                                                __Vfunc_tb_wav__DOT__dut__DOT__le32__30__Vfuncout 
                                                    = 
                                                    (((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                       [7U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                         [6U] 
                                                         << 0x10U)) 
                                                     | ((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                         [5U] 
                                                         << 8U) 
                                                        | vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                        [4U]));
                                            }(), __Vfunc_tb_wav__DOT__dut__DOT__le32__30__Vfuncout)) 
                                 | (0U != (3U & vlSelfRef.tb_wav__DOT__dut__DOT__header
                                           [4U])))) {
                                vlSelfRef.tb_wav__DOT__error = 7U;
                                __Vdly__tb_wav__DOT__dut__DOT__state = 0xfU;
                            } else {
                                vlSelfRef.tb_wav__DOT__total 
                                    = VL_SHIFTR_III(32,32,32, 
                                                    ([&]() {
                                            __Vfunc_tb_wav__DOT__dut__DOT__le32__31__Vfuncout 
                                                = (
                                                   ((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                     [7U] 
                                                     << 0x18U) 
                                                    | (vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                       [6U] 
                                                       << 0x10U)) 
                                                   | ((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                       [5U] 
                                                       << 8U) 
                                                      | vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                      [4U]));
                                        }(), __Vfunc_tb_wav__DOT__dut__DOT__le32__31__Vfuncout), 2U);
                                __Vdly__tb_wav__DOT__dut__DOT__channel_byte = 0U;
                                __Vdly__tb_wav__DOT__dut__DOT__state = 9U;
                            }
                        } else {
                            vlSelfRef.tb_wav__DOT__error = 6U;
                            __Vdly__tb_wav__DOT__dut__DOT__state = 0xfU;
                        }
                    } else {
                        __Vdly__tb_wav__DOT__dut__DOT__state 
                            = ((0U == ([&]() {
                                        __Vfunc_tb_wav__DOT__dut__DOT__le32__32__Vfuncout 
                                            = (((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                 [7U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                   [6U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                   [5U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                  [4U]));
                                    }(), __Vfunc_tb_wav__DOT__dut__DOT__le32__32__Vfuncout))
                                ? 3U : 7U);
                    }
                } else if ((5U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state))) {
                    if (vlSelfRef.tb_wav__DOT__dut__DOT__consume) {
                        __Vdly__tb_wav__DOT__dut__DOT__remaining 
                            = (vlSelfRef.tb_wav__DOT__dut__DOT__remaining 
                               - (IData)(1U));
                        __VdlyVal__tb_wav__DOT__dut__DOT__header__v2 
                            = vlSelfRef.tb_wav__DOT____Vcellinp__dut__byte_data;
                        __VdlyDim0__tb_wav__DOT__dut__DOT__header__v2 
                            = vlSelfRef.tb_wav__DOT__dut__DOT__index;
                        __VdlySet__tb_wav__DOT__dut__DOT__header__v2 = 1U;
                        if ((0xfU == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__index))) {
                            __Vdly__tb_wav__DOT__dut__DOT__index = 0U;
                            __Vdly__tb_wav__DOT__dut__DOT__state = 6U;
                        } else {
                            __Vdly__tb_wav__DOT__dut__DOT__index 
                                = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__index)));
                        }
                    }
                } else if ((6U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state))) {
                    if (((((((1U != ([&]() {
                                                        __Vfunc_tb_wav__DOT__dut__DOT__le16__33__Vfuncout 
                                                            = 
                                                            ((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                              [1U] 
                                                              << 8U) 
                                                             | vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                             [0U]);
                                                    }(), (IData)(__Vfunc_tb_wav__DOT__dut__DOT__le16__33__Vfuncout))) 
                             | (2U != ([&]() {
                                                        __Vfunc_tb_wav__DOT__dut__DOT__le16__34__Vfuncout 
                                                            = 
                                                            ((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                              [3U] 
                                                              << 8U) 
                                                             | vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                             [2U]);
                                                    }(), (IData)(__Vfunc_tb_wav__DOT__dut__DOT__le16__34__Vfuncout)))) 
                            | (0xbb80U != ([&]() {
                                                    __Vfunc_tb_wav__DOT__dut__DOT__le32__35__Vfuncout 
                                                        = 
                                                        (((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                           [7U] 
                                                           << 0x18U) 
                                                          | (vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                             [6U] 
                                                             << 0x10U)) 
                                                         | ((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                             [5U] 
                                                             << 8U) 
                                                            | vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                            [4U]));
                                                }(), __Vfunc_tb_wav__DOT__dut__DOT__le32__35__Vfuncout))) 
                           | (0x2ee00U != ([&]() {
                                                __Vfunc_tb_wav__DOT__dut__DOT__le32__36__Vfuncout 
                                                    = 
                                                    (((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                       [0xbU] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                         [0xaU] 
                                                         << 0x10U)) 
                                                     | ((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                         [9U] 
                                                         << 8U) 
                                                        | vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                        [8U]));
                                            }(), __Vfunc_tb_wav__DOT__dut__DOT__le32__36__Vfuncout))) 
                          | (4U != ([&]() {
                                            __Vfunc_tb_wav__DOT__dut__DOT__le16__37__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                    [0xdU] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                   [0xcU]);
                                        }(), (IData)(__Vfunc_tb_wav__DOT__dut__DOT__le16__37__Vfuncout)))) 
                         | (0x10U != ([&]() {
                                        __Vfunc_tb_wav__DOT__dut__DOT__le16__38__Vfuncout 
                                            = ((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                [0xfU] 
                                                << 8U) 
                                               | vlSelfRef.tb_wav__DOT__dut__DOT__header
                                               [0xeU]);
                                    }(), (IData)(__Vfunc_tb_wav__DOT__dut__DOT__le16__38__Vfuncout))))) {
                        vlSelfRef.tb_wav__DOT__error = 3U;
                        __Vdly__tb_wav__DOT__dut__DOT__state = 0xfU;
                    } else {
                        __Vdly__tb_wav__DOT__dut__DOT__format_seen = 1U;
                        __Vdly__tb_wav__DOT__dut__DOT__state 
                            = ((0U != vlSelfRef.tb_wav__DOT__dut__DOT__remaining)
                                ? 7U : ((IData)(vlSelfRef.tb_wav__DOT__dut__DOT__chunk_odd)
                                         ? 8U : 3U));
                    }
                } else if (vlSelfRef.tb_wav__DOT__dut__DOT__consume) {
                    __Vdly__tb_wav__DOT__dut__DOT__remaining 
                        = (vlSelfRef.tb_wav__DOT__dut__DOT__remaining 
                           - (IData)(1U));
                    if ((1U == vlSelfRef.tb_wav__DOT__dut__DOT__remaining)) {
                        __Vdly__tb_wav__DOT__dut__DOT__index = 0U;
                        __Vdly__tb_wav__DOT__dut__DOT__state 
                            = ((IData)(vlSelfRef.tb_wav__DOT__dut__DOT__chunk_odd)
                                ? 8U : 3U);
                    }
                }
            }
        } else if ((8U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state))) {
            if (vlSelfRef.tb_wav__DOT__dut__DOT__consume) {
                __Vdly__tb_wav__DOT__dut__DOT__index = 0U;
                __Vdly__tb_wav__DOT__dut__DOT__state = 3U;
            }
        } else if ((9U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state))) {
            if (vlSelfRef.tb_wav__DOT__dut__DOT__consume) {
                __Vdly__tb_wav__DOT__dut__DOT__remaining 
                    = (vlSelfRef.tb_wav__DOT__dut__DOT__remaining 
                       - (IData)(1U));
                __Vdly__tb_wav__DOT__dut__DOT__channel_byte 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__channel_byte)));
                if ((0U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__channel_byte))) {
                    __Vdly__tb_wav__DOT__dut__DOT__assembly 
                        = ((0xffff00U & __Vdly__tb_wav__DOT__dut__DOT__assembly) 
                           | (IData)(vlSelfRef.tb_wav__DOT____Vcellinp__dut__byte_data));
                } else if ((1U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__channel_byte))) {
                    __Vdly__tb_wav__DOT__dut__DOT__assembly 
                        = ((0xff00ffU & __Vdly__tb_wav__DOT__dut__DOT__assembly) 
                           | ((IData)(vlSelfRef.tb_wav__DOT____Vcellinp__dut__byte_data) 
                              << 8U));
                } else if ((2U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__channel_byte))) {
                    __Vdly__tb_wav__DOT__dut__DOT__assembly 
                        = ((0xffffU & __Vdly__tb_wav__DOT__dut__DOT__assembly) 
                           | ((IData)(vlSelfRef.tb_wav__DOT____Vcellinp__dut__byte_data) 
                              << 0x10U));
                } else if ((3U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__channel_byte))) {
                    __Vdly__tb_wav__DOT__pairs = ((IData)(1U) 
                                                  + vlSelfRef.tb_wav__DOT__pairs);
                    vlSelfRef.tb_wav__DOT__pair = (
                                                   ((IData)(vlSelfRef.tb_wav__DOT____Vcellinp__dut__byte_data) 
                                                    << 0x18U) 
                                                   | vlSelfRef.tb_wav__DOT__dut__DOT__assembly);
                    __Vdly__tb_wav__DOT__pcm_valid = 1U;
                }
                if ((1U == vlSelfRef.tb_wav__DOT__dut__DOT__remaining)) {
                    __Vdly__tb_wav__DOT__dut__DOT__state = 0xaU;
                }
            }
        } else if ((0xaU == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state))) {
            if ((1U & ((~ (IData)(vlSelfRef.tb_wav__DOT__pcm_valid)) 
                       | VL_LTES_III(32, 3U, VL_MODDIVS_III(32, vlSelfRef.tb_wav__DOT__cycle, (IData)(7U)))))) {
                vlSelfRef.tb_wav__DOT__done = 1U;
                __Vdly__tb_wav__DOT__dut__DOT__state = 0xbU;
            }
        } else {
            vlSelfRef.tb_wav__DOT__error = 0xffU;
            __Vdly__tb_wav__DOT__dut__DOT__state = 0xfU;
            __Vdly__tb_wav__DOT__pcm_valid = 0U;
        }
    }
    vlSelfRef.tb_wav__DOT__dut__DOT__index = __Vdly__tb_wav__DOT__dut__DOT__index;
    vlSelfRef.tb_wav__DOT__dut__DOT__length = __Vdly__tb_wav__DOT__dut__DOT__length;
    vlSelfRef.tb_wav__DOT__dut__DOT__riff_end = __Vdly__tb_wav__DOT__dut__DOT__riff_end;
    vlSelfRef.tb_wav__DOT__dut__DOT__remaining = __Vdly__tb_wav__DOT__dut__DOT__remaining;
    vlSelfRef.tb_wav__DOT__dut__DOT__chunk_odd = __Vdly__tb_wav__DOT__dut__DOT__chunk_odd;
    vlSelfRef.tb_wav__DOT__dut__DOT__format_seen = __Vdly__tb_wav__DOT__dut__DOT__format_seen;
    vlSelfRef.tb_wav__DOT__dut__DOT__channel_byte = __Vdly__tb_wav__DOT__dut__DOT__channel_byte;
    vlSelfRef.tb_wav__DOT__dut__DOT__assembly = __Vdly__tb_wav__DOT__dut__DOT__assembly;
    vlSelfRef.tb_wav__DOT__pairs = __Vdly__tb_wav__DOT__pairs;
    vlSelfRef.tb_wav__DOT__dut__DOT__offset = __Vdly__tb_wav__DOT__dut__DOT__offset;
    vlSelfRef.tb_wav__DOT__dut__DOT__state = __Vdly__tb_wav__DOT__dut__DOT__state;
    vlSelfRef.tb_wav__DOT__pcm_valid = __Vdly__tb_wav__DOT__pcm_valid;
    if (__VdlySet__tb_wav__DOT__dut__DOT__header__v0) {
        vlSelfRef.tb_wav__DOT__dut__DOT__header[__VdlyDim0__tb_wav__DOT__dut__DOT__header__v0] 
            = __VdlyVal__tb_wav__DOT__dut__DOT__header__v0;
    }
    if (__VdlySet__tb_wav__DOT__dut__DOT__header__v1) {
        vlSelfRef.tb_wav__DOT__dut__DOT__header[__VdlyDim0__tb_wav__DOT__dut__DOT__header__v1] 
            = __VdlyVal__tb_wav__DOT__dut__DOT__header__v1;
    }
    if (__VdlySet__tb_wav__DOT__dut__DOT__header__v2) {
        vlSelfRef.tb_wav__DOT__dut__DOT__header[__VdlyDim0__tb_wav__DOT__dut__DOT__header__v2] 
            = __VdlyVal__tb_wav__DOT__dut__DOT__header__v2;
    }
    vlSelfRef.tb_wav__DOT__cycle = __Vdly__tb_wav__DOT__cycle;
    vlSelfRef.tb_wav__DOT__dut__DOT__riff_length = 
        (0x1ffffffffULL & (8ULL + VL_EXTEND_QI(33,32, 
                                               ([&]() {
                        vlSelfRef.__Vfunc_tb_wav__DOT__dut__DOT__le32__22__Vfuncout 
                            = (((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                 [7U] << 0x18U) | (
                                                   vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                   [6U] 
                                                   << 0x10U)) 
                               | ((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                   [5U] << 8U) | vlSelfRef.tb_wav__DOT__dut__DOT__header
                                  [4U]));
                    }(), vlSelfRef.__Vfunc_tb_wav__DOT__dut__DOT__le32__22__Vfuncout))));
    vlSelfRef.tb_wav__DOT__dut__DOT__chunk_end = (0x1ffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.tb_wav__DOT__dut__DOT__offset)) 
                                                      + 
                                                      VL_EXTEND_QI(33,32, 
                                                                   ([&]() {
                            vlSelfRef.__Vfunc_tb_wav__DOT__dut__DOT__le32__23__Vfuncout 
                                = (((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                     [7U] << 0x18U) 
                                    | (vlSelfRef.tb_wav__DOT__dut__DOT__header
                                       [6U] << 0x10U)) 
                                   | ((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                       [5U] << 8U) 
                                      | vlSelfRef.tb_wav__DOT__dut__DOT__header
                                      [4U]));
                        }(), vlSelfRef.__Vfunc_tb_wav__DOT__dut__DOT__le32__23__Vfuncout))) 
                                                     + (QData)((IData)(
                                                                       (1U 
                                                                        & vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                                        [4U])))));
    vlSelfRef.tb_wav__DOT__pcm_ready = VL_LTES_III(32, 3U, 
                                                   VL_MODDIVS_III(32, vlSelfRef.tb_wav__DOT__cycle, (IData)(7U)));
}
