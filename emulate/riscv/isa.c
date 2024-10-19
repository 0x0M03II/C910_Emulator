#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "include/isa.h"


/* INSTRUCTION ADDI */

uint32_t encode_add(uint8_t rs2, uint8_t rs1, uint8_t rd)
{
    uint32_t instruction = 0;

    instruction |= (0x00 & 0x07)    << 25;
    instruction |= ( rs1 & 0x05)    << 20;
    instruction |= ( rs2 & 0x05)    << 15;
    instruction |= (0x00 & 0x03)    << 12;
    instruction |= (  rd & 0x05)    <<  7;
    instruction |= (       0x33);       // opcode 0110011

    return instruction;
}

uint32_t encode_addi(uint8_t rs1, uint8_t rd, uint16_t imm)
{
    uint32_t instruction = 0;

    instruction |= (imm & 0xFFF)    << 20;
    instruction |= ( rs1 & 0x1F)    << 15;
    instruction |= (0x00 & 0x03)    << 12;
    instruction |= (  rd & 0x1F)    <<  7;
    instruction |= (      0x13);        // opcode 0010011

    return instruction;
}

uint32_t encode_addw(uint8_t rs2, uint8_t rs1, uint8_t rd)
{
    uint32_t instruction = 0;

    instruction |= (0x00 & 0x07)    << 25;
    instruction |= ( rs2 & 0x05)    << 20;
    instruction |= ( rs1 & 0x05)    << 15;
    instruction |= (0x00 & 0x03)    << 12;
    instruction |= (  rd & 0x05)    <<  7;
    instruction |= (       0x3B);       // opcode 0111011

    return instruction;
}

uint32_t encode_addiw(uint8_t rs1, uint8_t rd, uint16_t imm)
{
    uint32_t instruction = 0;
    
    instruction |= (imm & 0xFFF)    << 20;
    instruction |= ( rs1 & 0x1F)    << 15;
    instruction |= ( 0x0 & 0x03)    << 12;
    instruction |= (  rd & 0x1F)    <<  7;
    instruction |= (       0x1B);       // opcode 0011011

    return instruction;
}

