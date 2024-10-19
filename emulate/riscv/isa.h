/**
 *
 *  The Instruction Set for CS910 Processor
 *
 *  Author: Maurice Green
 */

#ifndef C910_ISA_H
#define C910_ISA_H

#include <stdint.h>

/* ADD instructions */

uint32_t instruction_encode_nimm(uint8_t, uint8_t, uint8_t);            // 2-source / non-immediate
uint32_t instruction_encode_1imm(uint8_t, uint8_t, uint16_t);           // 1-source / immediate
uint32_t instruction_encode_2imm(uint8_t, uint8_t, uint8_t, uint8_t);   // 2-source / 2-immediate


/**
 * Function pointers for the associated instruction encodings
 */
typedef uint32_t (* nonimmptr)(uint8_t rs2, uint8_t rs1, uint8_t rd) = \
                                                    instruction_encode_nimm;

typedef uint32_t (* oneimmptr)(uint8_t rs1, uint8_t rd, uint16_t imm) = \
                                                    instruction_encode_1imm;

typedef uint32_t (* twoimmptr)(uint8_t rs2, uint8_t rs1, uint8_t imm1, uint8_t imm2) = \
                                                    instruction_encode_2imm;

typedef nonimmptr encode_add;
typedef oneimmptr encode_addi;
typedef nonimmptr encode_addw;
typedef oneimmptr encode_addiw;

#endif