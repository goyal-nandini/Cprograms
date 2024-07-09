#include<stdio.h>
int main ()
{
    // print factorial of a number n.
    int n;
    printf("enter n \n");
    scanf("%d",&n);
    
        int factorial = 1;        

    for (int i=n; i>=1; i--)
    {
        factorial = factorial * i;     // similar to find sum of n numbers but make sure to start wih 1 in multiply.
    }
    printf("factorial of %d is %d",n,factorial);

}
// it is not giving factorial of 50 output is 0 . i.e. it would calculate factorials of short numbers.
