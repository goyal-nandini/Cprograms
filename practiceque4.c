#include<stdio.h>
int main ()
{
    /* to check if a student failed or passed.
       marks > 30 pass
       marks <= 30 fail 
    */
   // USE OF TERNARY OPERATOR!!

      int marks;
       printf("enter marks (0-100) :");
       scanf("%d",&marks);

    //    if (marks > 30)
    //    printf("the student is passed.");

    //    if (marks <= 30)
    //    printf("the student is failed.");

        // if (marks < 30){
        //     printf("FAIL");
        // } else if (marks >=30 && marks <100) {
        //     printf("PASS");
        // } else {
        //     printf("you have entered wrong marks.");
        // }

        // use of ternary operator

        marks < 30 ? printf("FAIL") : printf("PASS");
}