#include <stdio.h>
#include <stdlib.h>

void main()
{
    int j,m,a;

    printf("Donner Le Jour : \n");
    scanf("%d",&j);
    printf("Donner Le Mois : \n");
    scanf("%d",&m);
    printf("Donner L'Annee : \n");
    scanf("%d",&a);

    int b=0;
    if ((a % 400 == 0) || (a % 4 == 0) && (a % 100 != 0))
        b=1;

    switch (m) {
    case  1:
        if ((j>=1)&&(j<31))
        {
            j++;
            printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
        }
        else if (j==31){
            j=1;
            m++;
            printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
        }
        else printf("Date Invalide !!! /n");
        break;
    case  3:
        if ((j>=1)&&(j<31))
        {
            j++;
            printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
        }
        else if (j==31){
            j=1;
            m++;
            printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
        }
        else printf("Date Invalide !!! /n");
        break;
    case  5:
        if ((j>=1)&&(j<31))
        {
            j++;
            printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
        }
        else if (j==31){
            j=1;
            m++;
            printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
        }
        else printf("Date Invalide !!! /n");
        break;
    case  7:
        if ((j>=1)&&(j<31))
        {
            j++;
            printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
        }
        else if (j==31){
            j=1;
            m++;
            printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
        }
        else printf("Date Invalide !!! /n");
        break;
    case  8:
        if ((j>=1)&&(j<31))
        {
            j++;
            printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
        }
        else if (j==31){
            j=1;
            m++;
            printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
        }
        else printf("Date Invalide !!! /n");
        break;
    case  10:
        if ((j>=1)&&(j<31))
        {
            j++;
            printf("Le Lendemain c'est : %d/%d/%d /n",j,m,a);
        }
        else if (j==31){
            j=1;
            m++;
            printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
        }
        else printf("Date Invalide !!! /n");
        break;
    case  12:
        if ((j>=1)&&(j<31))
        {
            j++;
            printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
        }
        else if (j==31){
            j=1;
            m++;
            a++;
            printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
        }
        else printf("Date Invalide !!! /n");
        break;
    case  4:
        if ((j>=1)&&(j<30))
        {
            j++;
            printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
        }
        else if (j==30){
            j=1;
            m++;
            printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
        }
        else printf("Date Invalide !!! /n");
        break;
    case  6:
        if ((j>=1)&&(j<30))
        {
            j++;
            printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
        }
        else if (j==30){
            j=1;
            m++;
            printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
        }
        else printf("Date Invalide !!! /n");
        break;
    case  9:
        if ((j>=1)&&(j<30))
        {
            j++;
            printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
        }
        else if (j==30){
            j=1;
            m++;
            printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
        }
        else printf("Date Invalide !!! \n");
        break;
    case  11:
        if ((j>=1)&&(j<30))
        {
            j++;
            printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
        }
        else if (j==30){
            j=1;
            m++;
            printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
        }
        else printf("Date Invalide !!! /n");
        break;
    case 2:
        if(b==0){
            if ((j>=1)&&(j<28))
            {
                j++;
                printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
            }
                else if (j==28)
                    {
                        j=1;
                        m++;
                        printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
                    }
                        else printf("Date Invalide !!! \n");
        }
        if(b==1){
            if ((j>=1)&&(j<29))
            {
                j++;
                printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
            }
                else if (j==29)
                    {
                        j=1;
                        m++;
                        printf("Le Lendemain c'est : %d/%d/%d \n",j,m,a);
                    }
                        else printf("Date Invalide !!! \n");
        }
        break;
    default :
        printf("Date Invalide !!! \n");
        break;
    }
}
