/**
 * 
 * Define all CSR operations for the C910 Processor
 * 
 * Function prototypes will be used as pointer assignments to the csr ops
 * struct.
 * 
 * The C910 will declare a CSR array of size 0x800
 */

#include "cpu.h"
#include "register-bits.h"


/* A function prototype for each Registers defined in register-bits.h */

// predicate
static int generic(struct C910STATE *state, int csr_number);

// reads

static int read_ro(struct C910STATE *state, int csr_number, r_length* reg_val); // reads for read-only CSRs
static int read_zero_reg(struct C910STATE *state, int csr_number, r_length *reg_val);
static int read_mstatus(struct C910STATE *state, int csr_number, r_length *reg_val);

// writes
static int write_mstatus(struct C910STATE *state, int csr_number, r_length *reg_val);


/**
 * 
 * The Struct Format below shows the order in which initialization pointer assignments
 * Should occur.
 * 
 * 
 * typedef struct {            // CSR operations functions
 *   c910_csr_predicate_opc  predicat_status;
 *   c910_csr_read_opc       read;
 *   c910_csr_write_opc      write;
 *   c910_csr_general_opc    op;
 * } c910_csr_operations;
 * 
 * Clearly, the order is: predicate, read, write, and general operation.  If an operation
 * should not be supported (i.e. a read-only register should not have a pointer assignment
 * for c910_csr_write_opc), simply leave the positional member assignment empty.
 * 
 */
static c910_csr_operations csr_ops[CSR_TB_SIZE] = {

    [CSR_MVENDORID] = { generic, read_ro        },          // Zero register - no write, or custom operation
    [ CSR_MARCHID ] = { generic, read_ro        },          // stores architecture IDs of CPU cores
    [ CSR_MIMPID  ] = { generic, read_zero_reg  },          // Not implemented in C910
    [ CSR_MHARTID ] = { generic, read_ro        },
    
    // M-Mode Exception Registers
    [ CSR_MSTATUS ] = { generic,  }, 
};


// prototype definitions 

// predicate
static int generic(struct C910STATE *state, int csr_number)
{
    return 0;
}


// reads

static int read_zero_reg(struct C910STATE *state, int csr_number, r_length *reg_val)
{
    return *reg_val = 0;
}

static int read_ro(struct C910STATE *state, int csr_number, r_length *reg_value)
{
    if (state->CPUMODE != MACHINE) { /* call interrupt */ }

    *reg_value = state->mvendorid;
    return 0;
}

static int read_mstatus(struct C910STATE *state, int csr_number, r_length *reg_val)
{
    if (state->CPUMODE != MACHINE) { /* call interrupt */ }

    *reg_val = state->mstatus;
    return 0;
}

// writes
static int write_mstatus(struct C910STATE *state, int csr_number, r_length *reg_val)
{
    /**
     * Handles Global interrupt enable Bit, Exception preserve interrupt enable bit,
     * and exception preserve privilege mode bit.
     */
    
    if (state->sie == 1 ) {
        /* SMODe Interrupts valid */

        /*
         * bit reset to 0 when downgraded ::-> SMODE response time int.
         * bit   set to SPIE when CPU exits int service program
        */
    } else {
        state->ic;
    }

    if (state->mie == 1) {

    }
}