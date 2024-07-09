#include<stdio.h>
int main ()
{
    // calculate sum of all numbers between 5 amd 50 (excluding 5 & 50)
    int sum = 0;

    for (int i=6; i<50; i++)
    {
        sum = sum + i;
        //printf("sum is %d \n",sum);  TRY IT ,IT WOULD GIVE DIFFRENT RESULT!!  DONT KNOW THE REASON.
        // MAY BE iska reason loop ho islie 50 times print hua hoo....

    }
     printf("sum is %d \n",sum);

}