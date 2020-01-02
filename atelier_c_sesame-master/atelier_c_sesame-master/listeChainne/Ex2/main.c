#include <stdio.h>

struct Maillon
{
   int valeur;
   struct Maillon *suivant;
};

typedef struct Maillon ListeEntier;
int main()
{
    printf("Hello world!\n");
    return 0;
}

void Supprimer(ListeEntier **L, int val)
{
     ListeEntier *p, *q;
     p=*L;
     while(p!=NULL && p->valeur!=val)
     {
         p=p->suivant;
     }
     if(p!=NULL)
     {
          if(p==(*L))
          {
               (*L)=(*L)->suivant;
          }
          else
          {
                q=*L;
                while(q->suivant!=p)
                {
                     q=q->suivant;
                }
                q->suivant=p->suivant;
          }
          free(p);
     }
}

