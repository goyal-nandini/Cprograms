// write a program to find average of marks using array.
// calculating average marks of students in one subject.
#include<stdio.h>
int main ()
{
    int i, n, marks[80], sum = 0;
    float avg;
    printf("enter the number of students: ");    
    scanf("%d",&n);
    printf("enter marks obtained in subject :\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&marks[i]);
        sum = sum + marks[i];
    }
    
    avg = sum / n;
    printf("The average of marks is :%f",avg);
return 0;
}