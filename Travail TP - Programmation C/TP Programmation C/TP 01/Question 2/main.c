#include <stdio.h>
#include <stdlib.h>

void main()
{
    float f;
    printf("Donner un reel : \n");
    scanf("%f",&f);
    int i = f;
    printf("Son Partie Entier est : %d \n",i);
    printf("Son partie Decimal est : %f \n", f-i);
}
