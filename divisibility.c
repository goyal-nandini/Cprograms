#include<stdio.h>
int main ()
// divisibility by 2 or check whether a number is even or odd.
/* odd/not divisible by 2 --> 0
   even/divisible by 2 --> 1   */
{
  int num;
  printf("enter a number");
  scanf("%d",&num);

  printf("%d",num %2 == 0);
  }