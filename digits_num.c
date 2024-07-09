//find how many digits are there in a number.
#include<stdio.h>
int main()
{
    int num, count = 0;
    printf("enter any number : \n");
    scanf("%d", &num);
   
  while(num > 0)
    {
    //  count++;
     num = num / 10;
     count++;
    }
    printf("the number of digits in a number is : %d", count);
    return 0;
}