#include<stdio.h>
int main ()
{
    int a = 0,b = 1,N;
    printf("enter N : ");
    scanf("%d",&N);
    
    printf("%d \n",a);

    while(b < N)
    {
        printf("%d",b);
        int temp = a + b;
        a = b;
        b = temp;
        printf("\n");    // ye sirf next line k lie use hua hai.
    }
        printf("\n");    //no need.
 return 0;
}