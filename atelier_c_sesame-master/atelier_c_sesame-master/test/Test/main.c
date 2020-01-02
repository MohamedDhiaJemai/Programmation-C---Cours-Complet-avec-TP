#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int tab[50];
    saisie(&n);
    printf("La valeur de n est %d \n",n);
    remplirTab(tab,n);
    printf("Le premier affichage \n");
    affichierTab(tab,n);
    tri(tab,n);
    printf("Le 2éme affichage \n");
    affichierTab(tab,n);
    printf("la valeur de n est %d \n",n);
    return 0;
}

void saisie(int *n)
{
    int x;
    printf("Donner la taille de tableua \n");
    scanf("%d",&x);
    *n=x;
}

void remplirTab(int tab[50],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Tapez la case %d \n",i);
        scanf("%d",&tab[i]);
    }
}

void affichierTab(int tab[50],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d \ ",tab[i]);
    }
    //*n=10;
}

void tri(int tab[50], int n)
{
    int nb;
    int aux;
    do
    {
         nb=0;
         for(int i=0 ; i<n-1 ; i++)
         {

              if(tab[i]>tab[i+1])
              {
                   aux=tab[i];
                   tab[i]=tab[i+1];
                   tab[i+1]=aux;
                   nb++;
              }
         }

    }while(nb==0);
    //affichierTab(tab,n);
    //Neww
}
