// make your own pow function.
#include <stdio.h>
float powfun(float ,float );
int main ()
{
   float result = powfun(2.0,3.0);
   printf("%f",result);
   return 0;
}
float powfun(float n, float m)
{   
    float result = 1;
    for(int i = 0; i < m; i++)
    {
        result = result * n;
    }
    return result;
}