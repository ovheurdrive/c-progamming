#include <stdlib.h>
#include <stdio.h>


#define SUCCESS 0
#define ERROR 1

#define ADD(x,y) ((x) + (y)) //define a macro

#ifdef ADD
int main( char* argv, int argc)
{
	printf("%d\n",ADD(3,4));
	return 0;
}
#else
int main( char* argv, int argc)
{
	printf("error of macro definition\n");
	return 0;
}
#endif
