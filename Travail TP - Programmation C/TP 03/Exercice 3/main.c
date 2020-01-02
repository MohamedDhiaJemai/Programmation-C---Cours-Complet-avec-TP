#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int x,i;

    printf("Donner Un Entier : \n");
    scanf("%d",&x);

    int n=(x/2);
    int s=0;

    for (i =1; i<=n; i++){
        if ((x%i) == 0)
            {s=s+i;}
    }

    if(s==x)
        {printf("C'est Un Nombre Parfait \n");}
    else
        {printf("%d N'est Pas Un Nombre Parfait \n",x);}

    return 0;
}
