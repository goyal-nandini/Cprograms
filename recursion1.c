// to print HELLO WORLD 5 times.
// doubt comes check please
#include<stdio.h>
void printhello(int count);    // void printhello(int n);

int main ()
{  
    printhello(5);
    return 0;
}
// recursive function.
void printhello(int count)
{  
   if (count == 0)
   {
    return;
   }
   printf(" \v\t HELLO WORLD \n");
   printhello(count - 1);
//    if(count == 0)   // this would create may be infinite loop may be....
//    {
//     return;
//    }
}
// void printhello(int n)         //agar hum ye likte hai to unlimited HELLO WORLD print ho jate hai..es aku ??
// {  int count;
//    if (count == 0)
//    {
//     return;
//    }
//    printf(" \t\t HELLO WORLD \n");
//    printhello(count - 1);
// }
