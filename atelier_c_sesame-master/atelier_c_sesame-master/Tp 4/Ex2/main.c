#include <stdio.h>
int main()
{
    int n,nb,i,v;
    int tab[100];
    do
    {
        printf("Donner un nombre positif \n");
        scanf("%d",&n);
    }while(n<0);

    for(i=0;i<n;i++)
    {
        printf("Remplir la case %d \n",i+1);
        scanf("%d",&tab[i]);
    }
    printf("Donner un nombre \n");
    scanf("%d",&v);
    nb=0;
    for(i=0;i<n;i++)
    {
        if(tab[i]==v)
        {
            nb++;
        }
    }
    printf("Le nombre d'occurance de %d est %d \n",v,nb);
}
