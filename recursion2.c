// print the sum of n natural numbers 
#include<stdio.h>

int sumN(int n);

int main ()
{
    printf("sum is %d\n",sumN(5));    // here the function is called from main funtion.
    return 0;
}
int sumN(int n)
{ 
    if (n == 1)
   {
      return 1;
   }
    int sumNm1/*variable*/ = sumN(n - 1);     // sum of 1 to n-1 // here sumN is calling itself in function sumN.
    int sumN/*variable*/ = sumNm1 + n;
    return sumN/*variable not a function*/;
}
