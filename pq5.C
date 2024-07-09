#include<stdio.h>
int main ()
{
    // QUE program to give grades to a student
     // marks < 30 C
     // 30 <= marks < 70 is B
     // 70 <= marks <90 is A
     // 90 <= marks <= 100 is A+

     int marks ;
     printf("enter student marks");
     scanf("%d",& marks);

    //  if (marks < 30){
    //      printf("your grade is C.");}
    //      if (marks >= 30 && marks <= 70){
    //          printf("your grade is B.");}
    //          if (marks >= 70 && marks <= 90){
    //              printf("your grade is A.");}
    //              if (marks >= 90 && marks <=100){
    //                  printf("your grade is A+.");}

                    // it giving me no result don't know the reason....
                    // the error here i get is that the condition cannot be like 30 <= marks >= 100 , like this okay ??
                    // now its work !!

if (marks < 30){
         printf("your grade is C.");}
         else if (marks >= 30 && marks <= 70){
             printf("your grade is B.");}
             else if (marks >= 70 && marks <= 90){
                 printf("your grade is A.");}
                 else if  (marks >= 90 && marks <=100) {
                     printf("your grade is A+.");}


                    return 0;
}