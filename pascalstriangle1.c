//logic2 for the same !!
  #include <stdio.h>

void comb(int,int);

int fact(int);

int main()
{
    int n;
    printf("Height: ");
    scanf("%d",&n);
    for(int row  = 1; row <= n; row++)
    {
        if( row == 1)
            printf(" ");
        for(int j = 0;j < n - row; j++)
        {
            printf(" ");
        }
        for (int k = 0;k < row + 1;k++)
        {
            if ( row != 1)
                comb(row,k);
            else
            {
                printf("1");
                break;
            }
        }
        printf("\n");
    }
    return 0;
}

void comb(int a,int b)
{
    printf("%d ",fact(a)/(fact(a-b)*fact(b)));
}

int fact(int num)
{
    if(num > 1)
        return num * fact(num-1);
    else
        return 1;
}