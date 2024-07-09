// question be like 
// write a function to calculate area of square, circle, rectangle
#include<stdio.h>
int areasquare(int a);
// void areacircle(int r);       // i personally tried it but not showing result. something wrong in using void
float areacircle(int r);
int arearect(int a, int b);

int main ()
{
    int a,b,r;
    printf("enter side of square : \n");
    scanf("%d",&a);
    int result = areasquare(a);
    printf("area of square is %d \n",result);
    
   // void areacircle(r);
   // // float areac = areacircle(r);         // can also use it to call the user defined function. 
  printf("area of circle is %f \n", areacircle(r));    // directly calling function from library function. note the calling.

    int area = arearect(a,b);
    printf("the area of rectangle is %d \n",area);
    
    return 0;
}

int areasquare(int a)
{
    return a*a;
}
// void areacircle(int r)           // i personally tried it but not showing result. something wrong in using void 
// {
//     printf("enter r");
//     scanf("%d",&r);
//     printf("area of circle is %f",3.14*r*r);
// }
int arearect(int a, int b)
{   
   printf("enter a and b : \n");
   scanf("%d%d",&a,&b);
   return a*b;
}
float areacircle(int r)
{
    printf("enter r : \n");
    scanf("%d",&r);
    return 3.14*r*r;
}
