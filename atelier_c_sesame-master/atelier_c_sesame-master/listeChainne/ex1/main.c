#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct Maillon
{
   int valeur;
   struct Maillon *suivant;
};

typedef struct Maillon ListeEntier;

struct Maillon Exist(ListeEntier *L, int val);


int main()
{
    return 0;
}

struct Maillon Exist(ListeEntier *L, int val)
{
     ListeEntier *p=L;
     struct Maillon *t;
     p=L;
     while (p!=NULL && p->valeur!=val )
     {
         if(p->valeur==val)
         {
              t=p->suivant;
         }
         else
         {
            p=p->suivant;
         }
     }
     return(*t);
}

