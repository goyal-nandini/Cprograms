// write a program to find reverse of digits of number.
#include<stdio.h>
int main ()
{
  int rev = 0, num, rem;
  printf("enter any number : ");
  scanf("%d",&num);

  while(num>0)
  {
    rem = num % 10;
    rev = (rev*10) + rem;
    num = num / 10;
  }
  printf("the reverse of digits of number is %d",rev);
  return 0;
}