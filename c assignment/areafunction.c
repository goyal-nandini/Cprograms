//write a program to find area of circle using function.
#include<stdio.h>

float area_circle(int r);

int main ()
{
    int r;
    printf("enter the radius of circle : ");
    scanf("%d",&r);
    printf("the area of circle is %f",area_circle(r));
    return 0;
}

float area_circle(int r)
{
    return 3.14 * r * r;
}