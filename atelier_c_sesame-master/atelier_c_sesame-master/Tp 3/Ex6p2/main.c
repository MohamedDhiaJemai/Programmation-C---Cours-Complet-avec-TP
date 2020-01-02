#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,p,min,i;
    printf("Donner a \n");
    scanf("%d",&a);
    printf("Donner b \n");
    scanf("%d",&a);
    if(a<b)
    {
      min=a;
    }
    else
    {
      min=b;
    }
    for(i=1;i<=min;i++)
    {
       if((a%i==0)&& (b%i==0))
       {
           p=i;
       }
    }
    printf("Le PGCD est %d \n",p);
    return 0;
}
