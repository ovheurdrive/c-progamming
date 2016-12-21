#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main( int argc, char* argv[])
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
     *  let's not forget that a string is like a list, or a array of 
     *  characters.
     *
     *  For example "Hello World!" can be translated as ['H','e','l','l','o',' ','w','o','r','l','d','\0']
     *  The '\0' is the null character and indicate the end of a string, like '\n' indicate a break line.
     *
     *  The common way to create a string in C is the following :
     *
     *  char str[string max length] = "our string";
     *
     *  As we saw in the "types" course, char[length] is a array of finite, known and static length
     *  But, if we want to create a string we don't know the lentgh, how do we do it ?
     *
     *  There are to ways to do it :
     *
     *  char str[] = "our string";
     *  or
     *  char* str = "our string";
     *
     *  The only difference is that in the first case it's a array, and in the second it's a pointer.
     *  In practice, there is no real difference between the two, but as you define here what we call
     *  a "literall", it's preferable to define is whit a pointer to char unless you want to modify it
     *  which, in the case of the pointer, will create an unknown behaviour.
     * 
     *  In case you want the content of the string to be written by an external source, you should use
     *  the pointer because you don't know the size, and you cannot define an empty array of unknown size
     *  As you're writing to a real pointer, you avoid buffer overflows.
     */

    char* a;
    char b[] = "Hello World!";
 
    scanf("%s",a);
    printf("a = %s and b = %s \n",a,b);

    // Let's see a list of common stiring functions :

#ifdef HELLO
    int strlen ( const char * str ) // return length of str
    char* strchr ( const char* str, char car ) // search the first occurence of car in str | strrchr does the same for th last occurence
    char* strstr ( const char* haystack, const char* neeedle ) // search the first occurence of the string needle in the string haystack
    char* strcat ( char* destination, const char* source ) // concatenate source at the end of destination + '\0'
    char* strncat ( char* desination, const char* source, size_t n ) // concatenate n bytes of source at the end of destination
    char* strcpy ( char* destination, const char* source ) //copy source at the adress of destination + '\0'
    char* strncpy ( char* destination, const char* source, size_t n ) // same as above but only the nth first bytes 
    int strcmp ( const char* str_1, const char* str_2 ) // compare str_1 to str_2 and return the number of identical bytes from the start (stops at the first different symbol )
    // For strcmp, there exists variants :
    //  strncmp that compare the n first bytes
    //  strcasecmp that compare regardless of the case of the characters
    //  strncasecmp ( you can infer what this does )


    // Same for bare memory chunks
    void memcpy( void* destination, const void* source, size_t n )
    void memmove( void* destination, const void* souce, size_t n )
    void memset( void* chunk, int character, size_t n ) 
    int memcmp( const void* chunk_1, const void* chunk_2, size_t n )
    void* memchr( const void* chunk, int character, size_t n )// memrchr is the same for the last occurence in the n first bytes
#endif
}
