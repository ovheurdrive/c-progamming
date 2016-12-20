#include <stdlib.h>
#include <stdio.h>

enum
{
    SUCCESS,
    ERROR
};

typedef struct
{
    int i;
    float f;
    char* s;
}table_t;

int filling(table_t* table)
{
    table->i = 2;
    table->f = 2.3;
    table->s = "Hello World!";
    return SUCCESS;
}

int empty(table_t* table)
{
    table->i = 0;
    table->f = 0;
    table->s = NULL;
    return SUCCESS;
}

int main(char* argv, int argc)
{
    table_t* table = NULL;
    table = calloc(sizeof(*table),1); // calloc = allocate mémory and set it to 0
	/*
	 * Function to allocate memory :
	 * ptr = malloc(size) : ptr is a pointer to an allocated chunk of size "size"
	 * ptr = calloc(size,1) : same but memory is set to zero
	 * free(ptr) : the memory allocated at ptr is freed (unallocated)
	 *
	 * There are other functions that allocate memory :
	 * asprintf, strdup ... but this is the basics.
	 */ 

    filling(table);
    printf("%d, %f, %s\n", table->i, table->f, table->s); 
    empty(table);
    printf("%d, %f, %s\n", table->i, table->f, table->s);
    return SUCCESS;
}
