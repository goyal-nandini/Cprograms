// funtions
//question is --> write a function that prints "namanste" if user is indian and  print "bonjour" if user is french.
#include<stdio.h>
void printnamaste();
void printbonjour();

int main ()
{   
    char ch;
    printf("enter f if you are french and i if you are indian \n");
    scanf("%c",&ch);
    if (ch =='i')
    {
       printnamaste();
    }
    else
    {
        printbonjour();
    }
    //printnamaste();    TRY IT YOU WILL CAME TO KNOW THE PROPERTY OF FUNCTIONS i.e. a function can be called directly or indirectly from main function.

return 0;
}
void printnamaste()
{   
    printf("namaste \n");
   // printbonjour();    TRY IT YOU WILL CAME TO KNOW THE PROPERTY OF FUNCTIONS i.e. a function can be called directly or indirectly from main function.
}
void printbonjour()
{
    printf("bonjour \n");
}