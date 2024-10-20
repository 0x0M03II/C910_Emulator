

#ifndef C910_CPU_H
#define C910_CPU_H

#include <stdint.h>

#if defined(TARGET_RISCV32)
typedef uint32_t r_length;
#elif defined(TARGET_RISCV64)
typedef uint64_t r_length;
#else
typedef uint64_t r_length;
#endif

/**
 * CPU MODES for the C910 Processor
 *  - U-MODE = lowest privilege
 *  - S-MODE = second lowest
 *  - M-MODE = highest privilege
 */

typedef enum {
    MACHINE,
    SUPERVISOR,
    USER
} CPU_MODES;

struct pic {};
struct apic {};
struct lpic {};

typedef void (* InterruptHandler)(union InterruptController *);

typedef enum {
    PIC,
    APIC,
    LPIC
} INTERRUPT_CONTROLLER;


typedef uint8_t byte_order;

#define LITTLE_ENDIAN   0

#define CACHE_LINE_SIZE(b) ((b) * 1024 * 1024 * 1024)

/* CSR Operation Function pointers */

// behavior not defined yet!
typedef int (* c910_csr_read_opc)(void);
typedef int (* c910_csr_write_opc)(void);
typedef int (* c910_csr_general_opc)(void);
typedef int (* c910_csr_predicate_opc)(void);

typedef struct {            // CSR operations functions
    c910_csr_predicate_opc  predicat_status;
    c910_csr_read_opc       read;
    c910_csr_write_opc      write;
    c910_csr_general_opc    op;
} c910_csr_operations;

struct C910STATE {           // The C910 CPU State , idea based on Qemu

/**
 * CPU needs to have all of it state features
 * meaning control and status registers, as
 * well as GPRs.  This will allow the CPU to
 * track and control status.
 */

    r_length gpr[32];

    r_length fpr[32];

    r_length pc;

    CPU_MODES CPUMODE;

    byte_order endianness;

    /* machine mode CSRs */
    r_length mhartid;
    r_length mvendorid;
    r_length marchid;
    r_length mimpid;

    r_length mstatus;
    r_length misa;
    r_length medeleg;
    r_length mideleg;
    r_length mie;
    r_length mtvec;

    r_length mip;
    r_length mcause;
    r_length mscratch;
    r_length mepc;

    r_length pmpcfg;
    r_length pmpaddr;

    r_length mcycle;
    r_length minstret;
    r_length mhpmcountern;

    r_length mhpmeventn;

    r_length mxstatus;
    r_length mhcr;
    r_length mcor;
    r_length mccr2;
    r_length mhint;
    r_length mrvbr;
    r_length mcounterwen;
    r_length mcounterinten;
    r_length mcounteren;


    r_length mcins;
    r_length mcindex;
    r_length mcdata0;
    r_length mcdata1;

    r_length mcpuid;
    r_length mapbaddr;

    r_length msmpr;

    // Supervisor Mode CSRs
    r_length sstatus;
    r_length sie;
    r_length stvec;
    r_length scounteren;

    r_length sscratch;
    r_length sepc;
    r_length scause;
    r_length sip;
    
    r_length satp;
    
    r_length sxstatus;
    r_length shcr;
    r_length scounterinten;
    r_length scounterof;
    r_length scycle;
    r_length sinstret;
    r_length shpmcountern;

    r_length smcir;
    r_length smir;
    r_length smeh;
    r_length smel;

    /* User Mode CSRs */
    r_length fflags;
    r_length frm;
    r_length fcsr;
    r_length cycle;
    r_length time;
    r_length instret;
    r_length hpmcountern;
    r_length fxcr;

    union InterruptController interrupt_controller;
    INTERRUPT_CONTROLLER active_controller;

};

#endif