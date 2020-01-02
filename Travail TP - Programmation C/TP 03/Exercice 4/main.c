#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i;
    printf("Donner Un Entier \n");
    scanf("%d",&x);

    if (x == 0)
    {
        printf("Le factoriel de %d = 1 \n",x);
    }
    int f=1;
    for (i=1; i<=x; i++)
    {
        f=f*i;
    }

    printf("Le Factoriel du %d est = %d \n",x,f);

    return 0;
}
