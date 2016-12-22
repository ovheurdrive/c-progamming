#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// You can cast a variable into another type in C, this is useful in many cases.

int main( int argc, char* argv[])
{
	int a;
	char* s = "Hello World!";
	a = (int)*s; // There, a is the ascii value of wath is pointed by s : the first character of the literal "Hello World", 'H'
	printf("We have : %d\n",a);

	// Most of the time, the cast type is (void) tu use bare memory functions, and then we cat again in the base type of the variable:
	//
	char* b = "A";
	if( memchr( (const void*)b , 65 , 1) != NULL )
		printf("b is equal to 65 which is ascii value for 'A'\n");
}
