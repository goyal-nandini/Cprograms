// funtions
//question is --> write two functions - one to print "hello" & second to print "good bye".
#include<stdio.h>
// declaration/prototype
void printHello();
void printGoodbye();     // pata ni printGOODBYE pr three dots aa rahi thi print k neech pata ni ku ??

//function call
int main ()
{
    printHello();
    printGoodbye();
return 0 ;
}

//funtion definition
void printHello()
{
    printf("hello \n");
}
void printGoodbye()
{
    printf("goodbye");
}
