#include<stdio.h>
int main ()
{
    float F;
     printf("write the temperature in F ");
     scanf("%f",&F);

     float C = 0.55*(F-32);
     // output showing 0.000 when 5/9 is multiplied why ?? and C 5*(F-32)/9 is showing correct..

     printf("temperature in C after conversion is :%f",C);

}