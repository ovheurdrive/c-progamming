#include <stdlib.h>
#include <stdio.h>
#include "function.h"

int main(int argc, char* argv[])
{
    int a = Multiplication(3,4);
    int b = square(a);
    printf("%d\n",b);
    return 0;
}
