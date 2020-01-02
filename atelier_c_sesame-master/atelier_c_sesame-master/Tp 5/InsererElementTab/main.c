#include <stdio.h>

int main()
{
    int const MAX=10;
    int i,pos,valeur,taille,aux;
    int tab[MAX];
    do
    {
         printf("Donnez la taille \n");
         scanf("%d",&taille);
    }while((taille>MAX)||(taille<1));
    for(i=0;i<taille;i++)
    {
        printf("Tapez la case %d \n",i+1);
        scanf("%d",&tab[i]);
    }
    printf("Affichage de tableau  \n");
    for(i=0;i<taille;i++)
    {
        printf("%d | ",tab[i]);
    }
    printf("\n");
    do
    {
        printf("Donnez la position \n");
        scanf("%d",&pos);
    }while((pos>taille+1)||(pos<1));

    printf("Donner un valeur \n");
    scanf("%d",&valeur);
    if(pos==taille+1)
    {
        tab[pos-1]=valeur;
        taille++;
    }
    else
    {

         for(i=taille-1;i>pos-1;i--)
         {
              tab[i+1]=tab[i];
         }
         tab[pos-1]=valeur;
         taille++;
    }

    printf("nouvelle affichage de tableau  \n");
    for(i=0;i<taille;i++)
    {
        printf("%d | ",tab[i]);
    }
    return 0;
}
