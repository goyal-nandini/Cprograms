//today 18 november 2023 i have tried fibonacci series in three differnt ways without using recusion.lets see
//way 1
#include<stdio.h>
int main ()
{
    int a = 0,b = 1,c,temp,N,i;
    printf("enter the numbers of fibonacci terms you want to enter");
    scanf("%d",&N);
    for (i=1; i<=N; i++) 
    {
        if (i==1)
        {
            c = 0;
        }
        else if (i==2 || i==3)
        {
            c = 1;
        }
        else
        {
            temp = a;
            a = b;
            b = c;
            c = a + b;
        }
    }
    if (i == N)
    {
        printf("%d \n",c);
    }
    else 
    {
        printf("%d \n",c);
    }
    return 0;
}