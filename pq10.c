// check below wrong print ho rha hai..

#include <stdio.h>
int main () {
// print the sum of first n natural numbers.
// also print in reverse order.

    int n;
    printf("enter n \n");
    scanf("%d",& n);
     
    int sum = 0;
     for (int i=1,j=n; i<=n && j>=1; i++,j--)    // we can initialise more than one variable in loop. 
                                                 // we can ignore i varialbe here as then the sum will be calculated in reverse manner only.same output aayega.
     {
      sum += i;  // sum = sum + i; (hum ese bhi likh skte hai)
      printf ("%d \n", j);
     }
     
     printf("sum of first %d natural numbers is %d \n ", n, sum);

    // for (int i=n; i>=1; i--)
    // {
    // //sum += i;
    // printf ("%d \n", i);
    // }
    // //printf("sum of first %d natural numbers is %d \n ", n, sum);

    // error ho raha hai...sum 30 print ho raha hai. n=5 me reverse wale me. ..check it....

     return 0;
}