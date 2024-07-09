#include<stdio.h>
int main ()
{
    int a = 0,b = 1,c,N,i;
    printf("enter N : ");
    scanf("%d",&N);

    printf("%d\n%d \n",a,b);

    for(i=2; i<N; i++)     //confusion N = 5 me i = 5 hoga to condition satisfy hi ni hogi...    output correct hai.                               
  // for(i=2; i<N; ++i)   // same as above 
  // for(i=2; i<=N; ++i) OR for(i=2; i<=N; i++)   // agar ye use karet hai to N =3 pr 4 tk ki terms print hongi.

{
    c = a+b;
    printf ("%d \n",c);
    a = b;
    b = c;
}
    return 0;
}