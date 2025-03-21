// write a program to find factorial of a number using recursion.
#include<stdio.h>

int fact(int n);
int main ()
{  
    int num;
    printf("enter the number : ");
    scanf("%d",&num);

    int result = fact(num);
    printf("the result is %d",result);
    return 0;
}

int fact(int n)
{ 
    if (n == 0)
    return 1;

    int factNm1 = fact(n-1);
    int factN = factNm1 * n;
    return factN;
}