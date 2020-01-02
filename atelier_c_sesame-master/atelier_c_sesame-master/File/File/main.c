#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *PFILE;
    char NomFichier[30];
    printf("Donner le nom de fichier \n");
    scanf("%s",NomFichier);
    //PFILE=fopen(NomFichier,"w");
    PFILE=fopen(NomFichier,"r");
    if(!PFILE)
    {
        printf("\a Impossible d'ouvrvr le fichier %s \n",NomFichier);
    }
    else
    {
        printf("Fichier ouivert avec succes \n");
    }
    fclose(PFILE);
    return 0;
}
