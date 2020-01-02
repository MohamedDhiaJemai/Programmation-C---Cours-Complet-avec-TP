#include <stdio.h>
#include <stdlib.h>

int main()
{

    float r;
    printf("Donner un reel \n");
    scanf("%f",&r);
    int e=(int)r; //cast
    printf("Le nombre entier est %d \n",e);
    float d=r-e ;  //j'ai multipler par 1000 pour prendre 3 chiffre aprés le virgule
    printf("Le nombre decimal est %f \n",d);
    getchar();
    return 0;
}
