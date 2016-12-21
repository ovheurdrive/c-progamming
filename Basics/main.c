#include <stdlib.h>
#include <stdio.h>

int main( int argc, char* argv[])
{
	int choice;
	printf("Write a number between 1 and 5 :");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1: printf("you chose the number one\n");
		break;

		case 2:printf("you chose the number two\n");
		break;

		case 3:printf("you chose the number three\n");
		break;

		case 4:printf("you chose the number four\n");			
		break;

		case 5:printf("you chose the number five\n");
		break;

		default:printf("RTFM you f**kin' dumbass\n");
		break;
	}

	if( 1 <= 2 )
		printf("OMG 1 is inferior to two O_Oi\n");

	
	for( int i = 0; i < 3; i++)
	{
		printf("You passed %d times in the loop\n", i+1);
	}

	int a = 0;
	while( a<2 )
	{
		printf("ravioli ravioli, give me the formuoli\n");
		a++;
	}
	
	int b = 0;
	do
	{
		printf("mom's spaghetti\n");
		b++;
	}while( b<3 );
}
