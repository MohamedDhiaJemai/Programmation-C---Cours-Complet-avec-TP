#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,aux,n,r;
    printf("Donner l'Entier Num 1: \n");
    scanf("%d",&x);
    printf("Donner l'Entier Num 2: \n");
    scanf("%d",&y);

    if (x<y){
        aux=x;
        x=y;
        y=aux;
    }

    while(r!=0){
        r=x%y;
        x=y;
        y=r;
    }

    printf("Le PGCD est : %d \n",x);



    return 0;
}
