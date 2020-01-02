#include <stdio.h>
#include <stdlib.h>

void main()
{
    int h,m,s;
    printf("Donner l'Heure : \n");
    scanf("%d",&h);
    printf("Donner les Minutes : \n");
    scanf("%d",&m);
    printf("Donner les Secondes: \n");
    scanf("%d",&s);


    if ((s>=0)&&(s<59)&& (m <=59) && (h <=23))
       {
        s++;
        printf("Le Nouveau Temps est : %d : %d : %d \n", h,m,s);
       }
    else if ((s==59) && ((m>=0) && (m<59)))
       {
        s=0; m++;
        printf("Le Nouveau Temps est : %d : %d : %d \n", h,m,s);
       }

    else if ((m == 59)&&(s == 59) && (h<23))
        {
            s=0; m=0; h++;
            printf("Le Nouveau Temps est : %d : %d : %d \n", h,m,s);
        }
    else if ((h == 23) && (s == 59) && (m == 59))
        {
            s=0; m=0; h=0;
            printf("Le Nouveau Temps est : %d : %d : %d \n", h,m,s);
        }
    else
        printf("Temps Invalide !!! \n");
}
