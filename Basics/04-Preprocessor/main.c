#include <stdlib.h>
#include <stdio.h>


#define SUCCESS 0
#define ERROR 1

#define ADD(x,y) ((x) + (y)) //define a macro

// If we comment the line defining the macro ADD, this will compile the second chunk of code
#ifdef ADD
int main( int argc, char* argv[])
{
	printf("%d\n",ADD(3,4));
	return SUCCESS;
}
#else
int main( int argc, char* argv[])
{
	printf("error of macro definition\n");
	return ERROR;
}
#endif
