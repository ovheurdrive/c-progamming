#include <stdlib.h>
#include <stdio.h>

enum // We create enum tu make the code clearer
{
    SUCCESS,
    ERROR
};

typedef struct // We define a complex type containing an int, a float and a string.
{
    int i;
    float f;
    char* s;
}table_t;

// Two functions to work on an object of table_t type
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

int main(int argc, char* argv[])
{
    table_t* table = NULL;
    table = calloc(sizeof(*table),1); // calloc = allocates memory and sets it to 0
	if( table == NULL) // This code is here to handle memory allocation error.
			return ERROR;

	/*
	 * Function to allocate memory :
	 * ptr = malloc(size) : ptr is a pointer to an allocated chunk of size "size"
	 * ptr = calloc(size,1) : same but memory is set to zero
	 * new_ptr = realloc(old_ptr,new_size) : reallocate the content of old_ptr into new_ptr with an updated size (truncate if lower to old_ptr size)
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
