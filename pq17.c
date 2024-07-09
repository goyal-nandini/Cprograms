#include<stdio.h>
int main ()
{
    // print reverse of the table for a number n.
    int n;
    printf("enter n \n");
    scanf("%d",&n);

    for (int i=10; i>=0; i--)
    {
        int a;
        a = n*i;
        printf("%d * %d = %d \n",n,i,a);

    } 
}