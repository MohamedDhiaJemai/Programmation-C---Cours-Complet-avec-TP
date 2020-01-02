#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,x,y,z,b;
    printf("Donner un entier x :\n");
    scanf("%d",&a);

    x = a / 100;
    y = (a % 100)/10;
    z = (a % 100)%10;

    printf("la valeur de X est : %d \n", x);
    printf("la valeur de Y est : %d \n", y);
    printf("la valeur de Z est : %d \n\n", z);

    b = pow (x,3) + pow (y,3) + pow (z,3);
    if (a == b ) {
        printf("%d Est Un Entier Cubique \n",a);
    }
    else {
        printf("%d N'est Pas Un Entier Cubique",a);
    }

}
