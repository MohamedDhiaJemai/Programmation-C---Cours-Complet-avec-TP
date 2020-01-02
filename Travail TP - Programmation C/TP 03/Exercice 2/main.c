#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x,y,n,i,reste,quotient;

    printf("Donner l'Entier Num 1 : \n");
    scanf("%d",&x);
    printf("Donner l'Entier Num 2 : \n");
    scanf("%d",&y);

    if (x<y)
    {
        printf("Quotient = 0 et Reste = %d \n",x);
    }

    else if (y==0)
    {
        printf("Impossible !!! \n");
    }

    else {

            i=1;
            n=x-y;

        while(n>=y){
           n=n-y;
           i++;
        }

            if  (n == 0){
            printf("Quotient = %d et Reste = 0 \n",i);
        }
            else {
            printf("Quotient = %d et Reste = %d \n",i,n);
        }

        }
}
