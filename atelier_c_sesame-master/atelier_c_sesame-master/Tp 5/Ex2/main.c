#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main(void)
{
    int jour;
    char ch[10];
    do
    {
         printf("Donner le nombre de jour \n");
         scanf("%d",&jour);
    }while((jour>7)||(jour<1));
    switch(jour)
    {
        case 1 : strcpy(ch,"Lundi");
        break;
        case 2 : strcpy(ch,"Mardi");
        break;
        case 3 : strcpy(ch,"Mercredi");
        break;
        case 4 : strcpy(ch,"jeudi");
        break ;
        case 5 : strcpy(ch,"Vendredi");
        break;
        case 6 : strcpy(ch,"Samedi");
        break;
        case 7 : strcpy(ch,"Dimanche");
        break;
    }
    printf("Le jour est %s \n",ch);
    return 0;
}
