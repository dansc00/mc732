/* For the following C statement, write the corresponding RISC-V assembly code. Assume that the C
variables f, g, and h, have already been placed in registers x5, x6, and x7 respectively. 
Use a minimal number of RISC-V assembly instructions.

f = g + (h − 5);*/

.section .data

.section .text

    addi x5, x7, -5
    add x5, x5, x6

