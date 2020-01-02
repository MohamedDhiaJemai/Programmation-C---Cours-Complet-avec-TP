#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,x,x1,x2;
    printf("Donner A :\n");
    scanf("%f",&a);
    printf("Donner B :\n");
    scanf("%f",&b);
    printf("Donner C :\n");
    scanf("%f",&c);

    d= pow(b,2)-(4*a*c);

    if (d==0)
        {
            x=(-b)/(2*a);
            printf("La valeur de x est : %f \n",x);
        }
        else if ((d>0)&&(a!=0))
        {
            x1 = (-b + sqrt(d))/(2*a);
            x2 = (-b - sqrt(d))/(2*a);
            printf("La valeur de x1 est : %f \n",x1);
            printf("La valeur de x2 est : %f \n",x2);
        }
            else
                printf("L'equation n'a pas de solution !! \n");
}
