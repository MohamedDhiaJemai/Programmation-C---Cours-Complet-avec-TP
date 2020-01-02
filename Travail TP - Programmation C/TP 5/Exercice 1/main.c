#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch[200];
    int x,i,nbre=0;
    printf("Donner Une Ligne De Texte :\n");
    scanf("%s",&ch);

    x=strlen(ch);
    printf("La Longeur De Votre Chaine est : %d \n",x);

    for (i=0;i<x;i++){
        if (ch[i]=='f')
            nbre++;
    }

    printf("Le Nombre D'appartion de F est : %d \n",nbre);

    return 0;
}
