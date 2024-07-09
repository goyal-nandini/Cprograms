#include<stdio.h>
int main ()
{
    FILE *fptr;
    fptr = fopen("test.txt", "a");

    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));
    
    fputc('\n',fptr);
    fputc('k',fptr);
    fputc('a',fptr);
    fputc('r',fptr);
    fputc('t',fptr);
    fputc('i',fptr);
    fputc('k',fptr);
    fputc('\n',fptr);

    fclose(fptr);

    return 0;
}

