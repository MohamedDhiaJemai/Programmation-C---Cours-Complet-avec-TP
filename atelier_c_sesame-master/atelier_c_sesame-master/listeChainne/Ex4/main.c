#include<stdio.h>
#include<string.h>
struct joueur
{
    char nom[10];
    char prenom[10];
    int num_poste;
    float poid;
    struct joueur *suiv;
};

typedef struct joueur liste_joueur;
liste_joueur *j;

void remplir_liste (liste_joueur **l)
{
     int i;
     liste_joueur *j;
     j=(liste_joueur*)malloc(sizeof(liste_joueur));
     for ( i=1;i<5;i++)
     {
         puts("Donner le nom");
         gets((j->nom));
         puts ("Entrer prenom du joueur \n");
         gets ((j->prenom));
         getchar();
         printf ("Entrer poid du joueur \n");
         scanf ("%f", &(j->poid));
         getchar();
         j->num_poste=i;
     }
     j->suiv=NULL;
     *l=j;
}


liste_joueur* insertion_triee (liste_joueur* j, int i)
{
     liste_joueur*p, *n, *pre;
     n= (liste_joueur*)malloc(sizeof (liste_joueur)) ;
     n->num_poste = i ;
     if (!j || i < j->num_poste)
     {
          n->suiv = j ; j= n ;
     }
     else
     {
          p = j ;
          while ((p != NULL) && (p->num_poste <= i ))
          {
               pre = p ;
               p = p->suiv ;
          }
          pre ->suiv = n;
          n->suiv = p ;
     }
     return(j) ;
}


void Recherche_joueur(liste_joueur *j, int i)
{
     liste_joueur *p;
     int trouve=0;
     p=j ;
     while (p!=NULL && trouve==0)
     {
         if (p->num_poste==i)
         {
             trouve=1;
         }
         p=p->suiv;
     }
     printf("adresse joureur %d est:",i,p);
}


liste_joueur* Supprimer_joueur (liste_joueur *j, int i)
{
    liste_joueur*p, *q;
    p=j;
    while(p!=NULL && p->num_poste!=i)
    {
         p=p->suiv;
    }
    if(p!=NULL)
    {
         if(p==j)
         {
             j=j->suiv;
         }
         else
         {
              q=j;
              while(q->suiv!=p)
              {
                   q=q->suiv;
              }
              q->suiv=p->suiv;
         }
         free(p);
    }
    return j;
}

void affiche_loud (liste_joueur *j)
{
     float max,som;
     int i;
     liste_joueur *p,*ind;
     p=j;
     max=p->poid;
     p=p->suiv;
     for ( i=1;i>15;i++)
     {
         som+=p->poid;
         if (p->poid>max)
         {
             max=p->poid;
             ind=p;
         }
     }
     printf("le nom du joueur qui est le plus lourd %s ,son prenom %s,son poid %f,son indice %d",ind->nom,ind->prenom,ind->poid,ind->num_poste);
     printf("la moyenne des poids des joueurs %f",som/15);
}

void main ()
{ liste_joueur *l;

remplir_liste(&l);

}
