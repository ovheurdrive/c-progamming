#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	int a;
	scanf("%d", &a); // permet de prendre la valeur de a dans l'entrée standard (stdin) de manière formatée
	printf("%d\n", a); // affiche la valeur de a dans la sortie standard (stdout) de manière formatée
	return 0;
}

/*
 * There exists other standard basics I/O functions based on the same principle :
 * sprintf, snprintf, asprintf, vasprintf, vprintf, vsprinf, fprintf, vfprintf. 	
 * sscanf, fscanf , getchar, gets, putchar, puts.
 */
