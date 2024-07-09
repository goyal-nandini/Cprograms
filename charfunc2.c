#include<stdio.h>
#include<ctype.h>
void main()
{
    // reading and writing of SINGLE alphabets in reverse cast
    //these are character functions not a word function (me) ie to convert word from uppercase to lowercase.
    char alphabet;
    puts("enter an alphabet");
    alphabet = getchar(); 
    if (islower(alphabet))
    putchar(toupper(alphabet));
    else
    putchar(tolower(alphabet));
}