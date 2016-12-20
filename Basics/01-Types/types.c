#include <stdlib.h>
#include <stdio.h>

void y; // type "vide", peut contenir un peu tout ce que tu veux
short z; // entier sur 16 bits
int a; // entier sur 16 bits
long b; // entier sur 32 bits (long == long int , abréviation pour raccourcir)
uint64_t c; // uint64_t = unsigned long long int  ----> entier non signé sur 64 bits

// Définir un type :
typedef long long long int kiki; // kiki est un type d'entier sur 128 bits
kiki d; // a est une variable de type kiki

// Type des nombres réels (dits à virgule flottante)
float e;
double f;
long double g;

// Chaine de charactère/Tableaux
char h;
char i[200];

// Structures
struct j
{
	int k;
	char l;
}

// Enum : associer une chaine de charactère à un nombre de manière identifié
enum m
{
	N,
	O
};

bool p; // variable booléenne
