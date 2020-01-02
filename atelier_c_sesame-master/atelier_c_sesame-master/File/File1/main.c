#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#define ENTREE "entree.txt"
#define SORTIE "sortie.txt"

int main(void)
{
    FILE *f_in , *f_out;
    int c;
    if((f_in = fopen(ENTREE,"r"))==NULL)
    {
        fprintf(stderr,"\n Erreur : impossible de lire le fichier %s \n",ENTREE);
        return (EXIT_FAILURE);
    }
    if((f_out=fopen(SORTIE,"w"))==NULL)
    {
        fprintf(stderr,"\n Erreur : impossible d'ecrire le fichier %s \n",SORTIE);
        return (EXIT_FAILURE);
    }

    while(( c=fgetc(f_in))!= EOF)
    {
        //fprintf(f_out , "%c" , c);
        fputc(c,f_out);
    }
    fclose(f_in);
    fclose(f_out);
    system("cat sortie.txt");
    return (EXIT_SUCCESS);
}
