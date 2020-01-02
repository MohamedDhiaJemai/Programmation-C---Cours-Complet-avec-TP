#include <stdio.h>
#include <stdlib.h>

int main()
{
    int u,i=0;

    printf("Donner Le Premier Termne : \n");
    scanf("%d",&u);

    while (u>1){


            if (u%2==0){
                u=(u/2);
                printf("La valeur de U(%d) est : %d \n",i,u);
            }

            else {
                u=(3*u)+1;
                printf("La valeur de U(%d) est : %d \n",i,u);
            }
    i++;
    }
    return 0;
}
