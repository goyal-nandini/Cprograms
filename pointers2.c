// write a program in c to print all the letters in english alphabet using a pointers.
#include <stdio.h>
int main ()
{ 
    char *c;
    *c = 'a';
    
   while(*c <= 'z')
   {
       printf("%c\n",*c);
       *c += 1;
   }
return 0;  // something to say this code is fabulous in my point of view it indicated good understanding of topic this code i have not written by myself i have taken help from bing might. 
}

// {   
//     for(char *i = 'a'; *i <='z'; *i++)
//     {
//        printf("%c ",*i);
//     }
//     return 0;
// }
// void printArray(char* p, int len)
// {
//     for( p ; p < p + len ; p++ )
//     {
//         printf("%c", *p);
//     }
//     printf("\n");
// }

// int main()
// {
//     char* abc = "abcdefghijklmnopqrstuvwxyz";
//     printArray(abc, 26);
//     return 0;
// }