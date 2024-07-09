// functions
//functions properties important that is 
/* changes to parameters in functions do not change the value in calling funtion.BECAUSE a copy of argument is passed to the function. */
#include <stdio.h>
void calculateprice(float value);

int main ()
{   
    float value = 100.00;
    calculateprice(value);   // function calling m keyword ni likhte ....(me)
    // function calling k baad value ko print karate hai....
    printf("the value is %f \n",value);   // here the value is original value not the copied one....
                                          // so you will get value same as in line 9.
    return 0;
}

void calculateprice(float value)        /*here you got the value after calling the funtion from main ..here it is parameter and 
                                          the value is copied from line 9 to line 16..   */
{                                       
    value = value + (0.18*value);
    printf("final price is %f \n",value);
}