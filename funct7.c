//write a function to print hot and cold depending on the temperature user enters.
#include<stdio.h>
void weatherdetection(float);
void main (float temp)
{
    printf("enter the temperature(in celcius): ");
    scanf("%f",&temp);
    weatherdetection(temp);
}
void weatherdetection(float temp)
{
    if(temp >= 30)
    {
        printf("hot");
    }
    else if(temp < 30)
    {
        printf("cold");
    }
}