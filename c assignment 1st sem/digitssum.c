//write a program to find the sum of digits of number.
#include<stdio.h>
int main ()
{
  int sum = 0, num, rem;
  printf("enter any number : ");
  scanf("%d",&num);

  while(num>0)
  {
    rem = num % 10;
    sum = sum + rem;
    num = num / 10;
  }
  printf("the sum of digits of number is %d",sum);
  return 0;
}