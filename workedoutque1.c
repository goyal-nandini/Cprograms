// ansi c pg 115, 116, 118
#include<stdio.h>
int main ()
{
    int m = 12345;
    long n = 987654;
    printf("%d\n",m);
    printf("%10d\n",m);      // right justified 
    printf("%010d\n",m);     //0 at blank position, right justified
    printf("%-10d\n",m);     //left justified
    printf("%-10ld\n",n);    // left justified
    printf("%10ld\n",-n);    // - sign appears, right justified

    return 0;
}