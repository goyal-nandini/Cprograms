//write a program to find the sum of matrices.
#include<stdio.h>
int main ()
{
    int m1[3][3], m2[3][3], sum[3][3], i, j;
    printf("enter first matrix : \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("enter second matrix : \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    printf("your first matrix is :\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t",m1[i][j]);
        }
        printf("\n");
    }
    printf("your second matrix is :\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t",m2[i][j]);
        }
        printf("\n");
    }
    printf("The resultant matrix is :\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            sum[i][j] = m1[i][j] + m2[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
return 0;
}