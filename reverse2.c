// reverse using for loop 
//today i learned a mistake : DON'T REDECLARE ANY VARIABLE.
#include<stdio.h>
int main()
{
    int num,rev,rem;
    printf("enter the number : ");
    scanf("%d",&num);

    for (rev = 0; num != 0; num = num/10)
    {
         rem = num % 10;
         rev = (rev*10)+rem;    
    }
     printf("reverse of number :%d",rev);

    return 0;
}