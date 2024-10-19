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
static int generic(struct C910STATE *state, int csr_number);
static int read_zero_register(struct C910STATE *state, int csr_number);


static c910_csr_operations csr_ops[CSR_TB_SIZE] = {

    [CSR_MVENDORID] = { generic, read_zero_register },      // Zero register - no write, or custom operation
};