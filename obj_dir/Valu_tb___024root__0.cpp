// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_tb.h for the primary calling header

#include "Valu_tb__pch.h"

VlCoroutine Valu_tb___024root___eval_initial__TOP__Vtiming__0(Valu_tb___024root* vlSelf);

void Valu_tb___024root___eval_initial(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_initial\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Valu_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Valu_tb___024root___eval_initial__TOP__Vtiming__0(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vtask_alu_tb__DOT__check__0__op;
    __Vtask_alu_tb__DOT__check__0__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__0__a;
    __Vtask_alu_tb__DOT__check__0__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__0__b;
    __Vtask_alu_tb__DOT__check__0__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__0__expected;
    __Vtask_alu_tb__DOT__check__0__expected = 0;
    CData/*4:0*/ __Vtask_alu_tb__DOT__check__1__op;
    __Vtask_alu_tb__DOT__check__1__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__1__a;
    __Vtask_alu_tb__DOT__check__1__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__1__b;
    __Vtask_alu_tb__DOT__check__1__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__1__expected;
    __Vtask_alu_tb__DOT__check__1__expected = 0;
    CData/*4:0*/ __Vtask_alu_tb__DOT__check__2__op;
    __Vtask_alu_tb__DOT__check__2__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__2__a;
    __Vtask_alu_tb__DOT__check__2__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__2__b;
    __Vtask_alu_tb__DOT__check__2__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__2__expected;
    __Vtask_alu_tb__DOT__check__2__expected = 0;
    CData/*4:0*/ __Vtask_alu_tb__DOT__check__3__op;
    __Vtask_alu_tb__DOT__check__3__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__3__a;
    __Vtask_alu_tb__DOT__check__3__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__3__b;
    __Vtask_alu_tb__DOT__check__3__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__3__expected;
    __Vtask_alu_tb__DOT__check__3__expected = 0;
    CData/*4:0*/ __Vtask_alu_tb__DOT__check__4__op;
    __Vtask_alu_tb__DOT__check__4__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__4__a;
    __Vtask_alu_tb__DOT__check__4__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__4__b;
    __Vtask_alu_tb__DOT__check__4__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__4__expected;
    __Vtask_alu_tb__DOT__check__4__expected = 0;
    CData/*4:0*/ __Vtask_alu_tb__DOT__check__5__op;
    __Vtask_alu_tb__DOT__check__5__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__5__a;
    __Vtask_alu_tb__DOT__check__5__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__5__b;
    __Vtask_alu_tb__DOT__check__5__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__5__expected;
    __Vtask_alu_tb__DOT__check__5__expected = 0;
    CData/*4:0*/ __Vtask_alu_tb__DOT__check__6__op;
    __Vtask_alu_tb__DOT__check__6__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__6__a;
    __Vtask_alu_tb__DOT__check__6__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__6__b;
    __Vtask_alu_tb__DOT__check__6__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__6__expected;
    __Vtask_alu_tb__DOT__check__6__expected = 0;
    CData/*4:0*/ __Vtask_alu_tb__DOT__check__7__op;
    __Vtask_alu_tb__DOT__check__7__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__7__a;
    __Vtask_alu_tb__DOT__check__7__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__7__b;
    __Vtask_alu_tb__DOT__check__7__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__7__expected;
    __Vtask_alu_tb__DOT__check__7__expected = 0;
    CData/*4:0*/ __Vtask_alu_tb__DOT__check__8__op;
    __Vtask_alu_tb__DOT__check__8__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__8__a;
    __Vtask_alu_tb__DOT__check__8__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__8__b;
    __Vtask_alu_tb__DOT__check__8__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__8__expected;
    __Vtask_alu_tb__DOT__check__8__expected = 0;
    CData/*4:0*/ __Vtask_alu_tb__DOT__check__9__op;
    __Vtask_alu_tb__DOT__check__9__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__9__a;
    __Vtask_alu_tb__DOT__check__9__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__9__b;
    __Vtask_alu_tb__DOT__check__9__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__9__expected;
    __Vtask_alu_tb__DOT__check__9__expected = 0;
    CData/*4:0*/ __Vtask_alu_tb__DOT__check__10__op;
    __Vtask_alu_tb__DOT__check__10__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__10__a;
    __Vtask_alu_tb__DOT__check__10__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__10__b;
    __Vtask_alu_tb__DOT__check__10__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__10__expected;
    __Vtask_alu_tb__DOT__check__10__expected = 0;
    CData/*4:0*/ __Vtask_alu_tb__DOT__check__11__op;
    __Vtask_alu_tb__DOT__check__11__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__11__a;
    __Vtask_alu_tb__DOT__check__11__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__11__b;
    __Vtask_alu_tb__DOT__check__11__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__11__expected;
    __Vtask_alu_tb__DOT__check__11__expected = 0;
    CData/*4:0*/ __Vtask_alu_tb__DOT__check__12__op;
    __Vtask_alu_tb__DOT__check__12__op = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__12__a;
    __Vtask_alu_tb__DOT__check__12__a = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__12__b;
    __Vtask_alu_tb__DOT__check__12__b = 0;
    IData/*31:0*/ __Vtask_alu_tb__DOT__check__12__expected;
    __Vtask_alu_tb__DOT__check__12__expected = 0;
    // Body
    VL_WRITEF_NX("---- ALU TEST START ----\n",0);
    __Vtask_alu_tb__DOT__check__0__expected = 0x0000001eU;
    __Vtask_alu_tb__DOT__check__0__b = 0x00000014U;
    __Vtask_alu_tb__DOT__check__0__a = 0x0000000aU;
    __Vtask_alu_tb__DOT__check__0__op = 0U;
    vlSelfRef.alu_tb__DOT__alu_op = 0U;
    vlSelfRef.alu_tb__DOT__SrcA = 0x0000000aU;
    vlSelfRef.alu_tb__DOT__SrcB = 0x00000014U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/alu_tb.sv", 
                                         36);
    if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__ALUResult 
                      != __Vtask_alu_tb__DOT__check__0__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:39: Assertion failed in %Nalu_tb.check: FAIL: op=%0# A=%x B=%x | got=%x expected=%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     5,(IData)(__Vtask_alu_tb__DOT__check__0__op),
                     32,__Vtask_alu_tb__DOT__check__0__a,
                     32,__Vtask_alu_tb__DOT__check__0__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult,
                     32,__Vtask_alu_tb__DOT__check__0__expected);
        VL_STOP_MT("tb/alu_tb.sv", 39, "");
    } else {
        VL_WRITEF_NX("PASS: op=%0# A=%x B=%x | result=%x\n",0,
                     5,__Vtask_alu_tb__DOT__check__0__op,
                     32,__Vtask_alu_tb__DOT__check__0__a,
                     32,__Vtask_alu_tb__DOT__check__0__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult);
    }
    __Vtask_alu_tb__DOT__check__1__expected = 0x0000000aU;
    __Vtask_alu_tb__DOT__check__1__b = 0x0000000aU;
    __Vtask_alu_tb__DOT__check__1__a = 0x00000014U;
    __Vtask_alu_tb__DOT__check__1__op = 1U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__check__1__op;
    vlSelfRef.alu_tb__DOT__SrcA = __Vtask_alu_tb__DOT__check__1__a;
    vlSelfRef.alu_tb__DOT__SrcB = __Vtask_alu_tb__DOT__check__1__b;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/alu_tb.sv", 
                                         36);
    if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__ALUResult 
                      != __Vtask_alu_tb__DOT__check__1__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:39: Assertion failed in %Nalu_tb.check: FAIL: op=%0# A=%x B=%x | got=%x expected=%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     5,(IData)(__Vtask_alu_tb__DOT__check__1__op),
                     32,__Vtask_alu_tb__DOT__check__1__a,
                     32,__Vtask_alu_tb__DOT__check__1__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult,
                     32,__Vtask_alu_tb__DOT__check__1__expected);
        VL_STOP_MT("tb/alu_tb.sv", 39, "");
    } else {
        VL_WRITEF_NX("PASS: op=%0# A=%x B=%x | result=%x\n",0,
                     5,__Vtask_alu_tb__DOT__check__1__op,
                     32,__Vtask_alu_tb__DOT__check__1__a,
                     32,__Vtask_alu_tb__DOT__check__1__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult);
    }
    __Vtask_alu_tb__DOT__check__2__expected = 0U;
    __Vtask_alu_tb__DOT__check__2__b = 0x0000000aU;
    __Vtask_alu_tb__DOT__check__2__a = 0x0000000aU;
    __Vtask_alu_tb__DOT__check__2__op = 1U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__check__2__op;
    vlSelfRef.alu_tb__DOT__SrcA = __Vtask_alu_tb__DOT__check__2__a;
    vlSelfRef.alu_tb__DOT__SrcB = __Vtask_alu_tb__DOT__check__2__b;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/alu_tb.sv", 
                                         36);
    if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__ALUResult 
                      != __Vtask_alu_tb__DOT__check__2__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:39: Assertion failed in %Nalu_tb.check: FAIL: op=%0# A=%x B=%x | got=%x expected=%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     5,(IData)(__Vtask_alu_tb__DOT__check__2__op),
                     32,__Vtask_alu_tb__DOT__check__2__a,
                     32,__Vtask_alu_tb__DOT__check__2__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult,
                     32,__Vtask_alu_tb__DOT__check__2__expected);
        VL_STOP_MT("tb/alu_tb.sv", 39, "");
    } else {
        VL_WRITEF_NX("PASS: op=%0# A=%x B=%x | result=%x\n",0,
                     5,__Vtask_alu_tb__DOT__check__2__op,
                     32,__Vtask_alu_tb__DOT__check__2__a,
                     32,__Vtask_alu_tb__DOT__check__2__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult);
    }
    __Vtask_alu_tb__DOT__check__3__expected = 0x0f000f00U;
    __Vtask_alu_tb__DOT__check__3__b = 0x0f0f0f0fU;
    __Vtask_alu_tb__DOT__check__3__a = 0xff00ff00U;
    __Vtask_alu_tb__DOT__check__3__op = 2U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__check__3__op;
    vlSelfRef.alu_tb__DOT__SrcA = __Vtask_alu_tb__DOT__check__3__a;
    vlSelfRef.alu_tb__DOT__SrcB = __Vtask_alu_tb__DOT__check__3__b;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/alu_tb.sv", 
                                         36);
    if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__ALUResult 
                      != __Vtask_alu_tb__DOT__check__3__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:39: Assertion failed in %Nalu_tb.check: FAIL: op=%0# A=%x B=%x | got=%x expected=%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     5,(IData)(__Vtask_alu_tb__DOT__check__3__op),
                     32,__Vtask_alu_tb__DOT__check__3__a,
                     32,__Vtask_alu_tb__DOT__check__3__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult,
                     32,__Vtask_alu_tb__DOT__check__3__expected);
        VL_STOP_MT("tb/alu_tb.sv", 39, "");
    } else {
        VL_WRITEF_NX("PASS: op=%0# A=%x B=%x | result=%x\n",0,
                     5,__Vtask_alu_tb__DOT__check__3__op,
                     32,__Vtask_alu_tb__DOT__check__3__a,
                     32,__Vtask_alu_tb__DOT__check__3__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult);
    }
    __Vtask_alu_tb__DOT__check__4__expected = 0xff0fff0fU;
    __Vtask_alu_tb__DOT__check__4__b = 0x0f0f0f0fU;
    __Vtask_alu_tb__DOT__check__4__a = 0xff00ff00U;
    __Vtask_alu_tb__DOT__check__4__op = 3U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__check__4__op;
    vlSelfRef.alu_tb__DOT__SrcA = __Vtask_alu_tb__DOT__check__4__a;
    vlSelfRef.alu_tb__DOT__SrcB = __Vtask_alu_tb__DOT__check__4__b;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/alu_tb.sv", 
                                         36);
    if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__ALUResult 
                      != __Vtask_alu_tb__DOT__check__4__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:39: Assertion failed in %Nalu_tb.check: FAIL: op=%0# A=%x B=%x | got=%x expected=%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     5,(IData)(__Vtask_alu_tb__DOT__check__4__op),
                     32,__Vtask_alu_tb__DOT__check__4__a,
                     32,__Vtask_alu_tb__DOT__check__4__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult,
                     32,__Vtask_alu_tb__DOT__check__4__expected);
        VL_STOP_MT("tb/alu_tb.sv", 39, "");
    } else {
        VL_WRITEF_NX("PASS: op=%0# A=%x B=%x | result=%x\n",0,
                     5,__Vtask_alu_tb__DOT__check__4__op,
                     32,__Vtask_alu_tb__DOT__check__4__a,
                     32,__Vtask_alu_tb__DOT__check__4__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult);
    }
    __Vtask_alu_tb__DOT__check__5__expected = 0x55555555U;
    __Vtask_alu_tb__DOT__check__5__b = 0xffff0000U;
    __Vtask_alu_tb__DOT__check__5__a = 0xaaaa5555U;
    __Vtask_alu_tb__DOT__check__5__op = 4U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__check__5__op;
    vlSelfRef.alu_tb__DOT__SrcA = __Vtask_alu_tb__DOT__check__5__a;
    vlSelfRef.alu_tb__DOT__SrcB = __Vtask_alu_tb__DOT__check__5__b;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/alu_tb.sv", 
                                         36);
    if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__ALUResult 
                      != __Vtask_alu_tb__DOT__check__5__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:39: Assertion failed in %Nalu_tb.check: FAIL: op=%0# A=%x B=%x | got=%x expected=%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     5,(IData)(__Vtask_alu_tb__DOT__check__5__op),
                     32,__Vtask_alu_tb__DOT__check__5__a,
                     32,__Vtask_alu_tb__DOT__check__5__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult,
                     32,__Vtask_alu_tb__DOT__check__5__expected);
        VL_STOP_MT("tb/alu_tb.sv", 39, "");
    } else {
        VL_WRITEF_NX("PASS: op=%0# A=%x B=%x | result=%x\n",0,
                     5,__Vtask_alu_tb__DOT__check__5__op,
                     32,__Vtask_alu_tb__DOT__check__5__a,
                     32,__Vtask_alu_tb__DOT__check__5__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult);
    }
    __Vtask_alu_tb__DOT__check__6__expected = 0x00000010U;
    __Vtask_alu_tb__DOT__check__6__b = 4U;
    __Vtask_alu_tb__DOT__check__6__a = 1U;
    __Vtask_alu_tb__DOT__check__6__op = 5U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__check__6__op;
    vlSelfRef.alu_tb__DOT__SrcA = __Vtask_alu_tb__DOT__check__6__a;
    vlSelfRef.alu_tb__DOT__SrcB = __Vtask_alu_tb__DOT__check__6__b;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/alu_tb.sv", 
                                         36);
    if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__ALUResult 
                      != __Vtask_alu_tb__DOT__check__6__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:39: Assertion failed in %Nalu_tb.check: FAIL: op=%0# A=%x B=%x | got=%x expected=%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     5,(IData)(__Vtask_alu_tb__DOT__check__6__op),
                     32,__Vtask_alu_tb__DOT__check__6__a,
                     32,__Vtask_alu_tb__DOT__check__6__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult,
                     32,__Vtask_alu_tb__DOT__check__6__expected);
        VL_STOP_MT("tb/alu_tb.sv", 39, "");
    } else {
        VL_WRITEF_NX("PASS: op=%0# A=%x B=%x | result=%x\n",0,
                     5,__Vtask_alu_tb__DOT__check__6__op,
                     32,__Vtask_alu_tb__DOT__check__6__a,
                     32,__Vtask_alu_tb__DOT__check__6__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult);
    }
    __Vtask_alu_tb__DOT__check__7__expected = 0x08000000U;
    __Vtask_alu_tb__DOT__check__7__b = 4U;
    __Vtask_alu_tb__DOT__check__7__a = 0x80000000U;
    __Vtask_alu_tb__DOT__check__7__op = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__check__7__op;
    vlSelfRef.alu_tb__DOT__SrcA = __Vtask_alu_tb__DOT__check__7__a;
    vlSelfRef.alu_tb__DOT__SrcB = __Vtask_alu_tb__DOT__check__7__b;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/alu_tb.sv", 
                                         36);
    if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__ALUResult 
                      != __Vtask_alu_tb__DOT__check__7__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:39: Assertion failed in %Nalu_tb.check: FAIL: op=%0# A=%x B=%x | got=%x expected=%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     5,(IData)(__Vtask_alu_tb__DOT__check__7__op),
                     32,__Vtask_alu_tb__DOT__check__7__a,
                     32,__Vtask_alu_tb__DOT__check__7__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult,
                     32,__Vtask_alu_tb__DOT__check__7__expected);
        VL_STOP_MT("tb/alu_tb.sv", 39, "");
    } else {
        VL_WRITEF_NX("PASS: op=%0# A=%x B=%x | result=%x\n",0,
                     5,__Vtask_alu_tb__DOT__check__7__op,
                     32,__Vtask_alu_tb__DOT__check__7__a,
                     32,__Vtask_alu_tb__DOT__check__7__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult);
    }
    __Vtask_alu_tb__DOT__check__8__expected = 0xf8000000U;
    __Vtask_alu_tb__DOT__check__8__b = 4U;
    __Vtask_alu_tb__DOT__check__8__a = 0x80000000U;
    __Vtask_alu_tb__DOT__check__8__op = 7U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__check__8__op;
    vlSelfRef.alu_tb__DOT__SrcA = __Vtask_alu_tb__DOT__check__8__a;
    vlSelfRef.alu_tb__DOT__SrcB = __Vtask_alu_tb__DOT__check__8__b;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/alu_tb.sv", 
                                         36);
    if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__ALUResult 
                      != __Vtask_alu_tb__DOT__check__8__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:39: Assertion failed in %Nalu_tb.check: FAIL: op=%0# A=%x B=%x | got=%x expected=%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     5,(IData)(__Vtask_alu_tb__DOT__check__8__op),
                     32,__Vtask_alu_tb__DOT__check__8__a,
                     32,__Vtask_alu_tb__DOT__check__8__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult,
                     32,__Vtask_alu_tb__DOT__check__8__expected);
        VL_STOP_MT("tb/alu_tb.sv", 39, "");
    } else {
        VL_WRITEF_NX("PASS: op=%0# A=%x B=%x | result=%x\n",0,
                     5,__Vtask_alu_tb__DOT__check__8__op,
                     32,__Vtask_alu_tb__DOT__check__8__a,
                     32,__Vtask_alu_tb__DOT__check__8__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult);
    }
    __Vtask_alu_tb__DOT__check__9__expected = 1U;
    __Vtask_alu_tb__DOT__check__9__b = 1U;
    __Vtask_alu_tb__DOT__check__9__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__check__9__op = 8U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__check__9__op;
    vlSelfRef.alu_tb__DOT__SrcA = __Vtask_alu_tb__DOT__check__9__a;
    vlSelfRef.alu_tb__DOT__SrcB = __Vtask_alu_tb__DOT__check__9__b;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/alu_tb.sv", 
                                         36);
    if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__ALUResult 
                      != __Vtask_alu_tb__DOT__check__9__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:39: Assertion failed in %Nalu_tb.check: FAIL: op=%0# A=%x B=%x | got=%x expected=%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     5,(IData)(__Vtask_alu_tb__DOT__check__9__op),
                     32,__Vtask_alu_tb__DOT__check__9__a,
                     32,__Vtask_alu_tb__DOT__check__9__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult,
                     32,__Vtask_alu_tb__DOT__check__9__expected);
        VL_STOP_MT("tb/alu_tb.sv", 39, "");
    } else {
        VL_WRITEF_NX("PASS: op=%0# A=%x B=%x | result=%x\n",0,
                     5,__Vtask_alu_tb__DOT__check__9__op,
                     32,__Vtask_alu_tb__DOT__check__9__a,
                     32,__Vtask_alu_tb__DOT__check__9__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult);
    }
    __Vtask_alu_tb__DOT__check__10__expected = 0U;
    __Vtask_alu_tb__DOT__check__10__b = 0xfffffffdU;
    __Vtask_alu_tb__DOT__check__10__a = 5U;
    __Vtask_alu_tb__DOT__check__10__op = 8U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__check__10__op;
    vlSelfRef.alu_tb__DOT__SrcA = __Vtask_alu_tb__DOT__check__10__a;
    vlSelfRef.alu_tb__DOT__SrcB = __Vtask_alu_tb__DOT__check__10__b;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/alu_tb.sv", 
                                         36);
    if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__ALUResult 
                      != __Vtask_alu_tb__DOT__check__10__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:39: Assertion failed in %Nalu_tb.check: FAIL: op=%0# A=%x B=%x | got=%x expected=%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     5,(IData)(__Vtask_alu_tb__DOT__check__10__op),
                     32,__Vtask_alu_tb__DOT__check__10__a,
                     32,__Vtask_alu_tb__DOT__check__10__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult,
                     32,__Vtask_alu_tb__DOT__check__10__expected);
        VL_STOP_MT("tb/alu_tb.sv", 39, "");
    } else {
        VL_WRITEF_NX("PASS: op=%0# A=%x B=%x | result=%x\n",0,
                     5,__Vtask_alu_tb__DOT__check__10__op,
                     32,__Vtask_alu_tb__DOT__check__10__a,
                     32,__Vtask_alu_tb__DOT__check__10__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult);
    }
    __Vtask_alu_tb__DOT__check__11__expected = 1U;
    __Vtask_alu_tb__DOT__check__11__b = 0xffffffffU;
    __Vtask_alu_tb__DOT__check__11__a = 1U;
    __Vtask_alu_tb__DOT__check__11__op = 9U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__check__11__op;
    vlSelfRef.alu_tb__DOT__SrcA = __Vtask_alu_tb__DOT__check__11__a;
    vlSelfRef.alu_tb__DOT__SrcB = __Vtask_alu_tb__DOT__check__11__b;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/alu_tb.sv", 
                                         36);
    if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__ALUResult 
                      != __Vtask_alu_tb__DOT__check__11__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:39: Assertion failed in %Nalu_tb.check: FAIL: op=%0# A=%x B=%x | got=%x expected=%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     5,(IData)(__Vtask_alu_tb__DOT__check__11__op),
                     32,__Vtask_alu_tb__DOT__check__11__a,
                     32,__Vtask_alu_tb__DOT__check__11__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult,
                     32,__Vtask_alu_tb__DOT__check__11__expected);
        VL_STOP_MT("tb/alu_tb.sv", 39, "");
    } else {
        VL_WRITEF_NX("PASS: op=%0# A=%x B=%x | result=%x\n",0,
                     5,__Vtask_alu_tb__DOT__check__11__op,
                     32,__Vtask_alu_tb__DOT__check__11__a,
                     32,__Vtask_alu_tb__DOT__check__11__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult);
    }
    __Vtask_alu_tb__DOT__check__12__expected = 0U;
    __Vtask_alu_tb__DOT__check__12__b = 1U;
    __Vtask_alu_tb__DOT__check__12__a = 0xffffffffU;
    __Vtask_alu_tb__DOT__check__12__op = 9U;
    vlSelfRef.alu_tb__DOT__alu_op = __Vtask_alu_tb__DOT__check__12__op;
    vlSelfRef.alu_tb__DOT__SrcA = __Vtask_alu_tb__DOT__check__12__a;
    vlSelfRef.alu_tb__DOT__SrcB = __Vtask_alu_tb__DOT__check__12__b;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/alu_tb.sv", 
                                         36);
    if (VL_UNLIKELY(((vlSelfRef.alu_tb__DOT__ALUResult 
                      != __Vtask_alu_tb__DOT__check__12__expected)))) {
        VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:39: Assertion failed in %Nalu_tb.check: FAIL: op=%0# A=%x B=%x | got=%x expected=%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     5,(IData)(__Vtask_alu_tb__DOT__check__12__op),
                     32,__Vtask_alu_tb__DOT__check__12__a,
                     32,__Vtask_alu_tb__DOT__check__12__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult,
                     32,__Vtask_alu_tb__DOT__check__12__expected);
        VL_STOP_MT("tb/alu_tb.sv", 39, "");
    } else {
        VL_WRITEF_NX("PASS: op=%0# A=%x B=%x | result=%x\n",0,
                     5,__Vtask_alu_tb__DOT__check__12__op,
                     32,__Vtask_alu_tb__DOT__check__12__a,
                     32,__Vtask_alu_tb__DOT__check__12__b,
                     32,vlSelfRef.alu_tb__DOT__ALUResult);
    }
    vlSelfRef.alu_tb__DOT__alu_op = 1U;
    vlSelfRef.alu_tb__DOT__SrcA = 0x0000002aU;
    vlSelfRef.alu_tb__DOT__SrcB = 0x0000002aU;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/alu_tb.sv", 
                                         82);
    if (VL_LIKELY(((0U == vlSelfRef.alu_tb__DOT__ALUResult)))) {
        VL_WRITEF_NX("PASS: ZeroFlag asserted correctly\n",0);
    } else {
        VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:84: Assertion failed in %Nalu_tb: FAIL: ZeroFlag not asserted when result is zero\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/alu_tb.sv", 84, "");
    }
    VL_WRITEF_NX("---- ALU TEST END ----\n",0);
    VL_FINISH_MT("tb/alu_tb.sv", 89, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Valu_tb___024root___eval_triggers__act(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_triggers__act\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Valu_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Valu_tb___024root___act_sequent__TOP__0(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___act_sequent__TOP__0\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alu_tb__DOT__ALUResult = ((0x00000010U 
                                         & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                         ? 0U : ((8U 
                                                  & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                                     ? 
                                                    ((vlSelfRef.alu_tb__DOT__SrcA 
                                                      < vlSelfRef.alu_tb__DOT__SrcB)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    (VL_LTS_III(32, vlSelfRef.alu_tb__DOT__SrcA, vlSelfRef.alu_tb__DOT__SrcB)
                                                      ? 1U
                                                      : 0U))))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,32, vlSelfRef.alu_tb__DOT__SrcA, vlSelfRef.alu_tb__DOT__SrcB)
                                                     : 
                                                    (vlSelfRef.alu_tb__DOT__SrcA 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.alu_tb__DOT__SrcB)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                                     ? 
                                                    (vlSelfRef.alu_tb__DOT__SrcA 
                                                     << 
                                                     (0x0000001fU 
                                                      & vlSelfRef.alu_tb__DOT__SrcB))
                                                     : 
                                                    (vlSelfRef.alu_tb__DOT__SrcA 
                                                     ^ vlSelfRef.alu_tb__DOT__SrcB)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                                     ? 
                                                    (vlSelfRef.alu_tb__DOT__SrcA 
                                                     | vlSelfRef.alu_tb__DOT__SrcB)
                                                     : 
                                                    (vlSelfRef.alu_tb__DOT__SrcA 
                                                     & vlSelfRef.alu_tb__DOT__SrcB))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                                     ? 
                                                    (vlSelfRef.alu_tb__DOT__SrcA 
                                                     - vlSelfRef.alu_tb__DOT__SrcB)
                                                     : 
                                                    (vlSelfRef.alu_tb__DOT__SrcA 
                                                     + vlSelfRef.alu_tb__DOT__SrcB))))));
}

void Valu_tb___024root___eval_act(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_act\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Valu_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Valu_tb___024root___eval_nba(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_nba\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Valu_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Valu_tb___024root___timing_resume(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___timing_resume\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Valu_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Valu_tb___024root___eval_phase__act(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_phase__act\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Valu_tb___024root___eval_triggers__act(vlSelf);
    Valu_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Valu_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Valu_tb___024root___timing_resume(vlSelf);
        Valu_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Valu_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Valu_tb___024root___eval_phase__nba(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_phase__nba\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Valu_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Valu_tb___024root___eval_nba(vlSelf);
        Valu_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Valu_tb___024root___eval(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Valu_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/alu_tb.sv", 5, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Valu_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("tb/alu_tb.sv", 5, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Valu_tb___024root___eval_phase__act(vlSelf));
    } while (Valu_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Valu_tb___024root___eval_debug_assertions(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_debug_assertions\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
