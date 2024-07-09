// use of goto keyword without using any loop.
#include<stdio.h>
int main ()
{ 
    int num,rem,rev = 0;
    printf("enter the number : ");
    scanf("%d",&num);
    nandini:
      rem = num % 10;
      rev = (rev*10) + rem;
      num = num / 10;
    if (num != 0)
    {
        goto nandini;       //goto statement is used to send the program control flow to any place in the program.
    }
    printf("reverse of number :%d",rev);
    return 0;
}
