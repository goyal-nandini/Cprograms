//write a program to multiply two square matrix.
#include<stdio.h>
int main ()
{
        int m1[3][3], m2[3][3], multiply[3][3], i, j, k, sum;
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
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            sum = 0;
            for(k = 0; k < 3; k++)
            {
                sum = sum + m1[i][k] * m2[k][j];
            }
            multiply[i][j] = sum;
        }
    }
     printf("The resultant matrix after multiplication is :\n");
     for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t",multiply[i][j]);
        }
        printf("\n");
    }
    return 0;
}