// to print average of n numbers
//use of #define 

#define N 10
#include<stdio.h>

void main ()
{
    int count;
    float sum,average,number;
    sum = 0;
    count = 0;

    while(count < N)
    {
        scanf("%f",&number);
        sum = sum + number;
        count = count + 1;
    }
    average = sum/N;
    printf("\tN = %d\n\tsum = %f\n",N,sum);
    printf("\taverage = %f",average);
    return;
}