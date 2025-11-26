// write a program to print transpose of matrix.
#include<stdio.h>
int main ()
{
    int m[2][3], i, j;
    printf("enter matrix : \n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    printf("Your matrix is : \n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of matrix is : \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d\t",m[j][i]);
        }
        printf("\n");
    }
return 0;
}