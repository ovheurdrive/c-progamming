#include <stdlib.h>
#include <stdio.h>

int notPointerFunction(int u) // function taking an integer as argument
{
    u = 2*u;
    return 0;
}

int pointerFunction(int* u) // function taking a pointer as argument
{
    *u = 2*(*u);
    return 0;
} 
int main(int argc, char* argv[])
{
    int* p_i;
    *p_i = 1;
    pointerFunction(p_i); // after this call, the value pointed by p_i has been updated
    printf("valeur pointée par p_i = %d\n", *p_i);

    int i = 1;
    notPointerFunction(i); // whereas after this one, i is still the same value
    printf("valeur de i = %d\n",i);
	// i wasn't updated like p_i because i inside of notPointerFunction was a copy of the real i
	// and only the copy was updated. The pointer however, even if he only contained a copy of
	// the adress pointed, this adress still was the one of the real variable, so we updated the real variable.
}

