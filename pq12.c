//infinite loop ....beware of this dont know the reason....

#include <stdio.h>
int main ()
{
    // keep taking number as input from user until user enters a number mulyiple of 7.
    int n;

    do{ 
        printf("enter n \n");
        scanf("%d",&n);

        printf("user has entered %d",n);
        if (n % 7 == 0)
        {   
            break;
        }
      }
    while (1);
    printf("thank you");
    return 0;
}