/*For the following C statement, write the
corresponding RISC-V assembly code. Assume that the variables
f, g, h, i, and j are assigned to registers x5, x6, x7, x28, and x29,
respectively. Assume that the base address of the arrays A and B
are in registers x10 and x11, respectively.
B[8] = A[i−j];*/

.section .data

.section .text

    sub x30, x28, x29
    slli x30, x30, 3 # multiplica por 8 para realizar o deslocamento para o byte correto 
    ld x30, 0(x10)
    sd x30, 64(x11)