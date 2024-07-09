// to print prime numbers and composite numbers.
//some modifications

#include<stdio.h>
int main ()
{
int count ;
  printf("between 1 to 70 :\n");
  printf("prime numbers \t\t composite numbers \n");

  for (int i=1; i<=70; i++)
  {
    for (int j=2; j<i; j++)
    {
      if (i%j == 0)
      {
        count ++;
        break;
      }
    }
    if(count ==0)
    printf("%d \n",i);    // \t\t\t lagan se text side m hota hai aur line 22 m lagan se result oppsite milega 
    else                  // line 22 m \n lagan se hr ek prime numbers k baad is line gap aata hai.
    printf("\t\t\t %d",i);
    count = 0;
    printf("\n");
  } 
  return 0;
}