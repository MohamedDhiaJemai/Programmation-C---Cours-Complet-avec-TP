#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i,aux,pgcd=0;

    printf("Donner L'Entier Num 1 : \n");
    scanf("%d",&x);
    printf("Donner L'Entier Num 2 : \n");
    scanf("%d",&y);

    if (x>y){
        aux =x;
        x=y;
        y=aux;
    }

    pgcd=0;

        for(i=1;i<=x;i++){
                if((x%i==0) && (y%i==0) && (pgcd<i)){
                    pgcd=i;
                }
    }
    printf("LE PGCD est : %d ",pgcd);

    return 0;
}

