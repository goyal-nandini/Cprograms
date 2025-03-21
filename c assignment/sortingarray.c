// write a program to sort an array.
#include<stdio.h>
int main ()
{
   int list[50], i, j, n, temp;
   printf("enter the size of list : ");
   scanf("%d",&n);
   printf("enter the list of numbers : \n");
   for(i = 0; i < n; i++)
   {
    scanf("%d",&list[i]);
   }
   for(i = 0; i < n; i++)
   {
    for(j = 0; j < n; j++)
    {
        if(list[i] > list[j])
        {
            temp = list[i];
            list[i] = list[j];
            list[j] = temp;
        }
    }
   }
   printf("The sorted list is : \n");
   for(i = 0; i < n; i++)
   {
    printf("%d\n",list[i]);
   }
   return 0;
}