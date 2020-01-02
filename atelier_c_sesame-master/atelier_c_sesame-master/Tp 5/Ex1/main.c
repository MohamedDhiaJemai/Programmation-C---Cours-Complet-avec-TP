#include <stdio.h>
#include<string.h>
int main()
{
    char ch[50];
    int i;
    puts("Saisir la chaine ");
    gets(ch);
    printf("La chaine est %s \n",ch);
    for(i=0;i<=strlen(ch);i++)
    {
        printf("L'adresse de de la case %d sa valeur est %c est %d \n",i,ch[i],&ch[i]);
    }
    return 0;
}
