// write a program to find largest of three numbers.
#include<stdio.h>
int main ()
{
    int a,b,c,big;
    printf("enter three numbers :\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c)
    {
        big = a;
        printf("the largest of three numbers is %d",big);
    }
    if(b>a && b>c)
    {
        big = b;
        printf("the largest of three numbers is %d",big);
    }
    else 
    {
        big = c;

        printf("the largest of three numbers is %d",big);
    }
    return 0;
}