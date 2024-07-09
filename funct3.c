// question 25 with modifications be like 
// use library functions to calculate the square of a number given by user.
#include <stdio.h>
#include <math.h> 

float squarecalculate(float n);

int main (float n)
{ 
    //float n;
    printf("enter any number \n");
    scanf("%f",&n);

    squarecalculate(n);

    return 0;
}

float squarecalculate(float n)
{    
    printf("the result is %f",pow(n,2));
    //return 0 ;                            // whats the importance of this return ....DOESNT CREATE ANY EFFECT ON RESULT.
}