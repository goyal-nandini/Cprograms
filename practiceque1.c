#include<stdio.h>
int main ()
{
    // print 1 or 0 if a number is greater then 9 and less than 100
    // print any two digit number 

    int num;
    printf("enter a number");
    scanf("%d",&num);

    printf("%d",num>9 && num<100);
    }