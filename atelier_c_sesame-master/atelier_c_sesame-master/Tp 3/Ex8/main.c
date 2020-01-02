#include <stdio.h>

int main()
{
    int n1,n2,i;
    printf("Donner un nombre 1\n");
    scanf("%d",&n1);
    printf("Donner un nombre 2 \n");
    scanf("%d",&n2);
    int s1=1;
    for(i=2;i<=n1;i++)
    {
        if(n1%i==0)
        {
            s1+=i;
        }
    }

    int s2=1;
    for(i=2;i<=n2;i++)
    {
        if(n2%i==0)
        {
            s2+=i;
        }
    }
    //printf("La somme de diviseurs de n1 et n2 sont %d et %d \n",s1,s2); //Affichage pour vérifier la somme de deux diviseurs
    if(s1==s2)
    {
        printf("%d et %d sont nombre amis \n",n1,n2);
    }
    else
    {
         printf("%d et %d ne sont pas amis \n",n1,n2);
    }
    return 0;
}
/*
Math
Electronique
System logique
Graphe
*/
