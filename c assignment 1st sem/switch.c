// write a program to implememting the all arithmetic operators using switch.
#include<stdio.h>
int main ()
{
   float num1, num2, result;
   int choice;
   do
   {
      printf("Enter Your Choice(1-4) (i.e. 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division): ");
      scanf("%d", &choice);
      if(choice>=1 && choice<=4)
      {
         printf("\nEnter any two Numbers: \n");
         scanf("%f%f", &num1, &num2);
      }
      
      switch(choice)
      {
         case 1:
            result = num1+num2;
            printf("\nResult = %f", result);
            break;
         case 2:
            result = num1-num2;
            printf("\nResult = %f", result);
            break;
         case 3:
            result = num1*num2;
            printf("\nResult = %f", result);
            break;
         case 4:
            result = num1/num2;
            printf("\nResult = %f", result);
            break;
         default:
            printf("\nWrong Choice!");
            break;
      }
   }
   while(choice > 4);
return 0;    
}