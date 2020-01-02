#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,q;
    printf("Donner entier 1 \n");
    scanf("%d",&a);
    printf("Donner entier 2 \n");
    scanf("%d",&b);
    int d=0;

    while(a>b)
    {
       a=a-b;
       d=d+1;
    }
    int n=a;
    printf("d = %d et r =%d \n",d,r);
    return 0;
}
