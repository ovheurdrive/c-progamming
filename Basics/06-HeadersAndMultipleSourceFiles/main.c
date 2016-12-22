#include <stdlib.h>
#include <stdio.h>
#include "function.h"

int main(int argc, char* argv[])
{
    int a = Multiplication(3,4); // We call multiplication from function.c by the header function.h
    int b = square(a); //  We call the function square defined inline in the function.h
    printf("%d\n",b);
    return 0;
}
