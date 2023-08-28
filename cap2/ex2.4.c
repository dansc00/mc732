/*For the RISC-V assembly instructions below, what is the corresponding C statement? Assume that the
variables f, g, h, i, and j are assigned to registers x5, x6, x7,
x28, and x29, respectively. Assume that the base address of the
arrays A and B are in registers x10 and x11, respectively.

slli x30, x5, 3 // x30 = f*8
add x30, x10, x30 // x30 = &A[f]
slli x31, x6, 3 // x31 = g*8
add x31, x11, x31 // x31 = &B[g]
ld x5, 0(x30) // f = A[f]
addi x12, x30, 8
ld x30, 0(x12)
add x30, x30, x5
sd x30, 0(x31)
*/

#include <stdio.h>

int main(int argc, char* argv){

    int f, g, h, i, j,x30, x31, x12, A[] = {}, B[] = {};

    x30 = f*8;
    x30 = &A[f];
    x31 = g*8;
    x31 = &B[g];
    f = A[f];
    x12 = &A[f]+8;
    x30 = A[f+1];
    x30 += f;
    B[g] = x30; 

    return 0;
}