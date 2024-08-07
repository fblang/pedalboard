/*
 * Copyright (c) 2003, 2007-14 Matteo Frigo
 * Copyright (c) 2003, 2007-14 Massachusetts Institute of Technology
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA
 *
 */

/* This file was automatically generated --- DO NOT EDIT */
/* Generated on Tue Sep 14 10:44:59 EDT 2021 */

#include "dft/codelet-dft.h"

#if defined(ARCH_PREFERS_FMA) || defined(ISA_EXTENSION_PREFERS_FMA)

/* Generated by: ../../../genfft/gen_notw_c.native -fma -simd -compact
 * -variables 4 -pipeline-latency 8 -n 11 -name n1fv_11 -include dft/simd/n1f.h
 */

/*
 * This function contains 70 FP additions, 60 FP multiplications,
 * (or, 15 additions, 5 multiplications, 55 fused multiply/add),
 * 42 stack variables, 11 constants, and 22 memory accesses
 */
#include "dft/simd/n1f.h"

static void n1fv_11(const R *ri, const R *ii, R *ro, R *io, stride is,
                    stride os, INT v, INT ivs, INT ovs) {
  DVK(KP959492973, +0.959492973614497389890368057066327699062454848);
  DVK(KP918985947, +0.918985947228994779780736114132655398124909697);
  DVK(KP989821441, +0.989821441880932732376092037776718787376519372);
  DVK(KP830830026, +0.830830026003772851058548298459246407048009821);
  DVK(KP876768831, +0.876768831002589333891339807079336796764054852);
  DVK(KP778434453, +0.778434453334651800608337670740821884709317477);
  DVK(KP372785597, +0.372785597771792209609773152906148328659002598);
  DVK(KP715370323, +0.715370323453429719112414662767260662417897278);
  DVK(KP521108558, +0.521108558113202722944698153526659300680427422);
  DVK(KP634356270, +0.634356270682424498893150776899916060542806975);
  DVK(KP342584725, +0.342584725681637509502641509861112333758894680);
  {
    INT i;
    const R *xi;
    R *xo;
    xi = ri;
    xo = ro;
    for (i = v; i > 0; i = i - VL, xi = xi + (VL * ivs), xo = xo + (VL * ovs),
        MAKE_VOLATILE_STRIDE(22, is), MAKE_VOLATILE_STRIDE(22, os)) {
      V T1, T4, Tp, Tg, Tq, T7, Tn, Ta, Tm, Td, To, Ti, Tw, T12, Ts;
      V TX, TT, TK, TB, TO, TF, T5, T6;
      T1 = LD(&(xi[0]), ivs, &(xi[0]));
      {
        V T2, T3, Te, Tf;
        T2 = LD(&(xi[WS(is, 1)]), ivs, &(xi[WS(is, 1)]));
        T3 = LD(&(xi[WS(is, 10)]), ivs, &(xi[0]));
        T4 = VADD(T2, T3);
        Tp = VSUB(T3, T2);
        Te = LD(&(xi[WS(is, 5)]), ivs, &(xi[WS(is, 1)]));
        Tf = LD(&(xi[WS(is, 6)]), ivs, &(xi[0]));
        Tg = VADD(Te, Tf);
        Tq = VSUB(Tf, Te);
      }
      T5 = LD(&(xi[WS(is, 2)]), ivs, &(xi[0]));
      T6 = LD(&(xi[WS(is, 9)]), ivs, &(xi[WS(is, 1)]));
      T7 = VADD(T5, T6);
      Tn = VSUB(T6, T5);
      {
        V T8, T9, Tb, Tc;
        T8 = LD(&(xi[WS(is, 3)]), ivs, &(xi[WS(is, 1)]));
        T9 = LD(&(xi[WS(is, 8)]), ivs, &(xi[0]));
        Ta = VADD(T8, T9);
        Tm = VSUB(T9, T8);
        Tb = LD(&(xi[WS(is, 4)]), ivs, &(xi[0]));
        Tc = LD(&(xi[WS(is, 7)]), ivs, &(xi[WS(is, 1)]));
        Td = VADD(Tb, Tc);
        To = VSUB(Tc, Tb);
      }
      {
        V Th, Tv, T11, Tr, TW;
        Th = VFNMS(LDK(KP342584725), Ta, T7);
        Ti = VFNMS(LDK(KP634356270), Th, Td);
        Tv = VFNMS(LDK(KP342584725), Td, T4);
        Tw = VFNMS(LDK(KP634356270), Tv, T7);
        T11 = VFNMS(LDK(KP521108558), Tp, Tn);
        T12 = VFNMS(LDK(KP715370323), T11, Tm);
        Tr = VFMA(LDK(KP521108558), Tq, Tp);
        Ts = VFMA(LDK(KP715370323), Tr, To);
        TW = VFNMS(LDK(KP342584725), Tg, Td);
        TX = VFNMS(LDK(KP634356270), TW, Ta);
      }
      {
        V TS, TJ, TA, TN, TE;
        TS = VFMA(LDK(KP715370323), Tm, Tp);
        TT = VFMA(LDK(KP372785597), To, TS);
        TJ = VFNMS(LDK(KP521108558), Tn, To);
        TK = VFMA(LDK(KP715370323), TJ, Tq);
        TA = VFMA(LDK(KP521108558), Tm, Tq);
        TB = VFNMS(LDK(KP715370323), TA, Tn);
        TN = VFNMS(LDK(KP342584725), T7, Tg);
        TO = VFNMS(LDK(KP634356270), TN, T4);
        TE = VFNMS(LDK(KP342584725), T4, Ta);
        TF = VFNMS(LDK(KP634356270), TE, Tg);
      }
      ST(&(xo[0]), VADD(T1, VADD(T4, VADD(T7, VADD(Ta, VADD(Td, Tg))))), ovs,
         &(xo[0]));
      {
        V Tk, Tu, Tj, Tt, Tl;
        Tj = VFNMS(LDK(KP778434453), Ti, T4);
        Tk = VFNMS(LDK(KP876768831), Tj, Tg);
        Tt = VFMA(LDK(KP830830026), Ts, Tn);
        Tu = VMUL(LDK(KP989821441), VFMA(LDK(KP918985947), Tt, Tm));
        Tl = VFNMS(LDK(KP959492973), Tk, T1);
        ST(&(xo[WS(os, 10)]), VFNMSI(Tu, Tl), ovs, &(xo[0]));
        ST(&(xo[WS(os, 1)]), VFMAI(Tu, Tl), ovs, &(xo[WS(os, 1)]));
      }
      {
        V TZ, T14, TY, T13, T10;
        TY = VFNMS(LDK(KP778434453), TX, T7);
        TZ = VFNMS(LDK(KP876768831), TY, T4);
        T13 = VFNMS(LDK(KP830830026), T12, To);
        T14 = VMUL(LDK(KP989821441), VFNMS(LDK(KP918985947), T13, Tq));
        T10 = VFNMS(LDK(KP959492973), TZ, T1);
        ST(&(xo[WS(os, 6)]), VFNMSI(T14, T10), ovs, &(xo[0]));
        ST(&(xo[WS(os, 5)]), VFMAI(T14, T10), ovs, &(xo[WS(os, 1)]));
      }
      {
        V TQ, TV, TP, TU, TR;
        TP = VFNMS(LDK(KP778434453), TO, Ta);
        TQ = VFNMS(LDK(KP876768831), TP, Td);
        TU = VFNMS(LDK(KP830830026), TT, Tq);
        TV = VMUL(LDK(KP989821441), VFMA(LDK(KP918985947), TU, Tn));
        TR = VFNMS(LDK(KP959492973), TQ, T1);
        ST(&(xo[WS(os, 4)]), VFNMSI(TV, TR), ovs, &(xo[0]));
        ST(&(xo[WS(os, 7)]), VFMAI(TV, TR), ovs, &(xo[WS(os, 1)]));
      }
      {
        V TH, TM, TG, TL, TI;
        TG = VFNMS(LDK(KP778434453), TF, Td);
        TH = VFNMS(LDK(KP876768831), TG, T7);
        TL = VFNMS(LDK(KP830830026), TK, Tm);
        TM = VMUL(LDK(KP989821441), VFNMS(LDK(KP918985947), TL, Tp));
        TI = VFNMS(LDK(KP959492973), TH, T1);
        ST(&(xo[WS(os, 8)]), VFNMSI(TM, TI), ovs, &(xo[0]));
        ST(&(xo[WS(os, 3)]), VFMAI(TM, TI), ovs, &(xo[WS(os, 1)]));
      }
      {
        V Ty, TD, Tx, TC, Tz;
        Tx = VFNMS(LDK(KP778434453), Tw, Tg);
        Ty = VFNMS(LDK(KP876768831), Tx, Ta);
        TC = VFMA(LDK(KP830830026), TB, Tp);
        TD = VMUL(LDK(KP989821441), VFNMS(LDK(KP918985947), TC, To));
        Tz = VFNMS(LDK(KP959492973), Ty, T1);
        ST(&(xo[WS(os, 2)]), VFNMSI(TD, Tz), ovs, &(xo[0]));
        ST(&(xo[WS(os, 9)]), VFMAI(TD, Tz), ovs, &(xo[WS(os, 1)]));
      }
    }
  }
  VLEAVE();
}

static const kdft_desc desc = {
    11, XSIMD_STRING("n1fv_11"), {15, 5, 55, 0}, &GENUS, 0, 0, 0, 0};

void XSIMD(codelet_n1fv_11)(planner *p) { X(kdft_register)(p, n1fv_11, &desc); }

#else

/* Generated by: ../../../genfft/gen_notw_c.native -simd -compact -variables 4
 * -pipeline-latency 8 -n 11 -name n1fv_11 -include dft/simd/n1f.h */

/*
 * This function contains 70 FP additions, 50 FP multiplications,
 * (or, 30 additions, 10 multiplications, 40 fused multiply/add),
 * 32 stack variables, 10 constants, and 22 memory accesses
 */
#include "dft/simd/n1f.h"

static void n1fv_11(const R *ri, const R *ii, R *ro, R *io, stride is,
                    stride os, INT v, INT ivs, INT ovs) {
  DVK(KP654860733, +0.654860733945285064056925072466293553183791199);
  DVK(KP142314838, +0.142314838273285140443792668616369668791051361);
  DVK(KP959492973, +0.959492973614497389890368057066327699062454848);
  DVK(KP415415013, +0.415415013001886425529274149229623203524004910);
  DVK(KP841253532, +0.841253532831181168861811648919367717513292498);
  DVK(KP989821441, +0.989821441880932732376092037776718787376519372);
  DVK(KP909631995, +0.909631995354518371411715383079028460060241051);
  DVK(KP281732556, +0.281732556841429697711417915346616899035777899);
  DVK(KP540640817, +0.540640817455597582107635954318691695431770608);
  DVK(KP755749574, +0.755749574354258283774035843972344420179717445);
  {
    INT i;
    const R *xi;
    R *xo;
    xi = ri;
    xo = ro;
    for (i = v; i > 0; i = i - VL, xi = xi + (VL * ivs), xo = xo + (VL * ovs),
        MAKE_VOLATILE_STRIDE(22, is), MAKE_VOLATILE_STRIDE(22, os)) {
      V T1, T4, Ti, Tg, Tl, Td, Tk, Ta, Tj, T7, Tm, Tb, Tc, Tt, Ts;
      T1 = LD(&(xi[0]), ivs, &(xi[0]));
      {
        V T2, T3, Te, Tf;
        T2 = LD(&(xi[WS(is, 1)]), ivs, &(xi[WS(is, 1)]));
        T3 = LD(&(xi[WS(is, 10)]), ivs, &(xi[0]));
        T4 = VADD(T2, T3);
        Ti = VSUB(T3, T2);
        Te = LD(&(xi[WS(is, 5)]), ivs, &(xi[WS(is, 1)]));
        Tf = LD(&(xi[WS(is, 6)]), ivs, &(xi[0]));
        Tg = VADD(Te, Tf);
        Tl = VSUB(Tf, Te);
      }
      Tb = LD(&(xi[WS(is, 4)]), ivs, &(xi[0]));
      Tc = LD(&(xi[WS(is, 7)]), ivs, &(xi[WS(is, 1)]));
      Td = VADD(Tb, Tc);
      Tk = VSUB(Tc, Tb);
      {
        V T8, T9, T5, T6;
        T8 = LD(&(xi[WS(is, 3)]), ivs, &(xi[WS(is, 1)]));
        T9 = LD(&(xi[WS(is, 8)]), ivs, &(xi[0]));
        Ta = VADD(T8, T9);
        Tj = VSUB(T9, T8);
        T5 = LD(&(xi[WS(is, 2)]), ivs, &(xi[0]));
        T6 = LD(&(xi[WS(is, 9)]), ivs, &(xi[WS(is, 1)]));
        T7 = VADD(T5, T6);
        Tm = VSUB(T6, T5);
      }
      ST(&(xo[0]), VADD(T1, VADD(T4, VADD(T7, VADD(Ta, VADD(Td, Tg))))), ovs,
         &(xo[0]));
      {
        V Tn, Th, Tv, Tu;
        Tn = VBYI(VFMA(LDK(KP755749574), Ti,
                       VFMA(LDK(KP540640817), Tj,
                            VFNMS(LDK(KP909631995), Tl,
                                  VFNMS(LDK(KP989821441), Tm,
                                        VMUL(LDK(KP281732556), Tk))))));
        Th = VFMA(LDK(KP841253532), Ta,
                  VFMA(LDK(KP415415013), Tg,
                       VFNMS(LDK(KP959492973), Td,
                             VFNMS(LDK(KP142314838), T7,
                                   VFNMS(LDK(KP654860733), T4, T1)))));
        ST(&(xo[WS(os, 7)]), VSUB(Th, Tn), ovs, &(xo[WS(os, 1)]));
        ST(&(xo[WS(os, 4)]), VADD(Th, Tn), ovs, &(xo[0]));
        Tv = VBYI(VFMA(LDK(KP281732556), Ti,
                       VFMA(LDK(KP755749574), Tj,
                            VFNMS(LDK(KP909631995), Tk,
                                  VFNMS(LDK(KP540640817), Tm,
                                        VMUL(LDK(KP989821441), Tl))))));
        Tu = VFMA(LDK(KP841253532), T7,
                  VFMA(LDK(KP415415013), Td,
                       VFNMS(LDK(KP142314838), Tg,
                             VFNMS(LDK(KP654860733), Ta,
                                   VFNMS(LDK(KP959492973), T4, T1)))));
        ST(&(xo[WS(os, 6)]), VSUB(Tu, Tv), ovs, &(xo[0]));
        ST(&(xo[WS(os, 5)]), VADD(Tu, Tv), ovs, &(xo[WS(os, 1)]));
      }
      Tt = VBYI(VFMA(LDK(KP989821441), Ti,
                     VFMA(LDK(KP540640817), Tk,
                          VFNMS(LDK(KP909631995), Tj,
                                VFNMS(LDK(KP281732556), Tm,
                                      VMUL(LDK(KP755749574), Tl))))));
      Ts = VFMA(LDK(KP415415013), Ta,
                VFMA(LDK(KP841253532), Td,
                     VFNMS(LDK(KP654860733), Tg,
                           VFNMS(LDK(KP959492973), T7,
                                 VFNMS(LDK(KP142314838), T4, T1)))));
      ST(&(xo[WS(os, 8)]), VSUB(Ts, Tt), ovs, &(xo[0]));
      ST(&(xo[WS(os, 3)]), VADD(Ts, Tt), ovs, &(xo[WS(os, 1)]));
      {
        V Tr, Tq, Tp, To;
        Tr = VBYI(VFMA(LDK(KP540640817), Ti,
                       VFMA(LDK(KP909631995), Tm,
                            VFMA(LDK(KP989821441), Tj,
                                 VFMA(LDK(KP755749574), Tk,
                                      VMUL(LDK(KP281732556), Tl))))));
        Tq = VFMA(LDK(KP841253532), T4,
                  VFMA(LDK(KP415415013), T7,
                       VFNMS(LDK(KP959492973), Tg,
                             VFNMS(LDK(KP654860733), Td,
                                   VFNMS(LDK(KP142314838), Ta, T1)))));
        ST(&(xo[WS(os, 10)]), VSUB(Tq, Tr), ovs, &(xo[0]));
        ST(&(xo[WS(os, 1)]), VADD(Tq, Tr), ovs, &(xo[WS(os, 1)]));
        Tp = VBYI(VFMA(LDK(KP909631995), Ti,
                       VFNMS(LDK(KP540640817), Tl,
                             VFNMS(LDK(KP989821441), Tk,
                                   VFNMS(LDK(KP281732556), Tj,
                                         VMUL(LDK(KP755749574), Tm))))));
        To = VFMA(LDK(KP415415013), T4,
                  VFMA(LDK(KP841253532), Tg,
                       VFNMS(LDK(KP142314838), Td,
                             VFNMS(LDK(KP959492973), Ta,
                                   VFNMS(LDK(KP654860733), T7, T1)))));
        ST(&(xo[WS(os, 9)]), VSUB(To, Tp), ovs, &(xo[WS(os, 1)]));
        ST(&(xo[WS(os, 2)]), VADD(To, Tp), ovs, &(xo[0]));
      }
    }
  }
  VLEAVE();
}

static const kdft_desc desc = {
    11, XSIMD_STRING("n1fv_11"), {30, 10, 40, 0}, &GENUS, 0, 0, 0, 0};

void XSIMD(codelet_n1fv_11)(planner *p) { X(kdft_register)(p, n1fv_11, &desc); }

#endif
