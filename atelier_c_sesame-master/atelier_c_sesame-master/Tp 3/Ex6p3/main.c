#include <stdio.h>

int main()
{
    int a,b;
    printf("Donner un nombre 1 \n");
    scanf("%d",&a);
    printf("Donner un nombre 2 \n");
    scanf("%d",&b);
    while(a!=b)
    {
        if(a>b)
        {
            a-=b;
        }
        else
        {
            b-=a;
        }
    }
    printf("Le PGCD est %d \n",a);
    return 0;
}
