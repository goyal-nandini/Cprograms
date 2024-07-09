// print table of a number input by the user.
#include <stdio.h>
int main ()
{
    int n ;
    printf("enter any number : \n");
    scanf("%d",&n);

    for (int i=0; i <=10; i++)
    {   
        int a; 
        a = n*i;
        printf("%d * %d = %d \n",n,i,a);
    }
    return 0;
}