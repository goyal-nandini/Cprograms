#include<stdio.h>
int main ()
// using different data types to input and print student name , age , average marks.
{
  char name;    // confused to use double , char or any other datatype to enter my full name.
  int age;
  printf("enter your name:\n");
  scanf("%c",&name);

     printf("your name is %c \n",name);


  printf("enter your age:\n");
  scanf("%d",&age);

     printf("your age is %d \n",age);

  
  int maths,chem,PPS,EGD;

  printf("enter your marks in maths, \n chem ,\n PPS ,\n EGD \n ");
  scanf("%d%d%d%d",&maths,&chem,&PPS,&EGD);
   
   int avgmarks = (maths+chem+PPS+EGD)/4;

   printf("your average marks is %d \n",avgmarks);

}