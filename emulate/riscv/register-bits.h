
#define CSR_TB_SIZE             0x1000 // Final register EX_CSR_FXCR = 0x800

/* Machine Information Registers */
#define CSR_MVENDORID           0xf11
#define CSR_MARCHID             0xf12
#define CSR_MIMPID              0xf13
#define CSR_MHARTID             0xf14

/* Machine Exception Configuration Setup */
#define CSR_MSTATUS             0x300
#define CSR_MISA                0x301
#define CSR_MEDELEG             0x302
#define CSR_MIDELEG             0x303
#define CSR_MIE                 0x304
#define CSR_MTVEC               0x305
#define CSR_MCOUNTEREN          0x306
#define CSR_MCOUNTINHIBIT       0x320

/* Machine Exception Handling */
#define CSR_MSCRATCH            0x340
#define CSR_MEPC                0x341
#define CSR_MCAUSE              0x342
#define CSR_MTVAL               0x343
#define CSR_MIP                 0x344

/* Physical Memory Protection */
#define CSR_PMPCFG0             0x3a0
#define CSR_PMPADDR0            0x3b0
#define CSR_PMPADDR1            0x3b1
#define CSR_PMPADDR2            0x3b2
#define CSR_PMPADDR3            0x3b3
#define CSR_PMPADDR4            0x3b4
#define CSR_PMPADDR5            0x3b5
#define CSR_PMPADDR6            0x3b6
#define CSR_PMPADDR7            0x3b7

/* Machine Counters & Timers */
#define CSR_MCYCLE              0xb00
#define CSR_MINSTRET            0xb02
#define CSR_MHPMCOUNTER3        0xb03
#define CSR_MHPMCOUNTER4        0xb04
#define CSR_MHPMCOUNTER5        0xb05
#define CSR_MHPMCOUNTER6        0xb06
#define CSR_MHPMCOUNTER7        0xb07
#define CSR_MHPMCOUNTER8        0xb08
#define CSR_MHPMCOUNTER9        0xb09
#define CSR_MHPMCOUNTER10       0xb0a
#define CSR_MHPMCOUNTER11       0xb0b
#define CSR_MHPMCOUNTER12       0xb0c
#define CSR_MHPMCOUNTER13       0xb0d
#define CSR_MHPMCOUNTER14       0xb0e
#define CSR_MHPMCOUNTER15       0xb0f
#define CSR_MHPMCOUNTER16       0xb10
#define CSR_MHPMCOUNTER17       0xb11
#define CSR_MHPMCOUNTER18       0xb12
#define CSR_MHPMCOUNTER19       0xb13
#define CSR_MHPMCOUNTER20       0xb14
#define CSR_MHPMCOUNTER21       0xb15
#define CSR_MHPMCOUNTER22       0xb16
#define CSR_MHPMCOUNTER23       0xb17
#define CSR_MHPMCOUNTER24       0xb18
#define CSR_MHPMCOUNTER25       0xb19
#define CSR_MHPMCOUNTER26       0xb1a
#define CSR_MHPMCOUNTER27       0xb1b
#define CSR_MHPMCOUNTER28       0xb1c
#define CSR_MHPMCOUNTER29       0xb1d
#define CSR_MHPMCOUNTER30       0xb1e
#define CSR_MHPMCOUNTER31       0xb1f

/* Machine Counter Configuration */
#define CSR_MHPMEVENT3          0x323
#define CSR_MHPMEVENT4          0x324
#define CSR_MHPMEVENT5          0x325
#define CSR_MHPMEVENT6          0x326
#define CSR_MHPMEVENT7          0x327
#define CSR_MHPMEVENT8          0x328
#define CSR_MHPMEVENT9          0x329
#define CSR_MHPMEVENT10         0x32a
#define CSR_MHPMEVENT11         0x32b
#define CSR_MHPMEVENT12         0x32c
#define CSR_MHPMEVENT13         0x32d
#define CSR_MHPMEVENT14         0x32e
#define CSR_MHPMEVENT15         0x32f
#define CSR_MHPMEVENT16         0x330
#define CSR_MHPMEVENT17         0x331
#define CSR_MHPMEVENT18         0x332
#define CSR_MHPMEVENT19         0x333
#define CSR_MHPMEVENT20         0x334
#define CSR_MHPMEVENT21         0x335
#define CSR_MHPMEVENT22         0x336
#define CSR_MHPMEVENT23         0x337
#define CSR_MHPMEVENT24         0x338
#define CSR_MHPMEVENT25         0x339
#define CSR_MHPMEVENT26         0x33a
#define CSR_MHPMEVENT27         0x33b
#define CSR_MHPMEVENT28         0x33c
#define CSR_MHPMEVENT29         0x33d
#define CSR_MHPMEVENT30         0x33e
#define CSR_MHPMEVENT31         0x33f

/* sstatus CSR bits */
/* Supervisor Trap Setup */
#define CSR_SSTATUS             0x100
#define CSR_SIE                 0x104
#define CSR_STVEC               0x105
#define CSR_SCOUNTEREN          0x106

/* Supervisor Trap Handling */
#define CSR_SSCRATCH            0x140
#define CSR_SEPC                0x141
#define CSR_SCAUSE              0x142
#define CSR_STVAL               0x143
#define CSR_SIP                 0x144

/* Supervisor Address Translation */
#define CSR_SATP                0x180

/* User Floating-Point Control */
#define CSR_FFLAGS              0x001
#define CSR_FRM                 0x002
#define CSR_FCSR                0x003

/* User Counters & Timers */
#define CSR_CYCLE               0xc00
#define CSR_TIME                0xc01
#define CSR_INSTRET             0xc02
#define CSR_HPMCOUNTER3         0xc03
#define CSR_HPMCOUNTER4         0xc04
#define CSR_HPMCOUNTER5         0xc05
#define CSR_HPMCOUNTER6         0xc06
#define CSR_HPMCOUNTER7         0xc07
#define CSR_HPMCOUNTER8         0xc08
#define CSR_HPMCOUNTER9         0xc09
#define CSR_HPMCOUNTER10        0xc0a
#define CSR_HPMCOUNTER11        0xc0b
#define CSR_HPMCOUNTER12        0xc0c
#define CSR_HPMCOUNTER13        0xc0d
#define CSR_HPMCOUNTER14        0xc0e
#define CSR_HPMCOUNTER15        0xc0f
#define CSR_HPMCOUNTER16        0xc10
#define CSR_HPMCOUNTER17        0xc11
#define CSR_HPMCOUNTER18        0xc12
#define CSR_HPMCOUNTER19        0xc13
#define CSR_HPMCOUNTER20        0xc14
#define CSR_HPMCOUNTER21        0xc15
#define CSR_HPMCOUNTER22        0xc16
#define CSR_HPMCOUNTER23        0xc17
#define CSR_HPMCOUNTER24        0xc18
#define CSR_HPMCOUNTER25        0xc19
#define CSR_HPMCOUNTER26        0xc1a
#define CSR_HPMCOUNTER27        0xc1b
#define CSR_HPMCOUNTER28        0xc1c
#define CSR_HPMCOUNTER29        0xc1d
#define CSR_HPMCOUNTER30        0xc1e
#define CSR_HPMCOUNTER31        0xc1f


/* Extended Machine CPU CSR */
#define EX_CSR_MXSTATUS         0x7c0
#define EX_CSR_MHCR             0x7c1
#define EX_CSR_MCOR             0x7c2
#define EX_CSR_MCCR2            0x7c3
#define EX_CSR_MHINT            0x7c5
#define EX_CSR_MRVBR            0x7c7
#define EX_CSR_MCOUNTERWEN      0x7c9
#define EX_CSR_MCOUNTERINTEN    0x7ca
#define EX_CSR_MCOUNTEROF       0x7cb

/* Extended Machine CPU Model */
#define EX_CSR_MCPUID           0xfc0
#define EX_CSR_MAPBADDR         0xfc1

/* Extended Multi-core */
#define EX_CSR_MSMPR            0x7f3

/* Extended Supervisor CPU Control */
#define EX_CSR_SXTATUS          0x5c0
#define EX_CSR_SHCR             0x5c1
#define EX_CSR_SCOUNTERINTEN    0x5c4
#define EX_CSR_SCOUNTEROF       0x5c5
#define EX_CSR_SCYCLE           0x5e0
#define EX_CSR_SHPMCOUNTER3     0x5e3
#define EX_CSR_SHPMCOUNTER4     0x5e4
#define EX_CSR_SHPMCOUNTER5     0x5e5
#define EX_CSR_SHPMCOUNTER6     0x5e6
#define EX_CSR_SHPMCOUNTER7     0x5e7
#define EX_CSR_SHPMCOUNTER8     0x5e8
#define EX_CSR_SHPMCOUNTER9     0x5e9
#define EX_CSR_SHPMCOUNTER10    0x5ea
#define EX_CSR_SHPMCOUNTER11    0x5eb
#define EX_CSR_SHPMCOUNTER12    0x5ec
#define EX_CSR_SHPMCOUNTER13    0x5ed
#define EX_CSR_SHPMCOUNTER14    0x5ee
#define EX_CSR_SHPMCOUNTER15    0x5ef
#define EX_CSR_SHPMCOUNTER16    0x5f0
#define EX_CSR_SHPMCOUNTER17    0x5f1
#define EX_CSR_SHPMCOUNTER18    0x5f2
#define EX_CSR_SHPMCOUNTER19    0x5f3
#define EX_CSR_SHPMCOUNTER20    0x5f4
#define EX_CSR_SHPMCOUNTER21    0x5f5
#define EX_CSR_SHPMCOUNTER22    0x5f6
#define EX_CSR_SHPMCOUNTER23    0x5f7
#define EX_CSR_SHPMCOUNTER24    0x5f8
#define EX_CSR_SHPMCOUNTER25    0x5f9
#define EX_CSR_SHPMCOUNTER26    0x5fa
#define EX_CSR_SHPMCOUNTER27    0x5fb
#define EX_CSR_SHPMCOUNTER28    0x5fc
#define EX_CSR_SHPMCOUNTER29    0x5fd
#define EX_CSR_SHPMCOUNTER30    0x5fe
#define EX_CSR_SHPMCOUNTER31    0x5ff

/* Extended Supervisor MMU */
#define EX_CSR_SMIR             0x9c0
#define EX_CSR_SMEL             0x9c1
#define EX_CSR_SMEH             0x9c2
#define EX_CSR_SMCIR            0x9c3

/* Extended User Floating-Point */
#define EX_CSR_FXCR             0x800

/**
 * 
 * Interrupt & Exception Vector assignment
 * 
 * IRQ_< CPU MODE >_< Function >  
 */

#define IF1_IRQ_UNAVAIL     0
#define IF1_IRQ_S_SOFT      1
#define IF1_IRQ_RESERVED2   2
#define IF1_IRQ_M_SOFT      3
#define IF1_IRQ_S_TIMER     5
#define IF1_IRQ_RESERVED6   6
#define IF1_IRQ_M_TIMER     7
#define IF1_IRQ_S_EXTERN    9
#define IF1_IRQ_M_EXTERN    11
#define IF1_IRQ_PERF_OVF    17
#define IF1_IRQ_RESERVEDO   18

#define IF2_IRQ_UNAVAIL     0
#define IF2_IRQ_IFETCH_ERR  1
#define IF2_IRQ_ILLEGALI    2
#define IF2_IRQ_DEBUG_BR    3
#define IF2_IRQ_LOADI_UAA   4
#define IF2_IRQ_LOADI_A     5
#define IF2_IRQ_STORE_ATOMIC_UA 6
#define IF2_IRQ_STORE_ATOMIC_IA 7
#define IF2_IRQ_U_ENV_CALL      8
#define IF2_IRQ_S_ENV_CALL      9
#define IF2_IRQ_RESERVED10      10
#define IF2_IRQ_M_ENV_CALL      11
#define IF2_IRQ_IF_PAGE_ERR     12
#define IF2_IRQ_LI_PAGE_ERR     13
#define IF2_IRQ_RESERVED14      14
#define IF2_IRQ_ST_AT_PAGE_ERR  15
#define IF2_IRQ_RESERVED16      16
#define IF2_IRQ_RESERVED17      17
#define IF2_IRQ_RESERVED18      18
#define IF2_IRQ_RESERVED19      19
#define IF2_IRQ_RESERVED20      20
#define IF2_IRQ_RESERVED21      21
#define IF2_IRQ_RESERVED22      22
#define IF2_IRQ_RESERVED23      23
#define IF2_IRQ_RESERVED24      24
#define IF2_IRQ_RESERVED25      25
#define IF2_IRQ_RESERVED26      26
#define IF2_IRQ_RESERVED27      27
#define IF2_IRQ_RESERVED28      28
#define IF2_IRQ_RESERVED29      29
#define IF2_IRQ_RESERVED30      30
#define IF2_IRQ_RESERVED31      31

#define EXCEPTION_MTVAL(IRQ, ...) \
    if (IRQ == 1) CSR_MTVAL