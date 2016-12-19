#include <stdlib.h>
#include <stdio.h>

int main(char* argv, int argc)
{
	printf("Hello World!");
	return 0;
}

int a; // entier sur 16 bits
long b; // entier sur 32 bits
uint64_t c; // uint64_t = unsigned long long  ----> entier non signé sur 64 bits

// Définir un type :
typedef long long long int kiki; // kiki est un type d'entier sur 128 bits
kiki a; // a est une variable de type kiki

