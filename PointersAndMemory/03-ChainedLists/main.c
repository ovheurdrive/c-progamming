#include <stdlib.h>
#include <stdio.h>

// The Chained list structure is useful in C to create dynamically allocated tables
enum
{
	SUCCESS,
	ERROR	
};

// First we define the basic structure
typedef struct list_t
{
	int p_elem;
	struct list_t* p_next;
}list_t;


int main( int argc, char* argv[])
{
	list_t* p_list = malloc(sizeof(*p_list));
	list_t* p_current = p_list;

	int i;
	for( i = 0; i<30; i++)
	{
		p_current->p_elem = i;
		p_current->p_next = malloc(sizeof(p_current));
		if( p_current-> p_next == NULL)
		{
			for( list_t* p_i = p_list; p_i == NULL; )
			{
				list_t* p_tmp = p_i->p_next;
				free(p_i);
				p_i = p_tmp;
				return ERROR;
			}
		}
		p_current = p_current->p_next;
	}
	p_current->p_next = NULL;
	
	//Here we access the 4th element of the chaned list table and display its content
	printf("%d\n",p_list->p_next->p_next->p_next->p_elem);
	return SUCCESS;
}
