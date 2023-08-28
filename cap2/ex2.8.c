/*Translate the following RISC-V code to C.
Assume that the variables f, g, h, i, and j are assigned to registers
x5, x6, x7, x28, and x29, respectively. Assume that the base
address of the arrays A and B are in registers x10 and x11,
respectively.
addi x30, x10, 8
addi x31, x10, 0
sd x31, 0(x30)
ld x30, 0(x30)
add x5,x30, x31*/

#include <stdio.h>

int main(int argc, char *argv){

    int f, x30, x31, A[] = {}, B[] = {};

    x30 = &A[1];
    x31 = &A[0];
    A[1] = x31;
    x30 = A[1];
    f = x30 + x31; // = A[1] = x31 = &A[0] + &A[0] = 2* &A[0]
    return 0;
}