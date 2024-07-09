// question be like 
// use library functions to calculate the square of a number given by user.
#include <stdio.h>

float squarecalculate(float n);

int main (float n)
{ 
    //float n;
    printf("enter any number \n");
    scanf("%f",&n);

    float result = squarecalculate(n);
    printf("the result is %f \n",result);

    return 0;
}

float squarecalculate(float n)
{    
    return n*n;
}