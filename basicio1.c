// starting series to learn basic input nad output operations.
// putchar() getchar()  putch()
#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;            // tried with int no difference when letters are typed   why ??
    printf("enter characters:");
    ch = getchar();  // read the single character
                    // can type any number of characters till you press enter but prints only one character.
    printf("the character you typed is:");  
    putch('\n');    // the curser moves to next line    
    putch(ch);        // write the single character
    putch('\n');      // cannot accpet more than one argument in parenthesis.(me)
       
}
/*
putchar() and putch() same use only difference is the header file 
putch() needs console file
putchar() needs standard file
*/