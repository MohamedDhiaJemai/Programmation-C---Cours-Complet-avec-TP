#include <stdio.h>

typedef float TypeDonnee;
typedef struct
{
    int nb_elem; /* nombre d’éléments dans la pile */
    int nb_elem_max; /* capacité de la pile */
    TypeDonnee *tab; /* tableau contenant les éléments */
}Pile;

int main()
{
    Pile pilevide;
    pilevide.nb_elem = 0; /* la pile est vide */
    pilevide.nb_elem_max = 50; /* capacité nb_max */
    /* allocation des éléments : */
    pilevide.tab = (int*)malloc(50*sizeof(int));
    Empiler(&pilevide,2);

    return 0;
}

Pile Initialiser(int nb_max)
{
    Pile pilevide;
    pilevide.nb_elem = 0; /* la pile est vide */
    pilevide.nb_elem_max = nb_max; /* capacité nb_max */
    /* allocation des éléments : */
    pilevide.tab = (TypeDonnee*)malloc(nb_max*sizeof(TypeDonnee));
    return pilevide;
}

int EstVide(Pile P)
{
    /* retourne 1 si le nombre d’éléments vaut 0 */
    return (P.nb_elem == 0) ? 1 : 0;
}

int EstPleine(Pile P)
{
    /* retourne 1 si le nombre d’éléments est supérieur */
    /* au nombre d’éléments maximum et 0 sinon */
    return (P.nb_elem >= P.nb_elem_max) ? 1 : 0;
}

int AccederSommet(Pile P, TypeDonnee *pelem)
{
    if (EstVide(P))
    {
          return 1; /* on retourne un code d’erreur */
    }
    *pelem = P.tab[P.nb_elem-1]; /* on renvoie l’élément */
    return 0;
}

int Empiler(Pile* pP, int elem)
{
    if (EstPleine(*pP))
    {
         return 1; /* on ne peut pas rajouter d’élément */
    }
    pP->tab[pP->nb_elem] = elem; /* ajout d’un élément */
    pP->nb_elem++; /* incrémentation du nombre d’éléments */
    return 0;
}

char Depiler(Pile *pP, TypeDonnee *pelem)
{
    if (EstVide(*pP))
    {
         return 1; /* on ne peut pas supprimer d’élément */
    }
    *pelem = pP->tab[pP->nb_elem-1]; /* on renvoie le sommet */
    pP->nb_elem--; /* décrémentation du nombre d’éléments */
    return 0;
}

void Vider(Pile *pP)
{
     pP->nb_elem = 0; /* réinitialisation du nombre d’éléments */
}

void Detruire(Pile *pP)
{
     if (pP->nb_elem_max != 0)
     {
          free(pP->tab); /* libération de mémoire */
     }
     pP->nb_elem = 0;
     pP->nb_elem_max = 0; /* pile de taille 0 */
}
