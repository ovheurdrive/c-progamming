#include <stdlib.h>
#include <stdio.h>

/*
 * The basic structure of a finction declaration is the following
 *
 * <return type> <function name> ( <list of argument with their types> )
 *{
 *	<DWTFYW>
 *	return <variable of return type>
 *}
 *
 * The most frequent function is "main" which represents the core of the program and 
 * is executed by default when we run the code after compiling it.
 * If the content of the function is one line long, we can remove the braces.
 */

int main( int argc, char* argv[])
{
	printf("Hello World!");
	return 0;
}

