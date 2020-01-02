#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jour,mois;
    printf("Donner le jour \n");
    scanf("%d",&jour);
    printf("Donner le mois \n");
    scanf("%d",&mois);
    if((jour >31)||(jour<1) || (mois>31) || (mois <1))
    {
        printf("Date incorrect \n \a");
    }
    else
    {
         if((jour>=31)&&((mois==2)||(mois==4)||(mois==6)||(mois==9)||(mois==11)))
         {
              printf("Date incorrect \n \a");
         }
         else
         {
             if((jour>28)&&(mois==2))
             {
                 printf("Le mois fevrier contient 28 jours \n \a");
             }
             else
             {
                 if((((jour>=23)&&(jour<=30))&&(mois==9)) ||(mois==10) || (mois==11) || ((jour>=1)&&(jour<=21))&&(mois==12))
                 {
                      printf("Saison d'automne \n");
                 }
                 else
                 {
                      if((((jour>=22)&&(jour<=31))&&(mois==12)) || (mois==1) || (mois==2) || ((jour>=1)&&(jour<=19))&&(mois==3))
                      {
                           printf("Saison d'hivier \n");
                      }
                      else
                      {
                            if((((jour>=20)&&(jour<=31))&&(mois==3)) || (mois==4) || (mois==5) || ((jour>=1)&&(jour<=20))&&(mois==6))
                            {
                                 printf("Saison printemps \n");
                            }
                            else
                            {
                                  if((((jour>=21)&&(jour<=30))&&(mois==6)) || (mois==7) || (mois==8) || ((jour>=1)&&(jour<=22))&&(mois==9))
                                  {
                                       printf("Saison ete \n");
                                  }
                            }
                      }

                  }
             }
        }
    }

    return 0;
}
