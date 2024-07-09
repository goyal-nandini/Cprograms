#include<stdio.h>
int main ()
{
    int r;

    printf("enter the radius of given circle\n");
    scanf("%d",&r);

    float area = 3.14*r*r;
    float circum = 2*3.14*r;

    printf("area of given circle is :%f\n",area);
    printf("circumference of given circle is :%f\n",circum);

    return 0;
    
}