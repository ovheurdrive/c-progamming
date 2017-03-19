#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	int a;
	scanf("%d", &a); // take a formated value for a in the standard input (stdin) 
	printf("%d\n", a); // put a formated string with values in the standard output (stdout)
	return 0;
}

/*
 * There exists other standard basics I/O functions based on the same principle :
 * sprintf, snprintf, asprintf, vasprintf, vprintf, vsprintf, fprintf, vfprintf. 	
 * sscanf, fscanf , getchar, gets, putchar, puts.
 */
