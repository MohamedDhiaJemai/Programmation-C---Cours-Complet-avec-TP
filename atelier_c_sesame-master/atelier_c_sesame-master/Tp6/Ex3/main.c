#include <stdio.h>

void se_deplacer(int *dep,int *des);
void saisie(int *des);

int main()
{
    int dep=0,des;

    do
    {
        printf("Donner votre départ \n");
        scanf("%d",&dep);
    }while((dep>9)||(dep<0));

    while(1)
    {
        saisie(&des);
        if(des==dep)
        {
             break;
        }
        se_deplacer(&dep,&des);
    }
    return 0;
}

void se_deplacer(int *dep,int *des)
{
    int i;
    for(i=0 ;i<=*dep;i++)
    {
        printf("étage %d \n",i);
    }

    if(*dep>*des)
    {
         for(i=*dep;i>=*des;i--)
         {
              printf("étage %d \n",i);
              *dep++;
         }

    }
    else
    {
         if(*dep<*des)
         {
              for(i=*dep;i<=*des;i++)
              {
                   printf("étage %d \n",i);
                   *dep--;
              }

         }
    }
}
void saisie(int *des)
{
    do
    {
        printf("Donner un étage \n");
        scanf("%d",&des);
    }while((des>9)||(des<0));
}
