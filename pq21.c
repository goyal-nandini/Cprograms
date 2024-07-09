// to check whether the number is a prime number or composite number.
#include<stdio.h>
int main ()
{  
    int number, count = 0;
   printf("enter any number to be checked \n");    //  ek doubt--> \n line 6 aur 7 dono m lagane se dekho two numbers hum enter kr skte hai esa ku ??
   scanf("%d",&number);                            // ism 0 1 -12 bhi prime show kr raha hai...check it tell me reason

   for (int i=2; i<number; i++)
   {
      if (number%i == 0)
     {
        count ++;
        break;
     }
   }  
     if (count == 0)
     {
        printf("the entered number %d is prime number. \n",number);
     }
     else 
     {
        printf("the number %d is composite number. \n",number);
     }
     count = 0;  
   
}