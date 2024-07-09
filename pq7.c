// program to find if a character entered by user is upper case or not.

#include <stdio.h>
int main ()
{
    char c;

    printf("ENTER ANY CHARACTER \n");
    scanf ("%c",&c);

    if ( c>='A' && c<='Z' ){
        printf("character is in uppercase \n");
    } else if (c >= 'a' && c <= 'z') {
        printf("character is not in upper case \n");
    } else {
        printf("character is not from english letter. ");
    }
    return 0;
}