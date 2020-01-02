#include <stdio.h>
#include <stdlib.h>

typedef struct element element;
struct element
{
    int val;
    struct element *nxt;
};

typedef element* llist;
llist ajouterEnTete(llist liste, int valeur);
llist ajouterEnFin(llist liste, int valeur);
void afficherListe(llist liste);
void initializer(llist *liste);
int isEmpty(llist liste);
llist supprimerElementEnTete(llist liste);
llist supprimerElementEnFin(llist liste);
llist rechercherElement(llist liste, int valeur);
void rechercher(llist liste, int valeur);
int saisie();
int main()
{
    llist ma_liste = NULL;
    int choix;
    do
    {
        do
        {
             printf("____________Menu____________\n");
             printf("1)Ajouter au debut__________\n");
             printf("2)Ajouter à la fin__________\n");
             printf("3)Afficher la liste_________\n");
             printf("4)Chercher un element_______\n");
             printf("5)Quitter___________________\n");
             printf("____________________________\n");
             printf("Donnez votre choix \n");
             scanf("%d",&choix);
             switch(choix)
             {
                  case 1 : ma_liste=ajouterEnTete(ma_liste,saisie());
                  break;
                  case 2 : ma_liste=ajouterEnFin(ma_liste,saisie());
                  break;
                  case 3 : afficherListe(ma_liste); printf("\n");
                  break;
                  case 4 : rechercher(ma_liste,saisie());
                  break;
                  case 5 : printf("Vous quittez l'application \n");
                  break;
                  default : printf("Choix invalide \n");
                  break;
             }
        }while((choix<1)||(choix>5));
    }while(choix!=5);
    return 0;
}

llist ajouterEnTete(llist liste, int valeur)
{
    element* nouvelElement = malloc(sizeof(element));
    nouvelElement->val = valeur;
    nouvelElement->nxt = liste;
    return nouvelElement;
}

llist ajouterEnFin(llist liste, int valeur)
{
    element* nouvelElement = malloc(sizeof(element));
    nouvelElement->val = valeur;
    nouvelElement->nxt = NULL;

    if(liste == NULL)
    {
        return nouvelElement;
    }
    else
    {
        element* temp=liste;
        while(temp->nxt != NULL)
        {
            temp = temp->nxt;
        }
        temp->nxt = nouvelElement;
        return liste;
    }
}

void afficherListe(llist liste)
{
    element *tmp = liste;
    while(tmp != NULL)
    {
        printf("%d ", tmp->val);
        tmp = tmp->nxt;
    }
}

void initializer(llist *liste)
{
     *liste=NULL;
}

int isEmpty(llist liste)
{
      if(liste==NULL)
      {
            return 1;
      }
      else
      {
            return 0;
      }
}

llist supprimerElementEnTete(llist liste)
{
    if(liste != NULL)
    {
        element* aRenvoyer = liste->nxt;
        free(liste);
        return aRenvoyer;
    }
    else
    {
        return NULL;
    }
}

llist supprimerElementEnFin(llist liste)
{
    if(liste == NULL)
    {
        return NULL;
    }

    if(liste->nxt == NULL)
    {
        free(liste);
        return NULL;
    }
    element* tmp = liste;
    element* ptmp = liste;
    while(tmp->nxt != NULL)
    {
        ptmp = tmp;
        tmp = tmp->nxt;
    }
    ptmp->nxt = NULL;
    free(tmp);
    return liste;
}

llist rechercherElement(llist liste, int valeur)
{
    element *tmp=liste;
    while(tmp != NULL)
    {
        if(tmp->val == valeur)
        {
            return tmp;
        }
        tmp = tmp->nxt;
    }
    return NULL;
}

int saisie()
{
    int n;
    printf("Donnez un nombre \n");
    scanf("%d",&n);
    return n;
}

void rechercher(llist liste, int valeur)
{
    int test;
    element *tmp = liste;
    while(tmp != NULL)
    {
         if(tmp->val==valeur)
         {
              test=1;
              break;
         }
         else
         {
             tmp=tmp->nxt;
             test=0;
         }
    }
    if(test==1)
    {
        printf("%d est Exist dans la liste \n",valeur);
    }
    else
    {
        printf("%d est n'existe pas dans la liste \n",valeur);
    }
}
