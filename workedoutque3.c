// doubt in string output
#include<stdio.h>
int main ()
{
    char x = 'N';
    char name [13] = "nandini goyal";
    printf("output of characters\n");
    printf("%c\n%3c\n%5c\n",x,x,x);
    printf("%3c\n%c\n",x,x);
    printf("\n");
    printf("output of strings\n");  // doubt in this string output
    printf("%s\n",name);
    printf("%20s\n",name);
    printf("%20.10s\n",name);
    printf("%.5s\n",name);
    printf("%-20.10s\n",name);
    printf("%5s\n",name);
    
}