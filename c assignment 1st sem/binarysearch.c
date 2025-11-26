// write a program for binary search.
#include<stdio.h>
int main ()
{
    int n, i, list[50], data, first, last, middle;
    printf("enter the size of list : ");
    scanf("%d",&n);
    
    printf("enter %d elements (in ascending order/sorted manner) :\n ",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&list[i]);
    }
    printf("enter element you want to search : ");
    scanf("%d",&data);
    first = 0;
    last = n - 1;
    middle = (first + last) / 2;
    while(first <= last)
    {
        if (list[middle] < data)
           first = middle + 1;
        
        else if (list[middle] == data)
        {
            printf("The element %d has found at position %d.",data,middle + 1); 
            break;
        }
        else
            last = middle - 1;
        middle = (first + last) / 2;
    }
    if (first > last)
    {
        printf("The number %d is not found in given given list of elements.",data);
    }
return 0;
}