
#include<stdio.h>
void main ()
{
   char price[0];    // this array is defined only for gets()
   puts("enter price of pakoda:");   // output   **puts() has inbuilt next line character**
   gets(price);                      // get the input from user.
   puts("price of pakoda is:");      
   puts(price);
   //puts('a');   // giving  warning: passing argument 1 of 'puts' makes pointer from integer without a cast [-Wint-conversion]
   // dont know ??
   puts("a");  //works!!
}