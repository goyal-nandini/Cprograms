// to print prime numbers in a range.
#include<stdio.h>
int main ()
{
  int i,j,count = 0, start, end ;
  printf("enter first number to start :\n");
  scanf("%d",&start);

  printf("enter second number to end :\n");
  scanf("%d",&end);
  
  printf("prime numbers in a given range are: \n");
  for (i=start; i<=end; i++)
  {
    for (j=2; j<i; j++)
    {
      if (i%j == 0)
      {
        count ++;
        break;
      }
    }
    
      if (count == 0)
      {
        //printf("the prime numbers from %d to %d are : %d \n",start,end,i);
        printf("%d \n",i);
      }
      else 
      //printf("you have entered wrong/invalid entry.\n");  // printing two times whats the reason dont know....!!
      count = 0;
  }
return 0;
}