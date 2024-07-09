// ansi c pg 115, 116, 118
#include<stdio.h>
int main ()
{
    float y = 98.7654;
    printf("%7.4f\n",y);  // doubt, why not right justified.
    printf("%f\n",y);  // doubt in output
    printf("%7.2f\n",y);  // remember there is round off , right justified
    printf("%07.2f\n",y);    // o at balnk and right justified
    printf("%*.*f\n",7,2,y);  //right justified
    printf("\n");
    printf("%10.2e\n",y);    // big doubt 
    printf("%12.4e\n",-y);  //doubt
    printf("%-10.2e\n",y);  //doubt
    printf("%e\n",y);      //doubt

    return 0;
}
