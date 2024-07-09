//infinite loop ....beware of this dont know the reason....


#include <stdio.h>
int main ()
{
    // keep taking number as input from user until user enters an odd number.
    // btw agar hm phle user se input lena ho aur usm koi condition check karni hoo tbh hum do while loop ka jyada use krr skte hai.
    int n;

    do{ 
        printf("enter n \n");
        scanf("%d",&n);

        printf("user has entered %d \n",n);
        if (n % 2 != 0)
        {   
             break;
        }
      }
    while (1);
    printf("thank you");
    return 0;
}