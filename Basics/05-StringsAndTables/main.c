#include <stdlib.h>
#include <stdio.h>

int main( char* argv, int argc)
{
    /*
     *  First, we have to ask ourselves, what is a string?
     *  It's several characters following each other to create 
     *  a logical entity.
     *  A string has a length, and each string "objects" is unique.
     *
     *  So, how does a program recognize a string?
     *  A certain specific type is used to create strings : char
     *
     *  But char is the type for characters you would say, indeed, but
     *  let's not forget that a string is like a list, or a table of 
     *  characters.
     *
     *  For example "Hello World!" can be translated as ['H','e','l','l','o',' ','w','o','r','l','d','\0']
     *  The '\0' is the null character and indicate the end of a string, like '\n' indicate a break line.
     *
     *  The common way to create a string in C is the following :
     *
     *  char str[string max length] = "our string";
     *
     *  As we saw in the "types" course, char[length] is a table of finite, known and static length
     *  But, if we want to create a string we don't know the lentgh, how do we do it ?
     *
     *  There are to ways to do it :
     *
     *  char str[] = "our string";
     *  or
     *  char* str = "our string";
     *
     *  The only difference is that in the first case it's a table, and in the second it's a pointer.
     *  In practice, there is no real difference between the two, but as you define here what we call
     *  a "literall", it's preferable to define is whit a pointer to char unless you want to modify it
     *  which, in the case of the pointer, will create and unknown behaviour.
     * 
     *  In case you want the content of the string to be written by an external source, you should use
     *  the pointer because you don't know the size, and you cannot define an empty array of unknown size
     *  As you're writing to a real pointer, you avoid buffer overflows.
     */

    char* a;
    char b[] = "Hello World!";

    scanf("%s",a);

    printf("a = %s and b = %s \n",a,b);
}
