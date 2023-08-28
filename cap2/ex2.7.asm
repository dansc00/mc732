/*Translate the following C code to RISC-V.
Assume that the variables f, g, h, i, and j are assigned to registers
x5, x6, x7, x28, and x29, respectively. Assume that the base
address of the arrays A and B are in registers x10 and x11,
respectively. Assume that the elements of the arrays A and B are
8-byte words:
B[8] = A[i] + A[j];*/

.section .data

.section .text

    slli x28, x28, 3 # guarda a posição i
    slli x29, x29, 3 # guarda a posição j
    ld x28, 0(x10) # carrega valor da posição i da memória no registrador x28
    ld x29, 0(x10) # carrega valor da posição j da memória no registrador x29
    add x28, x28, x29 # adiciona A[i] + A[j]
    sd x28, 64(x11) # armazena resultado na posição [8] da memória no vetor B