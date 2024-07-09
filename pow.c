// write a c program to input numbers a and b compute the value of a raised to the power of b.
// test your skill ansi c
#include<stdio.h>
#include<math.h>
int main ()
{
    int a,b;
    printf("enter two number \n");
    scanf("%d%d",&a,&b);
    int power = pow(a,b);
    printf("%d",power);
    }