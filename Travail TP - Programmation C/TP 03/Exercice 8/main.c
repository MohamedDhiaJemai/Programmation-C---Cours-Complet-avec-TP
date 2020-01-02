#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x,y,a,b,i,j;
    printf("Donner L'entier Num 1 : \n");
    scanf("%d",&x);
    printf("Donner L'entier Num 2 : \n");
    scanf("%d",&y);

    a=0;
    b=0;

    for (i=1;i<=x;i++){
        if (x%i==0){
            a=a+i;
        }
    }
     printf("La Somme Des Diviseurs de x = %d \n",a);

    for (j=1;j<=y;j++){
        if (y%j==0){
            b=b+j;
        }
    }
    printf("La Somme Des Diviseurs de y = %d \n",b);

    if ((x==b)||(a==y))
        printf("%d Et %d Sont Deux Nombre Amis \n",x,y);
    else
        printf("%d Et %d Ne Sont Pas Amis \n",x,y);

    return 0;
}
