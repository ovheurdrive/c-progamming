#include <stdlib.h>
#include <stdio.h>

// In C, we can define function pointers , which are basically pointers containing the adress of the
// function in the stack in order to call it
int max(int a, int b)
{
	if( a < b)
			return b;

	return a;
}


int main( int argc, char* argv[])
{
	int(*functionPtr)(int,int) = &max;
	printf("The max is %d\n", functionPtr(3,5));
}
