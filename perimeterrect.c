#include<stdio.h>
int main ()
{
    float p,q;
    printf("enter length");
    scanf("%f",&p);

    printf("enter breath");
    scanf("%f",&q);

    int perimeter = 2*(p+q);
    printf("perimter of rectangle is %d",perimeter);

    return 0;

    }
