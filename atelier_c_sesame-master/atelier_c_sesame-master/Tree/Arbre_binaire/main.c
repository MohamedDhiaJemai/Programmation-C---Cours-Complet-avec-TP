#include "tree.h"
#include<stdio.h>
/**
* Créée un nouvel Arbre
* @param x La valeur de la racine
* @return Le nouvel arbre créé
*/
Tree *new_tree(int x)
{
	Tree *tr = malloc(sizeof(*tr));

	if(tr == NULL)
	{
		fprintf(stderr, "Erreur allocation memoire.\n");
		exit(EXIT_FAILURE);
	}

	tr->value = x;
	tr->parent = NULL;
	tr->tleft = NULL;
	tr->tright = NULL;

	//Aide pour le développeur
	//printf("Creation de %d...\n", tr->value);

	return tr;
}

/*-----------------------------------------------------------------------*/

/**
* Nettoie un arbre
* @param tr L'arbre à vider de ses valeurs
*/
void clean_tree(Tree *tr)
{
	if(tr == NULL)
		return;

	//Aide pour le développeur
	//printf("Suppression de %d...\n", tr->value);

	clean_tree(tr->tleft);
	clean_tree(tr->tright);

	free(tr);
}

/*-----------------------------------------------------------------------*/

/**
* Joint deux arbres pour n'en former qu'un
* @param left L'arbre de gauche
* @param right L'arbre de droite
* @param node Le noeud qui lie les deux arbres
* @return Le nouvel arbre formé
*/
Tree *join_tree(Tree *left, Tree *right, int node)
{
	Tree *tr = new_tree(node);

	tr->tleft = left;
	tr->tright = right;

	if(left != NULL)
		left->parent = tr;
	if(right != NULL)
		right->parent = tr;

	return tr;
}

/*-----------------------------------------------------------------------*/

/**
* Affiche un arbre récursivement (parcours préfixé)
* @param tr L'arbre à parcourir
*/
void print_tree_prefix(Tree *tr)
{
	if(tr == NULL)
		return;

	if(tr->parent != NULL)
    	printf("(%d) -> %d\n", tr->parent->value, tr->value);
    else
    	printf("(%d)\n", tr->value);

    if(tr->tleft != NULL)
    	print_tree_prefix(tr->tleft);

    if(tr->tright != NULL)
    	print_tree_prefix(tr->tright);
}

/*-----------------------------------------------------------------------*/

/**
* Compte le nombre de noeuds d'un arbre
* @param tr L'arbre dont il faut compter les noeuds
* @return Le nombre de noeuds de l'arbre binaire
*/
int count_tree_nodes(Tree *tr)
{
	if(tr == NULL)
		return 0;

	return (count_tree_nodes(tr->tleft) + count_tree_nodes(tr->tright) + 1);
}

int main()
{
    Tree t;
    t=*new_tree(5);
    t=*new_tree(6);
    t=*new_tree(7);
    printf("there are %d nodes \n",count_tree_nodes(&t));
    return 0;
}
