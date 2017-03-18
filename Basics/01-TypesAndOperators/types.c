#include <stdlib.h>
#include <stdio.h>

void y; // "void" type is used to store bare chunk of memory
short z; // 16 bits integer
int a; // 16 bits integer
long b; // 32 bits integer (long == long int)
uint64_t c; // uint64_t = unsigned long long int  ----> 64 bits

// Define a type
typedef long long long int kiki; // kiki is a 128 bits integer
kiki d; // d is of type kiki

// Real numbers
float e;
double f;
long double g;

// String/Character/Array
char h;
int i[200];

// Structures
struct j
{
	int k;
	char l;
}

// Enum : Used to associate a string to a number
enum
{
	N, // Equivalent to write N=0,
	O, // Equivalent to write O=1,
	P // Equivalnt to write P=2
};

bool q; // boolean variable

// There exists other special types called container types :
// - static : on a variable, it makes it defined globally. On a function it makes it non callable outside of the file where it's defined
// - extern : makes a function global
// - const : read only mode
// - inline : used to define function in headers
