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

/*
 * There are number of commands usable in preprocessor.
 * Here is an exhaustive list :
 * - include : speaks for itself , allow to include external source code files
 * - define : aims at defining constants or macros. to make multilines macros, you add '\' at the end of line, allow switch case.
 * - ifdef/ifndef/if..else/elif..endif : to do conditioned compiling
 * - error : error case to stop compiling
 * - pragma : used to include compiler directives
 */
