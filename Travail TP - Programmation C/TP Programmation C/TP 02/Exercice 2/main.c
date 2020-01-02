#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a;
    printf("Donner une annee : \n");
    scanf("%d",&a);

    if (a % 400 == 0)
        printf("C'est une année Bissectile \n");
    else if ((a % 4 == 0) && (a % 100 !=0))
        printf("C'est une année Bissectile \n");
    else
         printf("N'est pas une année Bissectile \n");
}
