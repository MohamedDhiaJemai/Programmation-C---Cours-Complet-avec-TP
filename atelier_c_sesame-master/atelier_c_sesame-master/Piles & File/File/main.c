#include <stdio.h>

typedef struct Element Element;
struct Element
{
    int nombre;
    Element *suivant;
};

typedef struct File File;
struct File
{
    Element *premier;
};
void enfiler(File *file, int nvNombre);
int defiler(File *file);
void afficher();
int saisie();
int main()
{
    int choix;
    File *f=NULL;
    do
    {
         do
         {
              printf("__________Menu__________\n");
              printf("1)Enfiler_______________\n");
              printf("2)Defiler_______________\n");
              printf("3)Affichier la file_____\n)");
              printf("4)Quitter_______________\n");
              printf("________________________\n");
              printf("Donner votre choix \n");
              scanf("%d",&choix);
              switch(choix)
              {
                  case 1 : enfiler(&f,saisie());
                  break;
                  case 2 : defiler(&f);
                  break;
                  case 3 : printf("Afficher File");
                           afficher(&f);
                  break;
                  case 4 : printf("Vous quittez l'application \n");
                  break;
                  default : printf("Choix invalide \n");
                  break;
              }
         }while((choix<1)||(choix>4));
    }while(choix!=4);
    return 0;
}

void enfiler(File *file, int nvNombre)
{
    Element *nouveau = malloc(sizeof(*nouveau));
    if (file == NULL || nouveau == NULL)
    {
        //exit(EXIT_FAILURE);
    }

    nouveau->nombre = nvNombre;
    nouveau->suivant = NULL;

    if (file->premier != NULL) /* La file n'est pas vide */
    {
        /* On se positionne à la fin de la file */
        Element *elementActuel = file->premier;
        while (elementActuel->suivant != NULL)
        {
            elementActuel = elementActuel->suivant;
        }
        elementActuel->suivant = nouveau;
    }
    else /* La file est vide, notre élément est le premier */
    {
        file->premier = nouveau;
    }
}

int defiler(File *file)
{
    if (file == NULL)
    {
        //exit(EXIT_FAILURE);
    }

    int nombreDefile = 0;

    /* On vérifie s'il y a quelque chose à défiler */
    if (file->premier != NULL)
    {
        Element *elementDefile = file->premier;

        nombreDefile = elementDefile->nombre;
        file->premier = elementDefile->suivant;
        free(elementDefile);
    }
    return nombreDefile;
}

int saisie()
{
    int x;
    printf("Donner un nombre \n");
    scanf("%d",&x);
    return x;
}

void afficher(File *f)
{
    if (f == NULL)
    {
        //exit(EXIT_FAILURE);
    }
    Element *actuel = f->premier;

    while (actuel != NULL)
    {
        printf("%d\n", actuel->nombre);
        actuel = actuel->suivant;
    }
    printf("\n");
}
