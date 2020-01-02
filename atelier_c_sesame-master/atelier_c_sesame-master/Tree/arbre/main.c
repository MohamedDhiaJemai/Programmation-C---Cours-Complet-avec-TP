#include <stdlib.h>

typedef struct arbre Arbre;
typedef struct list List;

struct arbre
{
    int val;
    List *enfants;
};

struct list
{
    Arbre *node;
    List *next;
};
int taille(Arbre *noeud);
List *cons(Arbre *arbre, List *liste);

int main(void)
{
    Arbre G = {'G', NULL}, H = {'H', NULL}, I = {'I', NULL};
    Arbre F = {'F', cons(&G, cons(&H, cons(&I, NULL)))};
    Arbre D = {'D', NULL}, E = {'E', NULL};
    Arbre C = {'C', cons(&F, NULL)};
    Arbre B = {'B', cons(&D, cons(&E, NULL))};
    Arbre A = {'A', cons(&B, cons(&C, NULL))};
    //Tree algorithme
    return 0;
}

List *cons(Arbre *arbre, List *liste)
{
    List *elem;
    if ((elem = malloc(sizeof *elem)) == NULL)
        return NULL;
    elem->node = arbre;
    elem->next = liste;
    return elem;
}

int taille(Arbre *noeud)
{
    List *enfants;
    int compteur = 1;
    for (enfants = noeud->enfants; enfants != NULL; enfants = enfants->next)
        compteur += taille(enfants->node);
    return compteur;
}
