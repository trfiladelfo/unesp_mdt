//*****************************************************************************
//
// fontcm40.c - Font definition for the 40pt Cm font.
//
// Copyright (c) 2011-2013 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.0.1.11577 of the Tiva Graphics Library.
//
//*****************************************************************************

//*****************************************************************************
//
// This file is generated by ftrasterize; DO NOT EDIT BY HAND!
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "grlib/grlib.h"

//*****************************************************************************
//
// Details of this font:
//     Characters: 32 to 126 inclusive
//     Style: cm
//     Size: 40 point
//     Bold: no
//     Italic: no
//     Memory usage: 5044 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 40 point Cm font.
// Contains characters 32 to 126 inclusive.
//
//*****************************************************************************
static const uint8_t g_pui8Cm40Data[4844] =
{
      4,  17,   0,  85,  31,   7, 227,  67,  67,  67,  67,  67,
     67,  67,  67,  67,  81,  97,  97,  97,  97,  97,  97,  97,
     97,  97,  97, 240, 240,  51,  67,  67,   0,   9,  32,  28,
     15, 240, 240, 243,  82,  84,  52,  68,  67, 113,  97, 113,
     97, 113,  97, 113,  97,  97,  97, 113,  97,  97,  97,  97,
      0,  50,  64, 107,  31,   0,  13,  33, 114, 240,  97, 114,
    240,  82, 113, 240,  97, 129, 240,  97, 114, 240,  82, 114,
    240,  82, 113, 240,  97, 129, 240,  97, 114, 240,  82, 114,
    240,  82, 113, 240,  97, 129, 240,  97, 114, 191,  12, 209,
    129, 240,  97, 114, 240,  97, 114, 240,  82, 113, 240,  98,
    113, 240,  97, 129, 223,  12, 178, 113, 240,  97, 129, 240,
     97, 114, 240,  97, 114, 240,  82, 113, 240,  97, 129, 240,
     97, 114, 240,  97, 114, 240,  82, 113, 240,  98, 113, 240,
     97, 114, 240,  97, 114, 240,  82, 113, 240,  98, 113,   0,
      9, 112,  80,  19,  97, 240,  49, 240,  22, 194,  17,  50,
    145,  49,  81, 114,  49,  97,  97,  65,  98,  66,  65, 113,
     66,  65,  83,  66,  65,  83,  66,  65,  83,  67,  49, 195,
     49, 211,  33, 229, 247, 231, 209,  21, 193,  67, 177,  83,
    161,  83,  67,  49,  98,  67,  49,  98,  67,  49,  98,  65,
     81,  98,  65,  81,  82,  97,  65,  82,  98,  49,  66, 130,
     33,  34, 197, 240,  17, 240,  49,   0,  20,  64, 108,  31,
     67, 241, 162,  49, 210, 161,  67, 163, 146,  84, 100, 161,
     97,  54,  18, 162, 113, 146, 162, 113, 130, 178, 113, 130,
    178, 113, 114, 194, 113,  98, 210, 113,  98, 210, 113,  82,
    241,  97,  82, 240,  18,  81,  82, 240,  33,  65,  82, 240,
     65,  34,  82, 240,  82,  98, 113, 240,  82,  98,  18, 240,
     50,  81,  81, 240,  18,  82,  97, 241,  97, 113, 226,  82,
    129, 194,  98, 129, 193, 114, 129, 178, 114, 129, 162, 130,
    129, 162, 130, 129, 146, 161, 114, 145, 178,  97, 146, 193,
     82, 130, 210,  50, 145, 240,  20,   0,  31, 112,  87,  29,
      0,   8,  35, 240, 161,  49, 240, 130,  65, 240,  98,  81,
    240,  98,  81, 240,  98,  81, 240,  98,  81, 240,  98,  65,
    240, 114,  65, 240, 115,  33, 240, 146,  17, 240, 163, 151,
    162, 195, 195, 177, 227, 177, 209,  19, 145, 194,  50, 145,
    177,  83, 113, 193,  99,  97, 177, 130,  81, 193, 131,  49,
    194, 147,  33, 194, 162,  17, 210, 178, 145,  67, 163, 129,
     83, 129,  19,  97, 115,  82,  66,  66, 150, 117,   0,  37,
     16,  17,   8, 240, 147,  84,  68, 113, 113, 113, 113,  97,
    113,  97,  97,   0,  26, 112,  43,  13, 129, 177, 177, 177,
    178, 177, 178, 177, 178, 177, 178, 178, 178, 178, 162, 178,
    178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 179, 178,
    178, 178, 193, 194, 178, 194, 178, 194, 193, 209, 209, 209,
     64,  43,  13,   1, 210, 193, 209, 194, 194, 178, 194, 178,
    194, 178, 178, 178, 194, 178, 178, 178, 178, 178, 178, 178,
    178, 178, 178, 178, 178, 177, 178, 178, 178, 177, 178, 177,
    178, 177, 178, 177, 177, 177, 177, 192,  41,  18,  98, 240,
     18, 240,  18, 240,  18, 162,  66,  66,  82,  49,  66, 130,
     17,  34, 179,  18, 226, 227,  18, 178,  17,  34, 130,  65,
     50,  82,  66,  66, 162, 240,  18, 240,  18, 240,  18,   0,
     53,  57,  29,   0,  30,  65, 240, 209, 240, 209, 240, 209,
    240, 209, 240, 209, 240, 209, 240, 209, 240, 209, 240, 209,
    240, 209, 240, 209, 240,  31,  10, 240,  17, 240, 209, 240,
    209, 240, 209, 240, 209, 240, 209, 240, 209, 240, 209, 240,
    209, 240, 209, 240, 209, 240, 209,   0,  27,  48,  17,   8,
      0,  27,   3,  84,  68, 113, 113, 113, 113,  97, 113,  97,
     97, 240, 128,   8,  14,   0,  35,  10,  74,   0,  32,  10,
      7,   0,  23,  83,  67,  67,   0,   9,  32,  83,  18, 209,
    240,  18, 240,  17, 240,  33, 240,  18, 240,  17, 240,  33,
    240,  18, 240,  17, 240,  33, 240,  18, 240,  17, 240,  33,
    240,  18, 240,  18, 240,  17, 240,  18, 240,  18, 240,  17,
    240,  18, 240,  18, 240,  17, 240,  18, 240,  18, 240,  17,
    240,  18, 240,  18, 240,  17, 240,  33, 240,  18, 240,  17,
    240,  33, 240,  18, 240,  17, 240,  33, 240,  18, 240,  17,
    240,  33, 240,  18, 240,  17, 240,  32,  57,  18,   0,   9,
     84, 194,  66, 146,  98, 129, 129, 114, 130,  97, 161,  97,
    161,  82, 162,  66, 162,  66, 162,  66, 162,  66, 162,  66,
    162,  66, 162,  66, 162,  66, 162,  66, 162,  66, 162,  66,
    162,  81, 162,  82, 130,  98, 130, 113, 129, 130,  98, 146,
     66, 196,   0,  23,  80,  34,  16,   0,   8,  97, 211, 148,
     18, 226, 226, 226, 226, 226, 226, 226, 226, 226, 226, 226,
    226, 226, 226, 226, 226, 226, 226, 226, 226, 226, 226, 156,
      0,  20,  64,  56,  19,   0,  10,   6, 193,  83, 145, 115,
    113, 147,  81, 164,  65, 179,  67, 147,  67, 147,  67, 147,
    240,  19, 243, 240,  19, 240,  18, 240,  18, 240,  19, 240,
     18, 240,  18, 240,  17, 240,  33, 240,  33, 240,  33, 145,
    113, 161,  97, 177,  81, 177, 109,  94,   0,  24,  48,  56,
     20,   0,  10,  86, 194,  83, 145, 131, 113, 163,  99, 131,
     99, 131,  99, 131, 240,  35, 240,  34, 240,  35, 240,  19,
    240,  18, 229, 240,  82, 240,  67, 240,  51, 240,  35, 240,
     51, 240,  35,  67, 163,  67, 163,  67, 163,  65, 179,  98,
    146, 131,  83, 198,   0,  26,  16,  58,  20,   0,  11,  49,
    240,  50, 240,  50, 240,  35, 240,  17,  18, 240,  17,  18,
    241,  34, 225,  50, 225,  50, 209,  66, 193,  82, 193,  82,
    177,  98, 177,  98, 161, 114, 145, 130, 145, 130, 129, 146,
    143,   1, 226, 240,  50, 240,  50, 240,  50, 240,  50, 240,
     50, 234,   0,  25,  64,  57,  18,   0,   9,  34, 114, 121,
    151, 177, 240,  33, 240,  33, 240,  33, 240,  33, 240,  33,
    240,  33,  37, 161,  17,  66, 146,  98, 129, 130, 240,  18,
    240,  34, 240,  18, 240,  18, 240,  18,  67, 146,  67, 146,
     67, 146,  65, 177,  97, 146,  98, 114, 130,  82, 181,   0,
     23,  80,  59,  19,   0,  10,  54, 179,  81, 146,  98, 130,
    114, 130, 114, 114, 240,  19, 240,  19, 240,  18, 240,  19,
     53, 131,  33,  66, 115,  17, 113, 100, 130,  84, 145,  83,
    162,  67, 162,  67, 162,  67, 162,  67, 162,  82, 162,  82,
    162,  83, 145, 114, 130, 130, 113, 162,  66, 197,   0,  24,
    112,  59,  20,   0,   7,  81, 240,  66, 240,  63,  95,  81,
    193,  81, 193,  97, 193,  97, 177, 240,  49, 240,  65, 240,
     49, 240,  49, 240,  65, 240,  49, 240,  65, 240,  50, 240,
     50, 240,  34, 240,  50, 240,  50, 240,  50, 240,  35, 240,
     35, 240,  35, 240,  35, 240,  35, 240,  35,   0,  26,  64,
     55,  19,   0,  10,  21, 194,  82, 145, 145, 113, 162,  97,
    177,  97, 177,  97, 177,  98, 161,  99, 129, 132,  81, 164,
     49, 198, 230, 193,  37, 146,  84, 129, 116,  97, 163,  65,
    194,  65, 194,  65, 209,  65, 209,  65, 194,  81, 177, 113,
    145, 146,  82, 197,   0,  24, 112,  59,  19,   0,  10,  21,
    194,  66, 162,  98, 130, 130, 113, 147,  82, 162,  82, 162,
     82, 163,  66, 163,  66, 163,  66, 163,  66, 163,  81, 148,
     82, 132,  98,  97,  19, 114,  65,  35, 133,  51, 240,  18,
    240,  34, 240,  19, 240,  18, 114, 130, 114, 114, 130,  98,
    145,  98, 182,   0,  25,  16,  15,   7,   0,  11,  51,  67,
     67,   0,  10,  19,  67,  67,   0,   9,  32,  22,   7,   0,
     11,  51,  67,  67,   0,  10,  18,  83,  67,  97,  97,  97,
     97,  81,  97,  81,  97, 240,  80,  32,   7,   0,   8,  99,
     67,  67, 240, 240,  49,  97,  97,  97,  97,  97,  97,  97,
     97,  97,  98,  67,  67,  67,  67,  67,  67,  67,  67,  67,
     67, 240,  48,  13,  29,   0,  58,  15,  10,   0,  22,  47,
     10,   0,  58,  64,  45,  17,   0,  21,  99, 227, 227,   0,
     10,  49, 240,  17, 240,  17, 240,  17, 240,  17, 240,  17,
    242, 241, 240,  17, 241, 242, 226, 242, 226, 242, 131,  66,
    131,  66, 131,  66, 161,  82, 129,  99,  82, 150, 240, 240,
    192,  44,  17, 240, 240, 118, 161,  98, 113, 130,  81, 162,
     67, 130,  67, 130,  67, 130, 242, 226, 226, 226, 226, 241,
    241, 240,  17, 242, 241, 240,  17, 240,  17, 240,  17, 240,
     17,   0,  10,  66, 227, 227,   0,  22,  64,  99,  29,   0,
      8,  54, 240,  98,  99, 240,  18, 162, 226, 210, 178, 242,
    161, 240,  33, 145, 116, 129, 129,  82,  66,  97, 113,  82,
     97, 113,  97,  66, 129,  97,  97,  66, 146,  66,  65,  66,
    162,  81,  65,  66, 162,  81,  65,  66, 162,  81,  65,  66,
    162,  81,  65,  66, 162,  81,  65,  66, 162,  81,  65,  66,
    162,  81,  81,  66, 146,  81,  81,  66, 131,  81,  81,  82,
     97,  18,  65, 113,  82,  65,  50,  34, 114, 100,  84, 145,
    240, 225, 240, 226, 227, 179, 148, 240,  24,   0,  37,  96,
     75,  29,   0,   8,  97, 240, 210, 240, 179, 240, 179, 240,
    161,  19, 240, 145,  19, 240, 145,  34, 240, 129,  51, 240,
    113,  51, 240, 113,  66, 240,  97,  83, 240,  81,  83, 240,
     65, 114, 240,  65, 115, 240,  49, 130, 240,  33, 146, 240,
     33, 147, 240,  29, 241, 179, 225, 179, 225, 194, 209, 211,
    193, 211, 193, 226, 177, 243, 161, 243, 147, 228, 102, 184,
      0,  36,  96,  60,  26,   0,   9, 111,   1, 210, 163, 178,
    179, 162, 195, 146, 211, 130, 211, 130, 211, 130, 211, 130,
    195, 146, 195, 146, 178, 178, 146, 222, 194, 164, 162, 195,
    146, 211, 130, 211, 130, 227, 114, 227, 114, 227, 114, 227,
    114, 227, 114, 211, 130, 211, 130, 195, 146, 164, 127,   2,
      0,  33,  80,  71,  26,   0,  10, 118,  97, 179,  82,  65,
    147, 146,  18, 131, 177,  18, 115, 211,  99, 242,  98, 240,
     18,  83, 240,  18,  83, 240,  33,  82, 240,  49,  67, 240,
    131, 240, 131, 240, 131, 240, 131, 240, 131, 240, 131, 240,
    146, 240,  49,  83, 240,  33,  83, 240,  33,  99, 241, 115,
    241, 131, 225, 147, 193, 179, 161, 227,  98, 240,  39,   0,
     33,  96,  71,  28,   0,  10,  79, 240,  18, 148, 210, 179,
    194, 210, 178, 211, 162, 227, 146, 242, 146, 243, 130, 243,
    130, 240,  18, 130, 240,  19, 114, 240,  19, 114, 240,  19,
    114, 240,  19, 114, 240,  19, 114, 240,  19, 114, 240,  19,
    114, 240,  19, 114, 240,  18, 130, 243, 130, 242, 146, 227,
    146, 226, 162, 210, 178, 194, 194, 148, 175,   1,   0,  36,
     64,  62,  26,   0,   9, 111,   5, 146, 180, 146, 210, 146,
    225, 146, 225, 146, 225, 146, 225, 146, 225, 146, 129,  97,
    130, 129, 242, 129, 242, 129, 242, 114, 251, 242, 114, 242,
    129, 242, 129, 242, 129, 113, 114, 241, 130, 241, 130, 241,
    130, 241, 130, 241, 130, 226, 130, 211, 130, 180, 111,   5,
      0,  33,  32,  59,  24,   0,   9,  15,   4, 130, 180, 114,
    210, 114, 210, 114, 225, 114, 225, 114, 225, 114, 225, 114,
    129, 210, 129, 210, 129, 210, 129, 210, 114, 219, 210, 114,
    210, 129, 210, 129, 210, 129, 210, 129, 210, 240, 114, 240,
    114, 240, 114, 240, 114, 240, 114, 240, 114, 240,  73,   0,
     31, 112,  72,  29,   0,  12,  22,  81, 227,  98,  49, 195,
    161,  33, 179, 195, 163, 211, 147, 242, 146, 240,  18, 131,
    240,  33, 131, 240,  33, 130, 240,  49, 115, 240, 179, 240,
    179, 240, 179, 240, 179, 240, 179, 240, 179, 202,  83, 240,
     18, 131, 240,  18, 131, 240,  18, 147, 242, 162, 242, 163,
    226, 179, 210, 195, 179, 228,  98,  33, 240,  24,  65,   0,
     37,  16,  60,  26,   0,   9, 104, 104, 114, 194, 162, 194,
    162, 194, 162, 194, 162, 194, 162, 194, 162, 194, 162, 194,
    162, 194, 162, 194, 162, 194, 175,   1, 162, 194, 162, 194,
    162, 194, 162, 194, 162, 194, 162, 194, 162, 194, 162, 194,
    162, 194, 162, 194, 162, 194, 162, 194, 162, 194, 120, 104,
      0,  33,  34,  12, 240, 240, 104, 114, 162, 162, 162, 162,
    162, 162, 162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
    162, 162, 162, 162, 162, 162, 162, 162, 120,   0,  15,  64,
     58,  18,   0,   7,  57, 226, 240,  18, 240,  18, 240,  18,
    240,  18, 240,  18, 240,  18, 240,  18, 240,  18, 240,  18,
    240,  18, 240,  18, 240,  18, 240,  18, 240,  18, 240,  18,
    240,  18, 240,  18, 240,  18, 240,  18,  99, 114,  99, 114,
     99, 113, 129, 114, 130,  82, 181,   0,  23,  96,  73,  28,
      0,  10,  72, 151, 114, 211, 162, 210, 178, 194, 194, 193,
    210, 177, 226, 161, 242, 145, 240,  18, 129, 240,  34, 113,
    240,  50,  97, 240,  66,  82, 240,  66,  68, 240,  50,  49,
     35, 240,  34,  33,  66, 240,  34,  17,  83, 240,  19, 115,
    242, 131, 242, 147, 226, 163, 210, 163, 210, 179, 194, 195,
    178, 195, 178, 211, 162, 212, 104, 136,   0,  35,  64,  60,
     22,   0,   8,  41, 240,  18, 240,  82, 240,  82, 240,  82,
    240,  82, 240,  82, 240,  82, 240,  82, 240,  82, 240,  82,
    240,  82, 240,  82, 240,  82, 240,  82, 240,  82, 240,  82,
    240,  82, 240,  82, 193, 114, 193, 114, 193, 114, 193, 114,
    193, 114, 178, 114, 163, 114, 148,  79,   3,   0,  28, 109,
     33,   0,  12,  54, 240,  38, 116, 240,  19, 161,  18, 241,
     18, 161,  18, 241,  18, 161,  19, 225,  18, 161,  34, 209,
     34, 161,  34, 209,  34, 161,  35, 193,  34, 161,  50, 177,
     50, 161,  51, 161,  50, 161,  66, 145,  66, 161,  66, 145,
     66, 161,  67, 129,  66, 161,  82, 113,  82, 161,  82, 113,
     82, 161,  83,  97,  82, 161,  98,  81,  98, 161,  99,  65,
     98, 161,  99,  49, 114, 161, 114,  49, 114, 161, 115,  33,
    114, 161, 130,  17, 130, 161, 130,  17, 130, 161, 132, 130,
    161, 146, 146, 147, 130, 146, 119,  97, 120,   0,  41,  96,
     80,  27,   0,  10,  22, 167, 116, 179, 145,  18, 193, 161,
     19, 177, 161,  34, 177, 161,  35, 161, 161,  51, 145, 161,
     51, 145, 161,  67, 129, 161,  82, 129, 161,  83, 113, 161,
     99,  97, 161,  99,  97, 161, 115,  81, 161, 130,  81, 161,
    131,  65, 161, 147,  49, 161, 147,  49, 161, 163,  33, 161,
    178,  33, 161, 179,  17, 161, 196, 161, 196, 161, 211, 161,
    226, 147, 210, 119, 193,   0,  34,  80,  75,  28,   0,  11,
     86, 240,  82,  99, 242, 147, 210, 194, 178, 226, 147, 227,
    130, 240,  18, 115, 240,  19,  99, 240,  19,  98, 240,  50,
     83, 240,  51,  67, 240,  51,  67, 240,  51,  67, 240,  51,
     67, 240,  51,  67, 240,  51,  67, 240,  51,  83, 240,  35,
     83, 240,  19,  99, 240,  19, 115, 242, 131, 227, 147, 195,
    179, 178, 211, 131, 244,  82, 240,  86,   0,  36,  80,  58,
     25,   0,   9,  63, 210, 148, 162, 179, 146, 195, 130, 210,
    130, 211, 114, 211, 114, 211, 114, 211, 114, 210, 130, 195,
    130, 179, 146, 147, 188, 210, 240, 130, 240, 130, 240, 130,
    240, 130, 240, 130, 240, 130, 240, 130, 240, 130, 240, 130,
    240, 130, 240, 130, 240,  88,   0,  33,  48, 106,  28,   0,
     11,  86, 240,  83,  83, 243, 131, 211, 178, 179, 195, 147,
    227, 130, 240,  18, 115, 240,  19,  99, 240,  19,  98, 240,
     50,  83, 240,  51,  67, 240,  51,  67, 240,  51,  67, 240,
     51,  67, 240,  51,  67, 240,  51,  67, 240,  51,  82, 240,
     51,  83, 240,  19,  99, 240,  19, 114, 240,  18, 131,  84,
     83, 147,  65,  49,  66, 178,  49,  81,  34, 211,  17,  81,
     18, 240,  18,  17,  66, 240,  87, 240, 209,  97, 240,  81,
     97, 240,  81,  97, 240,  82,  81, 240,  83,  49, 240, 118,
    240, 118, 240, 132,   0,   7,  96,  66,  29,   0,  10, 126,
    240,  50, 131, 240,  18, 163, 226, 179, 210, 194, 210, 195,
    194, 195, 194, 195, 194, 195, 194, 194, 210, 179, 210, 163,
    226, 131, 240,  26, 240,  66, 115, 240,  34, 147, 242, 163,
    226, 163, 226, 178, 226, 178, 226, 179, 210, 179, 210, 179,
    210, 179,  81, 114, 179,  81, 114, 195,  49,  88, 165,   0,
     37,  61,  20,   0,   8,  21,  65, 130,  82,  33, 114, 116,
     98, 147,  82, 178,  82, 178,  82, 193,  82, 193,  83, 177,
     83, 240,  52, 240,  37, 240,  24, 232, 246, 240,  36, 240,
     50, 240,  51,  65, 210,  65, 210,  65, 210,  65, 210,  66,
    193,  83, 162,  82,  17, 130,  97,  50,  82, 113,  85,   0,
     26,  16,  68,  28,   0,  10,  95,   7,  99, 114, 115,  97,
    146, 145,  97, 146, 145,  97, 146, 145,  81, 162, 145,  81,
    162, 161,  65, 162, 161,  65, 162, 161, 242, 240, 178, 240,
    178, 240, 178, 240, 178, 240, 178, 240, 178, 240, 178, 240,
    178, 240, 178, 240, 178, 240, 178, 240, 178, 240, 178, 240,
    178, 240, 178, 240, 178, 240, 122,   0,  36,  48,  62,  27,
      0,  10,  24, 135, 114, 211, 146, 225, 162, 225, 162, 225,
    162, 225, 162, 225, 162, 225, 162, 225, 162, 225, 162, 225,
    162, 225, 162, 225, 162, 225, 162, 225, 162, 225, 162, 225,
    162, 225, 162, 225, 162, 225, 162, 225, 177, 209, 194, 193,
    209, 177, 241, 145, 240,  34,  82, 240,  85,   0,  35,  48,
     74,  30,   0,  11,  40, 198, 115, 243, 147, 240,  17, 178,
    241, 195, 225, 195, 225, 210, 209, 227, 193, 227, 193, 243,
    161, 240,  19, 161, 240,  34, 145, 240,  51, 129, 240,  51,
    129, 240,  66, 113, 240,  83,  97, 240,  98,  81, 240, 115,
     65, 240, 115,  65, 240, 130,  49, 240, 147,  33, 240, 147,
     33, 240, 164, 240, 180, 240, 194, 240, 210, 240, 210,   0,
     39,  64, 115,  41,   0,  15,  56, 120, 134, 100, 179, 195,
    147, 194, 209, 163, 195, 193, 178, 195, 177, 195, 161,  18,
    177, 195, 161,  19, 161, 210, 161,  19, 145, 227, 129,  35,
    145, 227, 129,  51, 129, 227, 129,  51, 113, 240,  19, 113,
     51, 113, 240,  19,  97,  82, 113, 240,  19,  97,  83,  81,
    240,  51,  81,  83,  81, 240,  51,  65, 114,  81, 240,  51,
     65, 115,  65, 240,  66,  65, 115,  49, 240,  83,  33, 146,
     49, 240,  83,  33, 147,  33, 240,  98,  33, 147,  17, 240,
    116, 178,  17, 240, 116, 180, 240, 131, 179, 240, 146, 210,
    240, 146, 210, 240, 161, 209,   0,  53,  16,  75,  30,   0,
     11,  41, 135, 148, 180, 195, 193, 243, 177, 240,  19, 145,
    240,  35, 129, 240,  67, 113, 240,  83,  81, 240,  99,  65,
    240, 131,  33, 240, 163,  17, 240, 164, 240, 195, 240, 211,
    240, 180, 240, 161,  35, 240, 145,  51, 240, 113,  67, 240,
     97,  99, 240,  81, 115, 240,  49, 132, 240,  17, 163, 240,
     17, 179, 225, 196, 194, 211, 179, 212, 119, 184,   0,  38,
     68,  30,   0,  11,  40, 198, 115, 243, 148, 226, 179, 225,
    211, 193, 227, 193, 243, 161, 240,  34, 145, 240,  51, 129,
    240,  67,  97, 240,  83,  97, 240,  99,  65, 240, 130,  49,
    240, 147,  33, 240, 164, 240, 194, 240, 210, 240, 210, 240,
    210, 240, 210, 240, 210, 240, 210, 240, 210, 240, 210, 240,
    210, 240, 210, 240, 168,   0,  39,  16,  62,  23,   0,   8,
    111,   3,  84, 164,  83, 179,  98, 179, 113, 195, 113, 179,
    113, 179, 129, 179, 240,  67, 240,  67, 240,  83, 240,  67,
    240,  83, 240,  67, 240,  67, 240,  83, 240,  67, 240,  67,
    161, 147, 161, 131, 177, 131, 177, 115, 193,  99, 194,  99,
    194,  83, 195,  67, 181,  79,   4,   0,  29,  32,  42,   9,
    149,  65, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
    129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
    129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
    129, 129, 133,  64,  28,  15,   0,   6, 113,  97,  97,  97,
     97, 113,  97,  97,  97, 113,  97, 113,  97, 113,  97, 116,
     52,  68,  52,  82,  83,   0,  49,  32,  42,   9, 149, 129,
    129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
    129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
    129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
     69,  64,  17,  14,   0,   5,  97, 210, 177,  18, 145,  50,
    113,  97,  81, 129,   0,  54,  96,   9,   7, 240, 211,  67,
     67,   0,  29,  48,  17,   8, 240, 193,  97,  97, 113,  97,
    113, 113, 113, 116,  68,  83,   0,  26,  64,  45,  20,   0,
     33,   5, 210,  66, 177, 114, 162, 114, 147,  98, 146, 114,
    240,  50, 230, 179,  66, 162,  98, 146, 114, 130, 130,  49,
     66, 130,  49,  66, 130,  49,  66, 115,  49,  83,  50,  19,
     33, 101,  68,   0,  25,  80,  63,  21,   0,   7, 117, 240,
     66, 240,  66, 240,  66, 240,  66, 240,  66, 240,  66, 240,
     66, 240,  66, 240,  66, 240,  66,  52, 194,  18,  66, 163,
    114, 146, 146, 130, 146, 130, 162, 114, 162, 114, 162, 114,
    162, 114, 162, 114, 162, 114, 162, 114, 146, 130, 146, 131,
    114, 145,  34,  66, 161,  68,   0,  27,  48,  39,  18,   0,
     29, 118, 163,  82, 114, 129, 113, 131,  82, 131,  81, 147,
     66, 240,  18, 240,  18, 240,  18, 240,  18, 240,  34, 240,
     18, 161,  83, 129, 114, 129, 131,  66, 181,   0,  23,  64,
     61,  22,   0,   9,  69, 240,  82, 240,  82, 240,  82, 240,
     82, 240,  82, 240,  82, 240,  82, 240,  82, 240,  82, 197,
     50, 163,  66,  18, 146, 131, 145, 162, 130, 162, 129, 178,
    114, 178, 114, 178, 114, 178, 114, 178, 114, 178, 114, 178,
    130, 162, 130, 147, 146, 131, 163,  66,  21, 149,  53,   0,
     28,  38,  18,   0,  29, 117, 178,  67, 130, 114,  98, 130,
     97, 162,  81, 162,  66, 162,  78,  66, 240,  18, 240,  18,
    240,  18, 240,  34, 161,  82, 161,  98, 129, 131,  66, 181,
      0,  23,  64,  38,  15, 240, 240, 115, 162,  49, 130,  50,
    130,  50, 114, 210, 210, 210, 210, 210, 210, 170, 130, 210,
    210, 210, 210, 210, 210, 210, 210, 210, 210, 210, 210, 210,
    210, 169,   0,  19,  64,  55,  21,   0,  34, 100,  53, 114,
     67,  50, 113,  97, 194,  98, 178,  98, 178,  98, 178,  98,
    178,  98, 194,  66, 210,  50, 209,  36, 225, 240,  81, 240,
     81, 240,  82, 240,  90, 203, 130, 132,  98, 179,  66, 210,
     66, 210,  66, 210,  82, 178, 115, 100, 168,   0,   6,  48,
     62,  22,   0,   8,  37, 240,  82, 240,  82, 240,  82, 240,
     82, 240,  82, 240,  82, 240,  82, 240,  82, 240,  82, 240,
     82,  53, 194,  33,  66, 178,  17,  83, 163, 114, 162, 130,
    162, 130, 162, 130, 162, 130, 162, 130, 162, 130, 162, 130,
    162, 130, 162, 130, 162, 130, 162, 130, 162, 130, 120,  40,
      0,  28,  29,  11,   0,   5,  99, 131, 131,   0,   9,   5,
    146, 146, 146, 146, 146, 146, 146, 146, 146, 146, 146, 146,
    146, 146, 146, 103,   0,  14,  32,  40,  12,   0,   6,  83,
    147, 147,   0,  10,   4, 162, 162, 162, 162, 162, 162, 162,
    162, 162, 162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
    162,  67,  50,  67,  49,  82,  50, 115, 240, 240,  16,  61,
     22,   0,   8,  37, 240,  82, 240,  82, 240,  82, 240,  82,
    240,  82, 240,  82, 240,  82, 240,  82, 240,  82, 240,  82,
    102, 130, 115, 162, 113, 194,  97, 210,  81, 226,  65, 242,
     49, 240,  18,  35, 243,  35, 226,  66, 226,  82, 210,  83,
    194,  98, 194, 114, 178, 115, 162, 116, 104,  55,   0,  28,
     34,  12, 240, 240, 101, 162, 162, 162, 162, 162, 162, 162,
    162, 162, 162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
    162, 162, 162, 162, 162, 162, 120,   0,  15,  64,  62,  32,
      0,  52,  35,  53,  85, 149,  33,  66,  49,  66, 178,  17,
     83,  17,  83, 163, 115, 114, 162, 130, 130, 162, 130, 130,
    162, 130, 130, 162, 130, 130, 162, 130, 130, 162, 130, 130,
    162, 130, 130, 162, 130, 130, 162, 130, 130, 162, 130, 130,
    162, 130, 130, 162, 130, 130, 120,  40,  40,   0,  40,  64,
     42,  22,   0,  36,   3,  53, 149,  33,  66, 178,  17,  83,
    163, 114, 162, 130, 162, 130, 162, 130, 162, 130, 162, 130,
    162, 130, 162, 130, 162, 130, 162, 130, 162, 130, 162, 130,
    162, 130, 120,  40,   0,  28,  39,  19,   0,  31,  69, 194,
     82, 146, 114, 129, 146,  98, 146,  97, 178,  66, 178,  66,
    178,  66, 178,  66, 178,  66, 178,  66, 178,  82, 146,  98,
    146, 114, 114, 146,  82, 197,   0,  24, 112,  58,  21,   0,
     34,  36,  52, 149,  18,  66, 163, 114, 146, 146, 130, 146,
    130, 162, 114, 162, 114, 162, 114, 162, 114, 162, 114, 162,
    114, 162, 114, 146, 130, 146, 131, 114, 146,  18,  51, 162,
     52, 194, 240,  66, 240,  66, 240,  66, 240,  66, 240,  66,
    240,  66, 240,  24,   0,   6, 112,  60,  22,   0,  36,  53,
     65, 163,  66,  33, 146, 113,  33, 146, 131, 130, 162, 130,
    162, 114, 178, 114, 178, 114, 178, 114, 178, 114, 178, 115,
    162, 130, 162, 131, 131, 146, 113,  18, 163,  65,  34, 197,
     50, 240,  82, 240,  82, 240,  82, 240,  82, 240,  82, 240,
     82, 240,  82, 240,  40,   0,   6,  28,  15,   0,  24,  83,
     35,  85,  17,  34, 115,  50, 115, 195, 194, 210, 210, 210,
    210, 210, 210, 210, 210, 210, 210, 168,   0,  19,  80,  36,
     16,   0,  26,  54, 130,  98,  81, 145,  81, 145,  81, 145,
     82, 243, 230, 198, 227,  81, 146,  65, 161,  65, 161,  66,
    145,  67, 113,  81,  18,  82,  81,  53,   0,  20, 112,  38,
     15,   0,  11,  97, 225, 225, 225, 210, 210, 195, 170, 130,
    210, 210, 210, 210, 210, 210, 210, 210,  81, 114,  81, 114,
     81, 114,  81, 114,  81, 115,  65, 130,  49, 164,   0,  19,
     64,  42,  22,   0,  35, 101,  85, 162, 130, 162, 130, 162,
    130, 162, 130, 162, 130, 162, 130, 162, 130, 162, 130, 162,
    130, 162, 130, 162, 130, 162, 130, 162, 115, 162,  97,  18,
    178,  66,  21, 149,  53,   0,  28,  44,  22,   0,  35, 103,
    101,  99, 146, 146, 145, 162, 145, 178, 113, 194, 113, 195,
     97, 210,  81, 226,  81, 242,  49, 240,  18,  49, 240,  19,
     33, 240,  34,  17, 240,  50,  17, 240,  66, 240,  82, 240,
     82,   0,  29,  65,  29,   0,  47,  22,  54,  70,  98, 114,
    130, 130, 114, 129, 147, 114, 113, 162,  99,  97, 178,  99,
     97, 194,  65,  34,  81, 194,  65,  34,  65, 210,  65,  34,
     65, 226,  33,  66,  49, 226,  33,  66,  33, 242,  33,  66,
     33, 240,  19,  98,  17, 240,  19,  99, 240,  35,  99, 240,
     49, 130, 240,  49, 129,   0,  37,  96,  45,  23,   0,  37,
     55,  86, 131, 115, 178, 113, 211,  97, 227,  65, 240,  18,
     49, 240,  50,  17, 240,  82, 240,  99, 240,  84, 240,  49,
     34, 240,  33,  66, 241,  83, 225,  99, 193, 130, 163, 131,
    118, 103,   0,  29,  32,  61,  22,   0,  35, 102, 102,  98,
    147, 145, 161, 162, 129, 178, 129, 194,  97, 210,  97, 226,
     81, 226,  65, 242,  65, 240,  18,  33, 240,  34,  33, 240,
     35,  17, 240,  51, 240,  67, 240,  81, 240,  97, 240,  97,
    240,  81, 240,  97, 240,  81, 242,  65, 242,  49, 240,  17,
     50, 240,  36,   0,   7,  80,  33,  18,   0,  29,  61,  82,
    130,  97, 131,  97, 130,  97, 130, 242, 243, 242, 242, 242,
    243,  97, 130, 113, 114, 129,  98, 145,  83, 130,  82, 131,
     78,   0,  23,   9,  22,   0,  52,  47,   3,   0,  55,  64,
      9,  41,   0,  97,  63,  15,   7,   0, 103,  21,  14, 240,
    240, 226,  66,  98,  66,  97,  81,  98,  66,  97,  81,  97,
     81, 113,  81,   0,  53,  48,  14,  16,   0,   8,  36,  81,
     82,  34,  49,  81,  99,   0,  66,  96,
};

//*****************************************************************************
//
// The font definition for the 40 point Cm font.
//
//*****************************************************************************
const tFont g_sFontCm40 =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    36,

    //
    // The height of the font.
    //
    40,

    //
    // The baseline of the font.
    //
    30,

    //
    // The offset to each character in the font.
    //
    {
           0,    4,   35,   63,  170,  250,  358,  445,
         462,  505,  548,  589,  646,  663,  671,  681,
         764,  821,  855,  911,  967, 1025, 1082, 1141,
        1200, 1255, 1314, 1329, 1351, 1383, 1396, 1441,
        1485, 1584, 1659, 1719, 1790, 1861, 1923, 1982,
        2054, 2114, 2148, 2206, 2279, 2339, 2448, 2528,
        2603, 2661, 2767, 2833, 2894, 2962, 3024, 3098,
        3213, 3288, 3356, 3418, 3460, 3488, 3530, 3547,
        3556, 3573, 3618, 3681, 3720, 3781, 3819, 3857,
        3912, 3974, 4003, 4043, 4104, 4138, 4200, 4242,
        4281, 4339, 4399, 4427, 4463, 4501, 4543, 4587,
        4652, 4697, 4758, 4791, 4800, 4809, 4830,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8Cm40Data
};
