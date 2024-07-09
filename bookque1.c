// basic i/o from mastering c 
#include<stdio.h>
int main ()
{
   char name [12];
   printf("enter your first and last name seperated by whitespace(s):\n");
   gets(name);
   puts(name);  // printf("%d", name);
   return 0;
}