#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#define ENTREE "texte.txt"

typedef char TypeDonnee;
typedef struct Cell
{
    TypeDonnee donnee;
    struct Cell *suivant; /* pointeur sur la cellule suivante */
}TypeCellule;

typedef TypeCellule* Pile; /* la pile est un pointeur */
/* sur la tête de liste */



int main()
{
    Pile p;
    p=NULL;
    Pile pInv;
    pInv=NULL;
    Pile pRev;
    pRev=NULL;
    FILE* fichier = NULL;
    char caractereActuel;
    fichier = fopen(ENTREE, "r+");
    if (fichier != NULL)
    {
        do
        {
            caractereActuel = fgetc(fichier); // On lit le caractère
            printf("%c", caractereActuel); // On l'affiche
            if((caractereActuel=='(') || (caractereActuel=='{') || (caractereActuel=='['))
            {
                 Empiler(&p,caractereActuel);
            }
            else
            {
                 if((caractereActuel==')') || (caractereActuel=='}') || (caractereActuel==']'))
                 {
                      Empiler(&pInv,caractereActuel);
                 }
            }
        } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF
        fclose(fichier);
    }
    else
    {
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier test.txt");
    }
    //verif(&p,&pInv);
    affichePile(pInv);
    inverserPile(&pInv,&pRev);
    printf("Apres l'inversion \n");
    affichePile(pRev);
    verif(&p,&pRev);
    return 0;
}

void Init_Pile(Pile *p)
{
    struct Pile *p1=NULL;
    p=p1;
}

int Pile_vide(Pile *p)
{
     if(p==NULL)
     {
           return 1;
     }
     else
     {
           return 0;
     }
}

void Empiler(Pile *p , TypeDonnee c)
{
    Pile q;
    q = (TypeCellule*)malloc(sizeof(TypeCellule)*100);
    q->donnee=c;
    q->suivant=*p;
    *p=q;
}

void affichePile(Pile p)
{
    while(p!=NULL)
    {
        printf("La pile est %c \n",p->donnee);
        p=p->suivant;
    }
}

void Depiler(Pile *p)
{
    Pile q;
    if(!Pile_vide(p))
    {
         q=*p;
         *p=(*p)->suivant;
         free(q);
    }
    else
    {
         printf("La pile est vide \n");
    }
}

void verif(Pile *p1 , Pile *p2)
{
    int test;
    do
    {
       if(((*p1)->donnee=='(') && ((*p2)->donnee==')'))
       {
           test=1;
           printf("vrai ()\n");
       }
       else
       {
             if(((*p1)->donnee=='[') && ((*p2)->donnee==']'))
             {
                 test=1;
                 printf("vrai []\n");
             }
             else
             {
                   if(((*p1)->donnee=='{') && ((*p2)->donnee=='}'))
                   {
                       test=1;
                       printf("vrai {}\n");
                   }
                   else
                   {
                        test=0;
                        printf("Erreur in this bloc \n");
                        break;
                   }
             }
       }
       if(test==1)
       {
           Depiler(p1);
           Depiler(p2);
           //break;
       }
       if(((*p1)==NULL) || ((*p2)==NULL))
       {
          break;
       }
    }while(test==1);
    if(test==1)
    {
          printf("est vari \n");
    }
    else
    {
          printf("Erreur \n");
    }
}

void inverserPile(Pile *p1 , Pile *p2)
{
    while((*p1)!=NULL)
    {
         Empiler(p2,(*p1)->donnee);
         Depiler(p1);
    }
}
