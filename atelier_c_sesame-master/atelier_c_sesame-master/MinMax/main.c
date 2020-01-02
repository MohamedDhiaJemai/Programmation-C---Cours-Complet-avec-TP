#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int MIN = -100 ;
    const int MAX=   100 ;
    int n;
    printf("Donner un nombre \n");
    scanf("%d",&n);

    if(n<MIN)
    {
       printf("Inférieur a MIN  \n");
    }
    else
    {
       if((n>=MIN)&&(n<=MAX))
       {
            printf("Compris entre les bornes  \n");
       }
       else
       {
            if(n>MAX)
            {
                 printf("Supérier a MAX \n");
            }
       }
    }

    return 0;
}
