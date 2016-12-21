#include <stdlib.h>
#include <stdio.h>

int notPointerFunction(int u)
{
    u = 2*u;
    return 0;
}

int* pointerFunction(int* u)
{
    *u = 2*(*u);
    return 0;
} 
int main(int argc, char* argv[])
{
    int* p_i;
    *p_i = 1;
    pointerFunction(p_i);
    printf("valeur pointée par p_i = %d\n", *p_i);

    int i = 1;
    notPointerFunction(i);
    printf("valeur de i = %d\n",i);
}

