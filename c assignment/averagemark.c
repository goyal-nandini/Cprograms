// write a program to find average of marks.
#include<stdio.h>
int main()
{
    int i,n;
    float marks,sum = 0,avg;
    printf("enter the number of subjects:");
    scanf("%d",&n);

    printf("enter marks obtained in %d subjects(out of 100) :\n",n);
    for(i=0; i<n; i++)
    {
       scanf("%f",&marks);
       sum = sum + marks;
    }
    avg = sum/n;
    printf("average marks = %f",avg);
    return 0;
}