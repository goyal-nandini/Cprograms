// multiplication and transpose garbage value display ho rhai hai sometimes..!!

#include <stdio.h>
int i, j, r1, c1, r2, c2;
void printMat(int r, int c, int mat[r][c]);
void displayMat(int r, int c, int mat[r][c]);
void sumMat(int r, int c, int mat[r][c], int mat1[r][c], int mat2[r][c]);
void diffMat(int r, int c, int mat[r][c], int mat1[r][c], int mat2[r][c]);
void trans1Mat(int r, int c, int matT[r][c], int mat[r][c]); 
//void trans2Mat(int r, int c, int mat[r][c], int mat2[r][c]);
void mulMat(int r, int c, int mat[r][c], int mat1[r][c], int mat2[r][c]);

int main()
{
    char k;
    printf("Welcome to menu driven program! \nHere, you will find solutions to your matrix problems! \nJust enter your matrix and see the result!\n");

    do
    {
        printf("\nEnter the size of the matrix 1: ");
        scanf("%d%d", &r1, &c1);
        int mat1[r1][c1];
        printf("\nEnter the elements of the matrix: ");
        printMat(r1, c1, mat1);

        printf("\nEnter the size of the matrix 2: ");
        scanf("%d%d", &r2, &c2);
        int mat2[r2][c2];
        printf("\nEnter the elements of the matrix: ");
        printMat(r2, c2, mat2);

        printf("\nThe matrix 1 is : \n");
        displayMat(r1, c1, mat1);

        printf("\nThe matrix 2 is : \n");
        displayMat(r2, c2, mat2);

        printf("Enter choice: ");
        int choice;
        scanf("%d", &choice);
        int matAdd[r1][c1], matSub[r1][c1], mat1T[r1][c1], mat2T[r2][c2], matMult[r1][c2];
        switch (choice)
        {
        case 1:
            if (r1 == r2 && c1 == c2)
            {
                printf("\nAdding the two matrix.....");
                sumMat(r1, c1, matAdd, mat1, mat2);
                printf("\nBoth matrix added successfully!");
                printf("\nHere is the new matrix:\n");
                displayMat(r1, c1, matAdd);
            }
            else
            {
                printf("Matrix dimensions must match for addition and subtraction!");
                continue;
            }
            break;
        case 2:
            if (r1 == r2 && c1 == c2)
            {
                printf("\nSubtracting the two matrix.....");
                diffMat(r1, c1, matSub, mat1, mat2);
                printf("\nBoth matrix subtracted successfully!");
                printf("\nHere is the new matrix:\n");
                displayMat(r1, c1, matSub);
            }
            else
            {
                printf("Matrix dimensions must match for addition and subtraction!");
                continue;
            }
            break;
        case 3:
            printf("\nTranspose of the matrix 1 is:\n");
            trans1Mat(r1, c1, mat1T, mat1);
            printf("\nHere is the new matrix:\n");
            displayMat(c1, r1, mat1T);

            printf("\nTranspose of the matrix 2 is:\n");
            trans1Mat(r2, c2, mat2T, mat2);
            printf("\nHere is the new matrix:\n");
            displayMat(c2, r2, mat2T);

            break;
        case 4:
            // [r1][c1] * [r2][c2]  multiplication c1 == r2, new matrix is [r1][c2]
            if (c1 == r2)
            {
                printf("\nThe multiplication of the matrices is:\n");
                mulMat(r1, c2, matMult, mat1, mat2);
                printf("\nHere is the new matrix:\n");
                displayMat(r1, c2, matMult);
            }
            else
            {
                printf("Given matrices' size is not suitable for multiplication!\nChoose correct order of matrices!");
            }
            break;

        default:
            printf("Enter valid number!");
            break;
        }

        printf("\nThankyou for using this program. \nDo you want to perform another operation? \nPress c to continue or any other character to exit!");
        scanf(" %c", &k);

    } while (k == 'c');

    return 0;
}

void printMat(int r, int c, int mat[r][c])
{

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
    }
}
void displayMat(int r, int c, int mat[r][c])
{

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
}
void sumMat(int r, int c, int mat[r][c], int mat1[r][c], int mat2[r][c])
{

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            mat[i][j] = mat1[i][j] + mat2[i][j];
    }
}
void diffMat(int r, int c, int mat[r][c], int mat1[r][c], int mat2[r][c])
{

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            mat[i][j] = mat1[i][j] - mat2[i][j];
    }
}
void trans1Mat(int r, int c, int matT[r][c], int mat[r][c])
{
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            matT[i][j] = mat[j][i];
    }
}
void mulMat(int r, int c, int mat[r][c], int mat1[r][c], int mat2[r][c])
{
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            int sum = 0;
            for (int k = 0; k < j; k++)
            {
                sum = sum + mat1[i][k] * mat2[k][j];
                mat[i][j] = sum;
            }
        }
    }
}