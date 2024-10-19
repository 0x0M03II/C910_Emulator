#ifndef C910_REGISTERS_H
#define C910_REGISTERS_H

#include "unicorn/riscv.h"

#define REG_COUNT 32
#define REGISTER_VARIANT(ABI, REG) ABI = REG

/* General-purpose Registers */
#define REGISTER_LIST(RVARIANT) \
    RVARIANT(zero, 0), RVARIANT(ra, 1),  RVARIANT(sp, 2),  RVARIANT(gp, 3),     \
    RVARIANT(tp, 4),   RVARIANT(t0, 5),  RVARIANT(t1, 6),  RVARIANT(t2, 7),     \
    RVARIANT(s0, 8),   RVARIANT(fp, 8),  RVARIANT(s1, 9),  RVARIANT(a0, 10),    \
    RVARIANT(a1, 11),  RVARIANT(a2, 12), RVARIANT(a3, 13), RVARIANT(a4, 14),    \
    RVARIANT(a5, 15),  RVARIANT(a6, 16), RVARIANT(a7, 17), RVARIANT(s2, 18),    \
    RVARIANT(s3, 19),  RVARIANT(s4, 20), RVARIANT(s5, 21), RVARIANT(s6, 22),    \
    RVARIANT(s7, 23),  RVARIANT(s8, 24), RVARIANT(s9, 25), RVARIANT(s10, 26),   \
    RVARIANT(s11, 27), RVARIANT(t3, 28), RVARIANT(t4, 29), RVARIANT(t5, 30),    \
    RVARIANT(t6, 31),

typedef enum __attribute__((__packed__)) { 
    REGISTER_LIST(REGISTER_VARIANT)
    REG_COUNT
} GP_REGISTERS;

/* Floating-point Registers */
#if defined(__riscv) && defined(__riscv_xlen)
    #if __riscv_xlen == 64  // load FP registers for 64

        #define FPREG_LIST(FPVARIANT)                                                           \
            FPVARIANT(ft0, 0),  FPVARIANT(ft1, 1),  FPVARIANT(ft2, 2),   FPVARIANT(ft3, 3),     \
            FPVARIANT(ft4, 4),  FPVARIANT(ft5, 5),  FPVARIANT(ft6, 6),   FPVARIANT(ft7, 7),     \
            FPVARIANT(fs0, 8),  FPVARIANT(fs1, 9),  FPVARIANT(fa0, 10),  FPVARIANT(fa1, 11),    \
            FPVARIANT(fa2, 12), FPVARIANT(fa3, 13), FPVARIANT(fa4, 14),  FPVARIANT(fa5, 15),    \
            FPVARIANT(fa6, 16), FPVARIANT(fa7, 17), FPVARIANT(fs2, 18),  FPVARIANT(fs3, 19),    \
            FPVARIANT(fs4, 20), FPVARIANT(fs5, 21), FPVARIANT(fs6, 22),  FPVARIANT(fs7, 23),    \
            FPVARIANT(fs8, 24), FPVARIANT(fs9, 25), FPVARIANT(fs10, 26), FPVARIANT(fs11, 27),   \
            FPVARIANT(ft8, 28), FPVARIANT(ft9, 29), FPVARIANT(ft10, 30), FPVARIANT(ft11, 31),

        typedef enum __attribute__((__packed__)) { 
            FPREG_LIST(REGISTER_VARIANT)
            REG_COUNT 
        } FP_REGISTERS;
    
    #endif // if 64-bit
#endif // Check defined riscv macros

#endif // C910_REGISTERS_H