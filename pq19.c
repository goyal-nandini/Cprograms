// to print prime numbers from 1 to 50.
#include<stdio.h>
int main ()
{
  //int i,j,count = 0;        ##ek doubt ---> int count ko hum line 22 m likhte hai then error shown up...WHY ..
                                // for loop aur if condition m square bracket m keywords ka different use ??
                                //1 ko prime show kr rh hai ...
  int count ;
  printf("the prime numbers from 1 to 50 are :\n");

  for (int i=1; i<=50; i++)
  {
    for (int j=2; j<i; j++)
    {
      if (i%j == 0)
      {
        count ++;
        break;
      }
    }
    
      if (count == 0)    // if(count == 0 && i!=1) IS ALSO VALID, CAN BE USED.   BUT if(count == 0,i!=1) is not valid, even try it.
      printf(" %d \n",i);
     //printf("the prime numbers from 1 to 50 are : %d \n",i); try it....
       int count = 0;
  } 
return 0;
}