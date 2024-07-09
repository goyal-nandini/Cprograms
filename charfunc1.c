// use of some interesting character functions
// isalpha()
//isdigit()
//ispunct()
#include<stdio.h>
#include<ctype.h>
void main()
{
    char character;
    printf("press any key:");
    character = getchar();
    if(isalpha(character)>0)
    puts("the character is a letter/alphabet");
    else 
    if (isdigit(character)>0)
    puts("the character is digit");
    else
    puts("the character is not alphanumeric");

    char c;                 // this whole program is not executing completely ie not asking for c why ??
    printf("enter any mark\n");
    c = getchar();
    if(ispunct(c)>0)
    puts("punctuation mark");
    else
    puts("not a punctuation mark");
}