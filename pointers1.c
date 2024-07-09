// write a program in c to find the maximum number between two numbers using pointers.
#include<stdio.h>
int large_nums(int*,int*);
int main (int n, int m)
{   
   printf("enter any two numbers:\n");
   scanf("%d %d", &n,&m);
   int result = large_nums(&n,&m);
   printf("%d", result);
   return 0;
}
int large_nums(int *p, int *q)
{
    int large = *p > *q ? *p : *q;  // ternary operator.
    return large;
}

