// write a function to find sum of digits of a number.
#include <stdio.h>
float sumDIGITS(int num);
int main (int sum, int n)
{  
    printf("enter any number");
    scanf("%d", &n);
    float result = sumDIGITS(n);
    printf("the sum of digits is %f\n", result);
    printf("the sum of digits is %d", sum);  // doubt, yrr sum ka sirf first digit print ho raha hai ....
    return 0;
}

float sumDIGITS(int num)
{   
    float sum = 0, rem;
    while(num > 0)
    {
       rem = num % 10;
       sum = sum + rem;
       num = num / 10;
    }
return sum;
}