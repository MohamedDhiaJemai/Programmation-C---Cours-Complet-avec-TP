#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Maillon
{
    int valeur;
    struct Maillon *suivant;
};

typedef struct  Maillon ListeEntier;

void AfficheListe(ListeEntier *L);
ListeEntier* AjouterDebut(ListeEntier *L);
ListeEntier* AjoutFin(ListeEntier *L);

int main()
{
    ListeEntier *L;
    L=NULL;
    L=AjouterDebut(L);
    L=AjouterDebut(L);
    L=AjouterDebut(L);
    L=AjouterDebut(L);
    printf("L'affichage \n");
    AfficheListe(L);
    printf("Ajout au fin \n");
    L=AjoutFin(L);
    AfficheListe(L);
    //function main testing true
    return 0;
}



void AfficheListe(ListeEntier *L)
{
    ListeEntier *p;
    for(p=L ; p!=NULL ; p=p->suivant)
    {
        printf("%d -",p->valeur);
    }
    printf("NIL \n");

    for(p=L ; p!=NULL ; p=p->suivant)
    {
        printf("%x -",p);
    }
    printf("NULL \n");
}
ListeEntier* AjouterDebut(ListeEntier *L)
{
    ListeEntier *P;
    P=(ListeEntier*)malloc(sizeof(ListeEntier));
    printf("Donner un valeur \n");
    scanf("%d",&(P->valeur));
    P->suivant=L;
    L=P;
    return L;
}

ListeEntier* AjoutFin(ListeEntier *L)
{
    ListeEntier *p , *l;
    p=(ListeEntier*)malloc(sizeof(ListeEntier));
    printf("Donner un entier \n");
    scanf("%d",&(p->valeur));
    p->suivant=NULL;
    if(L==NULL)
    {
        L=p;
    }
    else
    {
        l=L;
        while(l->suivant!=NULL)
        {
            l=l->suivant;
        }
        l->suivant=p;
    }
    return L;
}
