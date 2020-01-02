#include <stdio.h>
#include <stdlib.h>

void main()
{
    char c;
    printf("Donner un caractere :\n");
    scanf("%c",&c);
    printf("Le code ASCI de %c est : %d \n",c,c);
    printf("Son sucesseur est : %d",c+1);
}
