// write a program to find the roots of quadratic equation.
#include<stdio.h>
#include<math.h>
int main ()
{
    float a,b,c,discriminant,root1,root2,realpart,imgpart;
    printf("enter the coefficients of a quadratic equation :\n");
    scanf("%f %f %f",&a, &b, &c);
    
    discriminant = b * b - 4 * a * c;
    
    if (discriminant > 0)
    {
        root1 = (-b+sqrt(discriminant)) / (2 * a);
        root2 = (-b-sqrt(discriminant)) / (2 * a);
        printf("root1 = %f and root2 = %f",root1,root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("root1 = %f and root2 = %f",root1,root2);
    }
    else
    {
        realpart = -b / (2 * a);
        imgpart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %f + i%f and root2 = %f - i%f",realpart,imgpart,realpart,imgpart);
    }
    return 0;
}