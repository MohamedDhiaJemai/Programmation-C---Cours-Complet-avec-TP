#include <stdio.h>
#include <stdlib.h>

typedef struct Element Element;
struct Element
{
    int nombre;
    Element *suivant;
};

typedef struct Pile Pile;
struct Pile
{
    Element *premier;
};
void empiler(Pile *pile, int nvNombre);
int depiler(Pile *pile);
void afficherPile(Pile *pile);
int saisie();

int main()
{
    int choix,nb;
    Pile *maPile = NULL;
    //menu
    do
    {
        do
        {
            printf("______Menu______\n");
            printf("1)Empiler_______\n");
            printf("2)Depiler_______\n");
            printf("3)Afficher______\n");
            printf("4)Quiiter_______\n");
            printf("________________\n");
            printf("Donnez votre choix \n");
            scanf("%d",&choix);
            switch(choix)
            {
                 case 1 : empiler(&maPile,saisie());
                 break;
                 case 2 : nb=depiler(&maPile);
                          printf("il reste %d element \n",nb-1);
                 break;
                 case 3 : afficherPile(&maPile);
                 break ;
                 case 4 : printf("Vous quittez l'application \n");
                 break;
                 default : printf("Choix invalide \n");
                 break;
            }
        }while((choix<1) || (choix>4) );
    }while(choix!=4);
    return 0;
}

void empiler(Pile *pile, int nvNombre)
{
    Element *nouveau = malloc(sizeof(*nouveau));
    if (pile == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }

    nouveau->nombre = nvNombre;
    nouveau->suivant = pile->premier;
    pile->premier = nouveau;
}

int depiler(Pile *pile)
{
    if (pile == NULL)
    {
        exit(EXIT_FAILURE);
    }

    int nombreDepile = 0;
    Element *elementDepile = pile->premier;

    if (pile != NULL && pile->premier != NULL)
    {
        nombreDepile = elementDepile->nombre;
        pile->premier = elementDepile->suivant;
        free(elementDepile);
    }

    return nombreDepile;
}

void afficherPile(Pile *pile)
{
    /*if (pile == NULL)
    {
        exit(EXIT_FAILURE);
    }
    Element *actuel = pile->premier;

    while (actuel != NULL)
    {
        printf("%d\n", actuel->nombre);
        actuel = actuel->suivant;
    }*/
    Pile *p1=pile;
    while(p1->premier->suivant!= NULL)
    {
        printf("%d \n",p1->premier->nombre);
        depiler(p1);
    }


    printf("\n");
}

int saisie()
{
     int x;
     printf("Donnez un entier \n");
     scanf("%d",&x);
     return x;
}
