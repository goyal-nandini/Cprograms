// write a program to find square root of a number
#include<stdio.h>
#include<math.h>
float squareroot(float);
int main ()
{
    float result = squareroot(2.0);
    printf("the square root of number is :%f",result);
    return 0;
}
float squareroot(float num)
{
    return pow(num,0.5);  // pow(num,1/2) wrong answer why ??
}