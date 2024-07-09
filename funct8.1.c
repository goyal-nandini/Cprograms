// A custom pow function for any real number exponents
#include <stdio.h>
#include <math.h>
double pow_real(double base, double exponent) {
  // Use the formula: base^exponent = e^(exponent * log(base))  
  return exp(exponent * log(base));  // amazing
}
int main ()
{
    double result = pow_real(2,3);
    printf("%f",result);
}
