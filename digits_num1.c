#include<stdio.h>
int main()
{
    int num = 0, n = 0; // Initialize variables to zero
    printf("Enter any number: \n");
    scanf("%d", &num);
   
    do
    {
     n ++; // Increment the digit count
     num = num / 10; // Remove the last digit
    } while(num > 0); // Repeat until the number becomes zero
    
    printf("The number of digits in the number is: %d", n); // Print the result
    return 0;
}
