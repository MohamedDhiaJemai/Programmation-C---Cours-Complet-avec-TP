#include <stdio.h>
#include <stdlib.h>

struct Maillon
{
   int valeur;
   struct Maillon *suivant;
};

typedef struct Maillon ListeEntier;

int main()
{
    int i;
    ListeEntier *L;
    for(i=0 ; i<3 ; i++)
       creeListe(&L);
    AffichListe(L);
    return 0;
}

void creeListe(ListeEntier **L)
{
    ListeEntier *p,*l;
    int x;
    p=(ListeEntier*)malloc(sizeof(ListeEntier));
    printf ("Entrer un entier \n");
    scanf ("%d", &x);
    p->valeur=x;
    if(L!=NULL)
    {
        p->suivant=NULL;
        *L=p;
    }
    else
    {

    }
}

void AffichListe(ListeEntier *L)
{
     ListeEntier *p;
     p=L;
     while(p!=NULL)
     {
          printf(" %d ", p->valeur);
          p=p->suivant;
     }
     printf("\n");
}

