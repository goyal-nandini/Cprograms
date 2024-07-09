// print all the odd numbers from 5 to 50.
#include<stdio.h>
int main ()
{
    for (int i=5; i<=50; i++)
    {
        if (i % 2 !=0)    // if (i % 2 ==0)    {ye use kare agar hum continue statement ka use krr rh hai....}
        {
           // continue;   
           printf("%d \n",i);

        }
    //printf("%d \n",i);
    }
}