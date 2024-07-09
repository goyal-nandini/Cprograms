//getche() getch()
#include<stdio.h>
#include<conio.h>
void main ()
{
   char N,M;
   puts("enter any character:");
   N = getch();
   printf("N is %c\n",N);

  // N = getch();     // its not showing any typed character 
   
   // great its working 
   // it work like this - the key you have pressed would not displayed on screen ie what user has entered is not shown
   //not even wait for enter to be pressed not even more than one character
    puts("enter any character:");
    M = getche();   // only difference is user entered entry is shown on screen.
    putchar('\n');
    printf("M is %c",M);
}
// now perfect !!