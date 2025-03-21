// write a program for linear search.
#include<stdio.h>
int main()
{
    int i, list[50], n, data;
    printf("enter the size of list : ");
    scanf("%d",&n);
    printf("enter the list of numbers :\n");
    for (i = 0; i < n; i++)
    {
       scanf("%d",&list[i]);
    }
    printf("enter the data you want to search : ");
    scanf("%d",&data);

    for (i = 0; i < n; i++)
    {
      if (list[i] == data)
      {
        printf("Linear seach is successful !!\ndata %d has found at index %d.",data,i);
        break;
      }
    }
    if (i == n+1)
    {
        printf("Linear search is unsuccessful, re enter the data");
    }
return 0;
}