/*Write a single C statement that corresponds to the two
RISC-V assembly instructions below.
add f, g, h
add f, i, f*/

#include <stdio.h>

int main(int argc, char* argv){

    int f, g, h, i;
    f = g+h+i;

    return 0;
}

