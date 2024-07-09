//w a p to print elements of an array in reverse order.
// dated 24 jan 2024 only heading, tomorrow i've chemistry practical so i guess on 25 jan 2024.
#include<stdio.h>
void main ()
{
   int arr[5], n;
   printf("enter the number of elements of array : ");
   scanf("%d",&n);
   printf("enter the elements of array\n");
   for(int i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
   }
    printf("the elements of array are : \n");
   for(int i = n-1; i >= 0; i--)
   {
      printf("%d\t", arr[i]);
   }
   
}