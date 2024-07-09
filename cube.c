#include<stdio.h>
int main ()
// cube of number
{
    float p;

    printf("enter the number");
    scanf("%f",&p);

    float cube = p*p*p;

    printf("cube of given number is:%f",cube);
    return 0;
}