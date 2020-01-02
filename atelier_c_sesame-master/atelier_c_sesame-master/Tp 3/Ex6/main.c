#include <stdio.h>

int main()
{
    int a,b,r;
    printf("Donner a \n");
    scanf("%d",&a);
    printf("Donner b \n");
    scanf("%d",&b);
    while(b!=0)
    {
       r=a%b;
       a=b;
       b=r;
    }
    printf("Le PGCD est %d  ",a);
    return 0;
}
