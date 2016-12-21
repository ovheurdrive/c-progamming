#include <stdlib.h>
#include <stdio.h>
#define CHUNK 2048

int file_open(const char* filename)
{
	FILE* p_file = fopen(filename,"r");
	char buff[CHUNK];
	size_t size_read;
	if(p_file == NULL)
	{
		printf("Error opening file");
		fclose(p_file);
	}
	else
	{
		while( size_read = fread(buff,1,sizeof(buff),p_file) > 0)
			printf("%s",buff);
		fclose(p_file);
	}
	return 0;
}
int main(int argc, char* argv[])
{
	int a;
	scanf("%d", &a); // permet de prendre la valeur de a dans l'entrée standard (stdin) de manière formatée
	printf("%d\n", a); // affiche la valeur de a dans la sortie standard (stdout) de manière formatée
	
	file_open("file_to_open.txt");
	
	return 0;

}
