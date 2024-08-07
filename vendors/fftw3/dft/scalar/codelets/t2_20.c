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
/* Generated on Tue Sep 14 10:44:38 EDT 2021 */

#include "dft/codelet-dft.h"

#if defined(ARCH_PREFERS_FMA) || defined(ISA_EXTENSION_PREFERS_FMA)

/* Generated by: ../../../genfft/gen_twiddle.native -fma -compact -variables 4
 * -pipeline-latency 4 -twiddle-log3 -precompute-twiddles -n 20 -name t2_20
 * -include dft/scalar/t.h */

/*
 * This function contains 276 FP additions, 198 FP multiplications,
 * (or, 136 additions, 58 multiplications, 140 fused multiply/add),
 * 95 stack variables, 4 constants, and 80 memory accesses
 */
#include "dft/scalar/t.h"

static void t2_20(R *ri, R *ii, const R *W, stride rs, INT mb, INT me, INT ms) {
  DK(KP951056516, +0.951056516295153572116439333379382143405698634);
  DK(KP559016994, +0.559016994374947424102293417182819058860154590);
  DK(KP250000000, +0.250000000000000000000000000000000000000000000);
  DK(KP618033988, +0.618033988749894848204586834365638117720309180);
  {
    INT m;
    for (m = mb, W = W + (mb * 8); m < me; m = m + 1, ri = ri + ms,
        ii = ii + ms, W = W + 8, MAKE_VOLATILE_STRIDE(40, rs)) {
      E T2, Th, Tf, T6, T5, Ti, Tl, T1n, T3, Tt, Tv, T7, T17, T1L, T24;
      E Tb, T13, T1P, T21, T1b, T1D, T1A, T1H, T1f, TA, Tw, Tq, Tm, TK, T1S;
      E TO, T1p, T1q, T1u, T2n, T2k, T2h, T2d;
      {
        E Tk, Ta, T1e, T4, T1a, Tj, T12, T1G, T16, T1K, Tg, Tz;
        T2 = W[0];
        Th = W[3];
        Tf = W[2];
        Tg = T2 * Tf;
        Tk = T2 * Th;
        T6 = W[5];
        Ta = T2 * T6;
        T1e = Tf * T6;
        T5 = W[1];
        Ti = FNMS(T5, Th, Tg);
        Tl = FMA(T5, Tf, Tk);
        T1n = FMA(T5, Th, Tg);
        T3 = W[4];
        T4 = T2 * T3;
        T1a = Tf * T3;
        Tj = Ti * T3;
        Tt = W[6];
        T12 = Tf * Tt;
        T1G = T2 * Tt;
        Tv = W[7];
        T16 = Tf * Tv;
        T1K = T2 * Tv;
        T7 = FNMS(T5, T6, T4);
        T17 = FNMS(Th, Tt, T16);
        T1L = FNMS(T5, Tt, T1K);
        T24 = FMA(Th, T3, T1e);
        Tb = FMA(T5, T3, Ta);
        T13 = FMA(Th, Tv, T12);
        T1P = FNMS(Tl, T6, Tj);
        T21 = FNMS(Th, T6, T1a);
        T1b = FMA(Th, T6, T1a);
        T1D = FNMS(T5, T3, Ta);
        T1A = FMA(T5, T6, T4);
        T1H = FMA(T5, Tv, T1G);
        T1f = FNMS(Th, T3, T1e);
        Tz = Ti * Tv;
        TA = FNMS(Tl, Tt, Tz);
        {
          E Tu, Tp, TJ, TN;
          Tu = Ti * Tt;
          Tw = FMA(Tl, Tv, Tu);
          Tp = Ti * T6;
          Tq = FNMS(Tl, T3, Tp);
          Tm = FMA(Tl, T6, Tj);
          TJ = Tm * Tt;
          TN = Tm * Tv;
          TK = FMA(Tq, Tv, TJ);
          T1S = FMA(Tl, T3, Tp);
          TO = FNMS(Tq, Tt, TN);
          {
            E T1o, T2g, T1t, T2c;
            T1o = T1n * T3;
            T2g = T1n * Tv;
            T1t = T1n * T6;
            T2c = T1n * Tt;
            T1p = FNMS(T5, Tf, Tk);
            T1q = FNMS(T1p, T6, T1o);
            T1u = FMA(T1p, T3, T1t);
            T2n = FNMS(T1p, T3, T1t);
            T2k = FMA(T1p, T6, T1o);
            T2h = FNMS(T1p, Tt, T2g);
            T2d = FMA(T1p, Tv, T2c);
          }
        }
      }
      {
        E Te, T2C, T4L, T57, TD, T58, T2H, T4H, T11, T2v, T4k, T4v, T2P, T3P,
            T3C;
        E T3Z, T2r, T2z, T4g, T4z, T3b, T3T, T3u, T43, T20, T2y, T4d, T4y, T34,
            T3S;
        E T3n, T42, T1y, T2w, T4n, T4w, T2W, T3Q, T3J, T40;
        {
          E T1, T4K, T8, T9, Tc, T4I, Td, T4J;
          T1 = ri[0];
          T4K = ii[0];
          T8 = ri[WS(rs, 10)];
          T9 = T7 * T8;
          Tc = ii[WS(rs, 10)];
          T4I = T7 * Tc;
          Td = FMA(Tb, Tc, T9);
          Te = T1 + Td;
          T2C = T1 - Td;
          T4J = FNMS(Tb, T8, T4I);
          T4L = T4J + T4K;
          T57 = T4K - T4J;
        }
        {
          E Tn, To, Tr, T2D, Tx, Ty, TB, T2F;
          Tn = ri[WS(rs, 5)];
          To = Tm * Tn;
          Tr = ii[WS(rs, 5)];
          T2D = Tm * Tr;
          Tx = ri[WS(rs, 15)];
          Ty = Tw * Tx;
          TB = ii[WS(rs, 15)];
          T2F = Tw * TB;
          {
            E Ts, TC, T2E, T2G;
            Ts = FMA(Tq, Tr, To);
            TC = FMA(TA, TB, Ty);
            TD = Ts + TC;
            T58 = Ts - TC;
            T2E = FNMS(Tq, Tn, T2D);
            T2G = FNMS(TA, Tx, T2F);
            T2H = T2E - T2G;
            T4H = T2E + T2G;
          }
        }
        {
          E TI, T3x, TZ, T2N, TQ, T3z, TV, T2L;
          {
            E TF, TG, TH, T3w;
            TF = ri[WS(rs, 4)];
            TG = Ti * TF;
            TH = ii[WS(rs, 4)];
            T3w = Ti * TH;
            TI = FMA(Tl, TH, TG);
            T3x = FNMS(Tl, TF, T3w);
          }
          {
            E TW, TX, TY, T2M;
            TW = ri[WS(rs, 19)];
            TX = Tt * TW;
            TY = ii[WS(rs, 19)];
            T2M = Tt * TY;
            TZ = FMA(Tv, TY, TX);
            T2N = FNMS(Tv, TW, T2M);
          }
          {
            E TL, TM, TP, T3y;
            TL = ri[WS(rs, 14)];
            TM = TK * TL;
            TP = ii[WS(rs, 14)];
            T3y = TK * TP;
            TQ = FMA(TO, TP, TM);
            T3z = FNMS(TO, TL, T3y);
          }
          {
            E TS, TT, TU, T2K;
            TS = ri[WS(rs, 9)];
            TT = T3 * TS;
            TU = ii[WS(rs, 9)];
            T2K = T3 * TU;
            TV = FMA(T6, TU, TT);
            T2L = FNMS(T6, TS, T2K);
          }
          {
            E TR, T10, T4i, T4j;
            TR = TI + TQ;
            T10 = TV + TZ;
            T11 = TR - T10;
            T2v = TR + T10;
            T4i = T3x + T3z;
            T4j = T2L + T2N;
            T4k = T4i - T4j;
            T4v = T4i + T4j;
          }
          {
            E T2J, T2O, T3A, T3B;
            T2J = TI - TQ;
            T2O = T2L - T2N;
            T2P = T2J - T2O;
            T3P = T2J + T2O;
            T3A = T3x - T3z;
            T3B = TV - TZ;
            T3C = T3A + T3B;
            T3Z = T3A - T3B;
          }
        }
        {
          E T26, T3p, T2p, T39, T2a, T3r, T2j, T37;
          {
            E T22, T23, T25, T3o;
            T22 = ri[WS(rs, 12)];
            T23 = T21 * T22;
            T25 = ii[WS(rs, 12)];
            T3o = T21 * T25;
            T26 = FMA(T24, T25, T23);
            T3p = FNMS(T24, T22, T3o);
          }
          {
            E T2l, T2m, T2o, T38;
            T2l = ri[WS(rs, 7)];
            T2m = T2k * T2l;
            T2o = ii[WS(rs, 7)];
            T38 = T2k * T2o;
            T2p = FMA(T2n, T2o, T2m);
            T39 = FNMS(T2n, T2l, T38);
          }
          {
            E T27, T28, T29, T3q;
            T27 = ri[WS(rs, 2)];
            T28 = T1n * T27;
            T29 = ii[WS(rs, 2)];
            T3q = T1n * T29;
            T2a = FMA(T1p, T29, T28);
            T3r = FNMS(T1p, T27, T3q);
          }
          {
            E T2e, T2f, T2i, T36;
            T2e = ri[WS(rs, 17)];
            T2f = T2d * T2e;
            T2i = ii[WS(rs, 17)];
            T36 = T2d * T2i;
            T2j = FMA(T2h, T2i, T2f);
            T37 = FNMS(T2h, T2e, T36);
          }
          {
            E T2b, T2q, T4e, T4f;
            T2b = T26 + T2a;
            T2q = T2j + T2p;
            T2r = T2b - T2q;
            T2z = T2b + T2q;
            T4e = T3p + T3r;
            T4f = T37 + T39;
            T4g = T4e - T4f;
            T4z = T4e + T4f;
          }
          {
            E T35, T3a, T3s, T3t;
            T35 = T26 - T2a;
            T3a = T37 - T39;
            T3b = T35 - T3a;
            T3T = T35 + T3a;
            T3s = T3p - T3r;
            T3t = T2j - T2p;
            T3u = T3s + T3t;
            T43 = T3s - T3t;
          }
        }
        {
          E T1F, T3i, T1Y, T32, T1N, T3k, T1U, T30;
          {
            E T1B, T1C, T1E, T3h;
            T1B = ri[WS(rs, 8)];
            T1C = T1A * T1B;
            T1E = ii[WS(rs, 8)];
            T3h = T1A * T1E;
            T1F = FMA(T1D, T1E, T1C);
            T3i = FNMS(T1D, T1B, T3h);
          }
          {
            E T1V, T1W, T1X, T31;
            T1V = ri[WS(rs, 3)];
            T1W = Tf * T1V;
            T1X = ii[WS(rs, 3)];
            T31 = Tf * T1X;
            T1Y = FMA(Th, T1X, T1W);
            T32 = FNMS(Th, T1V, T31);
          }
          {
            E T1I, T1J, T1M, T3j;
            T1I = ri[WS(rs, 18)];
            T1J = T1H * T1I;
            T1M = ii[WS(rs, 18)];
            T3j = T1H * T1M;
            T1N = FMA(T1L, T1M, T1J);
            T3k = FNMS(T1L, T1I, T3j);
          }
          {
            E T1Q, T1R, T1T, T2Z;
            T1Q = ri[WS(rs, 13)];
            T1R = T1P * T1Q;
            T1T = ii[WS(rs, 13)];
            T2Z = T1P * T1T;
            T1U = FMA(T1S, T1T, T1R);
            T30 = FNMS(T1S, T1Q, T2Z);
          }
          {
            E T1O, T1Z, T4b, T4c;
            T1O = T1F + T1N;
            T1Z = T1U + T1Y;
            T20 = T1O - T1Z;
            T2y = T1O + T1Z;
            T4b = T3i + T3k;
            T4c = T30 + T32;
            T4d = T4b - T4c;
            T4y = T4b + T4c;
          }
          {
            E T2Y, T33, T3l, T3m;
            T2Y = T1F - T1N;
            T33 = T30 - T32;
            T34 = T2Y - T33;
            T3S = T2Y + T33;
            T3l = T3i - T3k;
            T3m = T1U - T1Y;
            T3n = T3l + T3m;
            T42 = T3l - T3m;
          }
        }
        {
          E T19, T3E, T1w, T2U, T1h, T3G, T1m, T2S;
          {
            E T14, T15, T18, T3D;
            T14 = ri[WS(rs, 16)];
            T15 = T13 * T14;
            T18 = ii[WS(rs, 16)];
            T3D = T13 * T18;
            T19 = FMA(T17, T18, T15);
            T3E = FNMS(T17, T14, T3D);
          }
          {
            E T1r, T1s, T1v, T2T;
            T1r = ri[WS(rs, 11)];
            T1s = T1q * T1r;
            T1v = ii[WS(rs, 11)];
            T2T = T1q * T1v;
            T1w = FMA(T1u, T1v, T1s);
            T2U = FNMS(T1u, T1r, T2T);
          }
          {
            E T1c, T1d, T1g, T3F;
            T1c = ri[WS(rs, 6)];
            T1d = T1b * T1c;
            T1g = ii[WS(rs, 6)];
            T3F = T1b * T1g;
            T1h = FMA(T1f, T1g, T1d);
            T3G = FNMS(T1f, T1c, T3F);
          }
          {
            E T1j, T1k, T1l, T2R;
            T1j = ri[WS(rs, 1)];
            T1k = T2 * T1j;
            T1l = ii[WS(rs, 1)];
            T2R = T2 * T1l;
            T1m = FMA(T5, T1l, T1k);
            T2S = FNMS(T5, T1j, T2R);
          }
          {
            E T1i, T1x, T4l, T4m;
            T1i = T19 + T1h;
            T1x = T1m + T1w;
            T1y = T1i - T1x;
            T2w = T1i + T1x;
            T4l = T3E + T3G;
            T4m = T2S + T2U;
            T4n = T4l - T4m;
            T4w = T4l + T4m;
          }
          {
            E T2Q, T2V, T3H, T3I;
            T2Q = T19 - T1h;
            T2V = T2S - T2U;
            T2W = T2Q - T2V;
            T3Q = T2Q + T2V;
            T3H = T3E - T3G;
            T3I = T1m - T1w;
            T3J = T3H + T3I;
            T40 = T3H - T3I;
          }
        }
        {
          E T4p, T4r, TE, T2t, T48, T49, T4q, T4a;
          {
            E T4h, T4o, T1z, T2s;
            T4h = T4d - T4g;
            T4o = T4k - T4n;
            T4p = FNMS(KP618033988, T4o, T4h);
            T4r = FMA(KP618033988, T4h, T4o);
            TE = Te - TD;
            T1z = T11 + T1y;
            T2s = T20 + T2r;
            T2t = T1z + T2s;
            T48 = FNMS(KP250000000, T2t, TE);
            T49 = T1z - T2s;
          }
          ri[WS(rs, 10)] = TE + T2t;
          T4q = FMA(KP559016994, T49, T48);
          ri[WS(rs, 14)] = FNMS(KP951056516, T4r, T4q);
          ri[WS(rs, 6)] = FMA(KP951056516, T4r, T4q);
          T4a = FNMS(KP559016994, T49, T48);
          ri[WS(rs, 2)] = FNMS(KP951056516, T4p, T4a);
          ri[WS(rs, 18)] = FMA(KP951056516, T4p, T4a);
        }
        {
          E T54, T56, T4V, T4Y, T4Z, T50, T55, T51;
          {
            E T52, T53, T4W, T4X;
            T52 = T20 - T2r;
            T53 = T11 - T1y;
            T54 = FNMS(KP618033988, T53, T52);
            T56 = FMA(KP618033988, T52, T53);
            T4V = T4L - T4H;
            T4W = T4k + T4n;
            T4X = T4d + T4g;
            T4Y = T4W + T4X;
            T4Z = FNMS(KP250000000, T4Y, T4V);
            T50 = T4W - T4X;
          }
          ii[WS(rs, 10)] = T4Y + T4V;
          T55 = FMA(KP559016994, T50, T4Z);
          ii[WS(rs, 6)] = FNMS(KP951056516, T56, T55);
          ii[WS(rs, 14)] = FMA(KP951056516, T56, T55);
          T51 = FNMS(KP559016994, T50, T4Z);
          ii[WS(rs, 2)] = FMA(KP951056516, T54, T51);
          ii[WS(rs, 18)] = FNMS(KP951056516, T54, T51);
        }
        {
          E T4B, T4D, T2u, T2B, T4s, T4t, T4C, T4u;
          {
            E T4x, T4A, T2x, T2A;
            T4x = T4v - T4w;
            T4A = T4y - T4z;
            T4B = FMA(KP618033988, T4A, T4x);
            T4D = FNMS(KP618033988, T4x, T4A);
            T2u = Te + TD;
            T2x = T2v + T2w;
            T2A = T2y + T2z;
            T2B = T2x + T2A;
            T4s = FNMS(KP250000000, T2B, T2u);
            T4t = T2x - T2A;
          }
          ri[0] = T2u + T2B;
          T4C = FNMS(KP559016994, T4t, T4s);
          ri[WS(rs, 12)] = FNMS(KP951056516, T4D, T4C);
          ri[WS(rs, 8)] = FMA(KP951056516, T4D, T4C);
          T4u = FMA(KP559016994, T4t, T4s);
          ri[WS(rs, 4)] = FNMS(KP951056516, T4B, T4u);
          ri[WS(rs, 16)] = FMA(KP951056516, T4B, T4u);
        }
        {
          E T4S, T4U, T4M, T4G, T4N, T4O, T4T, T4P;
          {
            E T4Q, T4R, T4E, T4F;
            T4Q = T2v - T2w;
            T4R = T2y - T2z;
            T4S = FMA(KP618033988, T4R, T4Q);
            T4U = FNMS(KP618033988, T4Q, T4R);
            T4M = T4H + T4L;
            T4E = T4v + T4w;
            T4F = T4y + T4z;
            T4G = T4E + T4F;
            T4N = FNMS(KP250000000, T4G, T4M);
            T4O = T4E - T4F;
          }
          ii[0] = T4G + T4M;
          T4T = FNMS(KP559016994, T4O, T4N);
          ii[WS(rs, 8)] = FNMS(KP951056516, T4U, T4T);
          ii[WS(rs, 12)] = FMA(KP951056516, T4U, T4T);
          T4P = FMA(KP559016994, T4O, T4N);
          ii[WS(rs, 4)] = FMA(KP951056516, T4S, T4P);
          ii[WS(rs, 16)] = FNMS(KP951056516, T4S, T4P);
        }
        {
          E T3L, T3N, T2I, T3d, T3e, T3f, T3M, T3g;
          {
            E T3v, T3K, T2X, T3c;
            T3v = T3n - T3u;
            T3K = T3C - T3J;
            T3L = FNMS(KP618033988, T3K, T3v);
            T3N = FMA(KP618033988, T3v, T3K);
            T2I = T2C - T2H;
            T2X = T2P + T2W;
            T3c = T34 + T3b;
            T3d = T2X + T3c;
            T3e = FNMS(KP250000000, T3d, T2I);
            T3f = T2X - T3c;
          }
          ri[WS(rs, 15)] = T2I + T3d;
          T3M = FMA(KP559016994, T3f, T3e);
          ri[WS(rs, 11)] = FMA(KP951056516, T3N, T3M);
          ri[WS(rs, 19)] = FNMS(KP951056516, T3N, T3M);
          T3g = FNMS(KP559016994, T3f, T3e);
          ri[WS(rs, 3)] = FMA(KP951056516, T3L, T3g);
          ri[WS(rs, 7)] = FNMS(KP951056516, T3L, T3g);
        }
        {
          E T5u, T5w, T5l, T5o, T5p, T5q, T5v, T5r;
          {
            E T5s, T5t, T5m, T5n;
            T5s = T34 - T3b;
            T5t = T2P - T2W;
            T5u = FNMS(KP618033988, T5t, T5s);
            T5w = FMA(KP618033988, T5s, T5t);
            T5l = T58 + T57;
            T5m = T3C + T3J;
            T5n = T3n + T3u;
            T5o = T5m + T5n;
            T5p = FNMS(KP250000000, T5o, T5l);
            T5q = T5m - T5n;
          }
          ii[WS(rs, 15)] = T5o + T5l;
          T5v = FMA(KP559016994, T5q, T5p);
          ii[WS(rs, 11)] = FNMS(KP951056516, T5w, T5v);
          ii[WS(rs, 19)] = FMA(KP951056516, T5w, T5v);
          T5r = FNMS(KP559016994, T5q, T5p);
          ii[WS(rs, 3)] = FNMS(KP951056516, T5u, T5r);
          ii[WS(rs, 7)] = FMA(KP951056516, T5u, T5r);
        }
        {
          E T45, T47, T3O, T3V, T3W, T3X, T46, T3Y;
          {
            E T41, T44, T3R, T3U;
            T41 = T3Z - T40;
            T44 = T42 - T43;
            T45 = FMA(KP618033988, T44, T41);
            T47 = FNMS(KP618033988, T41, T44);
            T3O = T2C + T2H;
            T3R = T3P + T3Q;
            T3U = T3S + T3T;
            T3V = T3R + T3U;
            T3W = FNMS(KP250000000, T3V, T3O);
            T3X = T3R - T3U;
          }
          ri[WS(rs, 5)] = T3O + T3V;
          T46 = FNMS(KP559016994, T3X, T3W);
          ri[WS(rs, 13)] = FMA(KP951056516, T47, T46);
          ri[WS(rs, 17)] = FNMS(KP951056516, T47, T46);
          T3Y = FMA(KP559016994, T3X, T3W);
          ri[WS(rs, 1)] = FMA(KP951056516, T45, T3Y);
          ri[WS(rs, 9)] = FNMS(KP951056516, T45, T3Y);
        }
        {
          E T5i, T5k, T59, T5c, T5d, T5e, T5j, T5f;
          {
            E T5g, T5h, T5a, T5b;
            T5g = T3P - T3Q;
            T5h = T3S - T3T;
            T5i = FMA(KP618033988, T5h, T5g);
            T5k = FNMS(KP618033988, T5g, T5h);
            T59 = T57 - T58;
            T5a = T3Z + T40;
            T5b = T42 + T43;
            T5c = T5a + T5b;
            T5d = FNMS(KP250000000, T5c, T59);
            T5e = T5a - T5b;
          }
          ii[WS(rs, 5)] = T5c + T59;
          T5j = FNMS(KP559016994, T5e, T5d);
          ii[WS(rs, 13)] = FNMS(KP951056516, T5k, T5j);
          ii[WS(rs, 17)] = FMA(KP951056516, T5k, T5j);
          T5f = FMA(KP559016994, T5e, T5d);
          ii[WS(rs, 1)] = FNMS(KP951056516, T5i, T5f);
          ii[WS(rs, 9)] = FMA(KP951056516, T5i, T5f);
        }
      }
    }
  }
}

static const tw_instr twinstr[] = {{TW_CEXP, 0, 1},
                                   {TW_CEXP, 0, 3},
                                   {TW_CEXP, 0, 9},
                                   {TW_CEXP, 0, 19},
                                   {TW_NEXT, 1, 0}};

static const ct_desc desc = {20, "t2_20", twinstr, &GENUS, {136, 58, 140, 0},
                             0,  0,       0};

void X(codelet_t2_20)(planner *p) { X(kdft_dit_register)(p, t2_20, &desc); }
#else

/* Generated by: ../../../genfft/gen_twiddle.native -compact -variables 4
 * -pipeline-latency 4 -twiddle-log3 -precompute-twiddles -n 20 -name t2_20
 * -include dft/scalar/t.h */

/*
 * This function contains 276 FP additions, 164 FP multiplications,
 * (or, 204 additions, 92 multiplications, 72 fused multiply/add),
 * 123 stack variables, 4 constants, and 80 memory accesses
 */
#include "dft/scalar/t.h"

static void t2_20(R *ri, R *ii, const R *W, stride rs, INT mb, INT me, INT ms) {
  DK(KP587785252, +0.587785252292473129168705954639072768597652438);
  DK(KP951056516, +0.951056516295153572116439333379382143405698634);
  DK(KP250000000, +0.250000000000000000000000000000000000000000000);
  DK(KP559016994, +0.559016994374947424102293417182819058860154590);
  {
    INT m;
    for (m = mb, W = W + (mb * 8); m < me; m = m + 1, ri = ri + ms,
        ii = ii + ms, W = W + 8, MAKE_VOLATILE_STRIDE(40, rs)) {
      E T2, T5, Tg, Ti, Tk, To, T1h, T1f, T6, T3, T8, T14, T1Q, Tc, T1O;
      E T1v, T18, T1t, T1n, T24, T1j, T22, Tq, Tu, T1E, T1G, Tx, Ty, Tz, TJ;
      E T1Z, TB, T1X, T1A, TZ, TL, T1y, TX;
      {
        E T7, T16, Ta, T13, T4, T17, Tb, T12;
        {
          E Th, Tn, Tj, Tm;
          T2 = W[0];
          T5 = W[1];
          Tg = W[2];
          Ti = W[3];
          Th = T2 * Tg;
          Tn = T5 * Tg;
          Tj = T5 * Ti;
          Tm = T2 * Ti;
          Tk = Th - Tj;
          To = Tm + Tn;
          T1h = Tm - Tn;
          T1f = Th + Tj;
          T6 = W[5];
          T7 = T5 * T6;
          T16 = Tg * T6;
          Ta = T2 * T6;
          T13 = Ti * T6;
          T3 = W[4];
          T4 = T2 * T3;
          T17 = Ti * T3;
          Tb = T5 * T3;
          T12 = Tg * T3;
        }
        T8 = T4 - T7;
        T14 = T12 + T13;
        T1Q = T16 + T17;
        Tc = Ta + Tb;
        T1O = T12 - T13;
        T1v = Ta - Tb;
        T18 = T16 - T17;
        T1t = T4 + T7;
        {
          E T1l, T1m, T1g, T1i;
          T1l = T1f * T6;
          T1m = T1h * T3;
          T1n = T1l + T1m;
          T24 = T1l - T1m;
          T1g = T1f * T3;
          T1i = T1h * T6;
          T1j = T1g - T1i;
          T22 = T1g + T1i;
          {
            E Tl, Tp, Ts, Tt;
            Tl = Tk * T3;
            Tp = To * T6;
            Tq = Tl + Tp;
            Ts = Tk * T6;
            Tt = To * T3;
            Tu = Ts - Tt;
            T1E = Tl - Tp;
            T1G = Ts + Tt;
            Tx = W[6];
            Ty = W[7];
            Tz = FMA(Tk, Tx, To * Ty);
            TJ = FMA(Tq, Tx, Tu * Ty);
            T1Z = FNMS(T1h, Tx, T1f * Ty);
            TB = FNMS(To, Tx, Tk * Ty);
            T1X = FMA(T1f, Tx, T1h * Ty);
            T1A = FNMS(T5, Tx, T2 * Ty);
            TZ = FNMS(Ti, Tx, Tg * Ty);
            TL = FNMS(Tu, Tx, Tq * Ty);
            T1y = FMA(T2, Tx, T5 * Ty);
            TX = FMA(Tg, Tx, Ti * Ty);
          }
        }
      }
      {
        E TF, T2b, T4A, T4J, T2K, T3r, T4a, T4m, T1N, T28, T29, T3C, T3F, T4o,
            T3X;
        E T3Y, T44, T2f, T2g, T2h, T2n, T2s, T4L, T3g, T3h, T4w, T3n, T3o, T3p,
            T30;
        E T35, T36, TW, T1r, T1s, T3J, T3M, T4n, T3U, T3V, T43, T2c, T2d, T2e,
            T2y;
        E T2D, T4K, T3d, T3e, T4v, T3k, T3l, T3m, T2P, T2U, T2V;
        {
          E T1, T48, Te, T47, Tw, T2H, TD, T2I, T9, Td;
          T1 = ri[0];
          T48 = ii[0];
          T9 = ri[WS(rs, 10)];
          Td = ii[WS(rs, 10)];
          Te = FMA(T8, T9, Tc * Td);
          T47 = FNMS(Tc, T9, T8 * Td);
          {
            E Tr, Tv, TA, TC;
            Tr = ri[WS(rs, 5)];
            Tv = ii[WS(rs, 5)];
            Tw = FMA(Tq, Tr, Tu * Tv);
            T2H = FNMS(Tu, Tr, Tq * Tv);
            TA = ri[WS(rs, 15)];
            TC = ii[WS(rs, 15)];
            TD = FMA(Tz, TA, TB * TC);
            T2I = FNMS(TB, TA, Tz * TC);
          }
          {
            E Tf, TE, T4y, T4z;
            Tf = T1 + Te;
            TE = Tw + TD;
            TF = Tf - TE;
            T2b = Tf + TE;
            T4y = T48 - T47;
            T4z = Tw - TD;
            T4A = T4y - T4z;
            T4J = T4z + T4y;
          }
          {
            E T2G, T2J, T46, T49;
            T2G = T1 - Te;
            T2J = T2H - T2I;
            T2K = T2G - T2J;
            T3r = T2G + T2J;
            T46 = T2H + T2I;
            T49 = T47 + T48;
            T4a = T46 + T49;
            T4m = T49 - T46;
          }
        }
        {
          E T1D, T3A, T2l, T2W, T27, T3E, T2r, T34, T1M, T3B, T2m, T2Z, T1W,
              T3D, T2q;
          E T31;
          {
            E T1x, T2j, T1C, T2k;
            {
              E T1u, T1w, T1z, T1B;
              T1u = ri[WS(rs, 8)];
              T1w = ii[WS(rs, 8)];
              T1x = FMA(T1t, T1u, T1v * T1w);
              T2j = FNMS(T1v, T1u, T1t * T1w);
              T1z = ri[WS(rs, 18)];
              T1B = ii[WS(rs, 18)];
              T1C = FMA(T1y, T1z, T1A * T1B);
              T2k = FNMS(T1A, T1z, T1y * T1B);
            }
            T1D = T1x + T1C;
            T3A = T2j + T2k;
            T2l = T2j - T2k;
            T2W = T1x - T1C;
          }
          {
            E T21, T32, T26, T33;
            {
              E T1Y, T20, T23, T25;
              T1Y = ri[WS(rs, 17)];
              T20 = ii[WS(rs, 17)];
              T21 = FMA(T1X, T1Y, T1Z * T20);
              T32 = FNMS(T1Z, T1Y, T1X * T20);
              T23 = ri[WS(rs, 7)];
              T25 = ii[WS(rs, 7)];
              T26 = FMA(T22, T23, T24 * T25);
              T33 = FNMS(T24, T23, T22 * T25);
            }
            T27 = T21 + T26;
            T3E = T32 + T33;
            T2r = T21 - T26;
            T34 = T32 - T33;
          }
          {
            E T1I, T2X, T1L, T2Y;
            {
              E T1F, T1H, T1J, T1K;
              T1F = ri[WS(rs, 13)];
              T1H = ii[WS(rs, 13)];
              T1I = FMA(T1E, T1F, T1G * T1H);
              T2X = FNMS(T1G, T1F, T1E * T1H);
              T1J = ri[WS(rs, 3)];
              T1K = ii[WS(rs, 3)];
              T1L = FMA(Tg, T1J, Ti * T1K);
              T2Y = FNMS(Ti, T1J, Tg * T1K);
            }
            T1M = T1I + T1L;
            T3B = T2X + T2Y;
            T2m = T1I - T1L;
            T2Z = T2X - T2Y;
          }
          {
            E T1S, T2o, T1V, T2p;
            {
              E T1P, T1R, T1T, T1U;
              T1P = ri[WS(rs, 12)];
              T1R = ii[WS(rs, 12)];
              T1S = FMA(T1O, T1P, T1Q * T1R);
              T2o = FNMS(T1Q, T1P, T1O * T1R);
              T1T = ri[WS(rs, 2)];
              T1U = ii[WS(rs, 2)];
              T1V = FMA(T1f, T1T, T1h * T1U);
              T2p = FNMS(T1h, T1T, T1f * T1U);
            }
            T1W = T1S + T1V;
            T3D = T2o + T2p;
            T2q = T2o - T2p;
            T31 = T1S - T1V;
          }
          T1N = T1D - T1M;
          T28 = T1W - T27;
          T29 = T1N + T28;
          T3C = T3A - T3B;
          T3F = T3D - T3E;
          T4o = T3C + T3F;
          T3X = T3A + T3B;
          T3Y = T3D + T3E;
          T44 = T3X + T3Y;
          T2f = T1D + T1M;
          T2g = T1W + T27;
          T2h = T2f + T2g;
          T2n = T2l + T2m;
          T2s = T2q + T2r;
          T4L = T2n + T2s;
          T3g = T2l - T2m;
          T3h = T2q - T2r;
          T4w = T3g + T3h;
          T3n = T2W + T2Z;
          T3o = T31 + T34;
          T3p = T3n + T3o;
          T30 = T2W - T2Z;
          T35 = T31 - T34;
          T36 = T30 + T35;
        }
        {
          E TO, T3H, T2w, T2L, T1q, T3L, T2C, T2T, TV, T3I, T2x, T2O, T1b, T3K,
              T2B;
          E T2Q;
          {
            E TI, T2u, TN, T2v;
            {
              E TG, TH, TK, TM;
              TG = ri[WS(rs, 4)];
              TH = ii[WS(rs, 4)];
              TI = FMA(Tk, TG, To * TH);
              T2u = FNMS(To, TG, Tk * TH);
              TK = ri[WS(rs, 14)];
              TM = ii[WS(rs, 14)];
              TN = FMA(TJ, TK, TL * TM);
              T2v = FNMS(TL, TK, TJ * TM);
            }
            TO = TI + TN;
            T3H = T2u + T2v;
            T2w = T2u - T2v;
            T2L = TI - TN;
          }
          {
            E T1e, T2R, T1p, T2S;
            {
              E T1c, T1d, T1k, T1o;
              T1c = ri[WS(rs, 1)];
              T1d = ii[WS(rs, 1)];
              T1e = FMA(T2, T1c, T5 * T1d);
              T2R = FNMS(T5, T1c, T2 * T1d);
              T1k = ri[WS(rs, 11)];
              T1o = ii[WS(rs, 11)];
              T1p = FMA(T1j, T1k, T1n * T1o);
              T2S = FNMS(T1n, T1k, T1j * T1o);
            }
            T1q = T1e + T1p;
            T3L = T2R + T2S;
            T2C = T1e - T1p;
            T2T = T2R - T2S;
          }
          {
            E TR, T2M, TU, T2N;
            {
              E TP, TQ, TS, TT;
              TP = ri[WS(rs, 9)];
              TQ = ii[WS(rs, 9)];
              TR = FMA(T3, TP, T6 * TQ);
              T2M = FNMS(T6, TP, T3 * TQ);
              TS = ri[WS(rs, 19)];
              TT = ii[WS(rs, 19)];
              TU = FMA(Tx, TS, Ty * TT);
              T2N = FNMS(Ty, TS, Tx * TT);
            }
            TV = TR + TU;
            T3I = T2M + T2N;
            T2x = TR - TU;
            T2O = T2M - T2N;
          }
          {
            E T11, T2z, T1a, T2A;
            {
              E TY, T10, T15, T19;
              TY = ri[WS(rs, 16)];
              T10 = ii[WS(rs, 16)];
              T11 = FMA(TX, TY, TZ * T10);
              T2z = FNMS(TZ, TY, TX * T10);
              T15 = ri[WS(rs, 6)];
              T19 = ii[WS(rs, 6)];
              T1a = FMA(T14, T15, T18 * T19);
              T2A = FNMS(T18, T15, T14 * T19);
            }
            T1b = T11 + T1a;
            T3K = T2z + T2A;
            T2B = T2z - T2A;
            T2Q = T11 - T1a;
          }
          TW = TO - TV;
          T1r = T1b - T1q;
          T1s = TW + T1r;
          T3J = T3H - T3I;
          T3M = T3K - T3L;
          T4n = T3J + T3M;
          T3U = T3H + T3I;
          T3V = T3K + T3L;
          T43 = T3U + T3V;
          T2c = TO + TV;
          T2d = T1b + T1q;
          T2e = T2c + T2d;
          T2y = T2w + T2x;
          T2D = T2B + T2C;
          T4K = T2y + T2D;
          T3d = T2w - T2x;
          T3e = T2B - T2C;
          T4v = T3d + T3e;
          T3k = T2L + T2O;
          T3l = T2Q + T2T;
          T3m = T3k + T3l;
          T2P = T2L - T2O;
          T2U = T2Q - T2T;
          T2V = T2P + T2U;
        }
        {
          E T3y, T2a, T3x, T3O, T3Q, T3G, T3N, T3P, T3z;
          T3y = KP559016994 * (T1s - T29);
          T2a = T1s + T29;
          T3x = FNMS(KP250000000, T2a, TF);
          T3G = T3C - T3F;
          T3N = T3J - T3M;
          T3O = FNMS(KP587785252, T3N, KP951056516 * T3G);
          T3Q = FMA(KP951056516, T3N, KP587785252 * T3G);
          ri[WS(rs, 10)] = TF + T2a;
          T3P = T3y + T3x;
          ri[WS(rs, 14)] = T3P - T3Q;
          ri[WS(rs, 6)] = T3P + T3Q;
          T3z = T3x - T3y;
          ri[WS(rs, 2)] = T3z - T3O;
          ri[WS(rs, 18)] = T3z + T3O;
        }
        {
          E T4r, T4p, T4q, T4l, T4u, T4j, T4k, T4t, T4s;
          T4r = KP559016994 * (T4n - T4o);
          T4p = T4n + T4o;
          T4q = FNMS(KP250000000, T4p, T4m);
          T4j = T1N - T28;
          T4k = TW - T1r;
          T4l = FNMS(KP587785252, T4k, KP951056516 * T4j);
          T4u = FMA(KP951056516, T4k, KP587785252 * T4j);
          ii[WS(rs, 10)] = T4p + T4m;
          T4t = T4r + T4q;
          ii[WS(rs, 6)] = T4t - T4u;
          ii[WS(rs, 14)] = T4u + T4t;
          T4s = T4q - T4r;
          ii[WS(rs, 2)] = T4l + T4s;
          ii[WS(rs, 18)] = T4s - T4l;
        }
        {
          E T3R, T2i, T3S, T40, T42, T3W, T3Z, T41, T3T;
          T3R = KP559016994 * (T2e - T2h);
          T2i = T2e + T2h;
          T3S = FNMS(KP250000000, T2i, T2b);
          T3W = T3U - T3V;
          T3Z = T3X - T3Y;
          T40 = FMA(KP951056516, T3W, KP587785252 * T3Z);
          T42 = FNMS(KP587785252, T3W, KP951056516 * T3Z);
          ri[0] = T2b + T2i;
          T41 = T3S - T3R;
          ri[WS(rs, 12)] = T41 - T42;
          ri[WS(rs, 8)] = T41 + T42;
          T3T = T3R + T3S;
          ri[WS(rs, 4)] = T3T - T40;
          ri[WS(rs, 16)] = T3T + T40;
        }
        {
          E T4e, T45, T4f, T4d, T4i, T4b, T4c, T4h, T4g;
          T4e = KP559016994 * (T43 - T44);
          T45 = T43 + T44;
          T4f = FNMS(KP250000000, T45, T4a);
          T4b = T2c - T2d;
          T4c = T2f - T2g;
          T4d = FMA(KP951056516, T4b, KP587785252 * T4c);
          T4i = FNMS(KP587785252, T4b, KP951056516 * T4c);
          ii[0] = T45 + T4a;
          T4h = T4f - T4e;
          ii[WS(rs, 8)] = T4h - T4i;
          ii[WS(rs, 12)] = T4i + T4h;
          T4g = T4e + T4f;
          ii[WS(rs, 4)] = T4d + T4g;
          ii[WS(rs, 16)] = T4g - T4d;
        }
        {
          E T39, T37, T38, T2F, T3b, T2t, T2E, T3c, T3a;
          T39 = KP559016994 * (T2V - T36);
          T37 = T2V + T36;
          T38 = FNMS(KP250000000, T37, T2K);
          T2t = T2n - T2s;
          T2E = T2y - T2D;
          T2F = FNMS(KP587785252, T2E, KP951056516 * T2t);
          T3b = FMA(KP951056516, T2E, KP587785252 * T2t);
          ri[WS(rs, 15)] = T2K + T37;
          T3c = T39 + T38;
          ri[WS(rs, 11)] = T3b + T3c;
          ri[WS(rs, 19)] = T3c - T3b;
          T3a = T38 - T39;
          ri[WS(rs, 3)] = T2F + T3a;
          ri[WS(rs, 7)] = T3a - T2F;
        }
        {
          E T4O, T4M, T4N, T4S, T4U, T4Q, T4R, T4T, T4P;
          T4O = KP559016994 * (T4K - T4L);
          T4M = T4K + T4L;
          T4N = FNMS(KP250000000, T4M, T4J);
          T4Q = T30 - T35;
          T4R = T2P - T2U;
          T4S = FNMS(KP587785252, T4R, KP951056516 * T4Q);
          T4U = FMA(KP951056516, T4R, KP587785252 * T4Q);
          ii[WS(rs, 15)] = T4M + T4J;
          T4T = T4O + T4N;
          ii[WS(rs, 11)] = T4T - T4U;
          ii[WS(rs, 19)] = T4U + T4T;
          T4P = T4N - T4O;
          ii[WS(rs, 3)] = T4P - T4S;
          ii[WS(rs, 7)] = T4S + T4P;
        }
        {
          E T3q, T3s, T3t, T3j, T3v, T3f, T3i, T3w, T3u;
          T3q = KP559016994 * (T3m - T3p);
          T3s = T3m + T3p;
          T3t = FNMS(KP250000000, T3s, T3r);
          T3f = T3d - T3e;
          T3i = T3g - T3h;
          T3j = FMA(KP951056516, T3f, KP587785252 * T3i);
          T3v = FNMS(KP587785252, T3f, KP951056516 * T3i);
          ri[WS(rs, 5)] = T3r + T3s;
          T3w = T3t - T3q;
          ri[WS(rs, 13)] = T3v + T3w;
          ri[WS(rs, 17)] = T3w - T3v;
          T3u = T3q + T3t;
          ri[WS(rs, 1)] = T3j + T3u;
          ri[WS(rs, 9)] = T3u - T3j;
        }
        {
          E T4x, T4B, T4C, T4G, T4I, T4E, T4F, T4H, T4D;
          T4x = KP559016994 * (T4v - T4w);
          T4B = T4v + T4w;
          T4C = FNMS(KP250000000, T4B, T4A);
          T4E = T3k - T3l;
          T4F = T3n - T3o;
          T4G = FMA(KP951056516, T4E, KP587785252 * T4F);
          T4I = FNMS(KP587785252, T4E, KP951056516 * T4F);
          ii[WS(rs, 5)] = T4B + T4A;
          T4H = T4C - T4x;
          ii[WS(rs, 13)] = T4H - T4I;
          ii[WS(rs, 17)] = T4I + T4H;
          T4D = T4x + T4C;
          ii[WS(rs, 1)] = T4D - T4G;
          ii[WS(rs, 9)] = T4G + T4D;
        }
      }
    }
  }
}

static const tw_instr twinstr[] = {{TW_CEXP, 0, 1},
                                   {TW_CEXP, 0, 3},
                                   {TW_CEXP, 0, 9},
                                   {TW_CEXP, 0, 19},
                                   {TW_NEXT, 1, 0}};

static const ct_desc desc = {20, "t2_20", twinstr, &GENUS, {204, 92, 72, 0},
                             0,  0,       0};

void X(codelet_t2_20)(planner *p) { X(kdft_dit_register)(p, t2_20, &desc); }
#endif
