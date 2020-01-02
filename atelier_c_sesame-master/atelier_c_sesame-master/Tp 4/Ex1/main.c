#include <stdio.h>
int main()
{
    int const TAILLE=100;
    int tab[TAILLE];
    int n,i,pos,somme,max,v;
    do
    {
        printf("Donner un nombre \n");
        scanf("%d",&n);
    }while((n>100)||(n<0));
    for(i=0;i<n;i++)
    {
        printf("Remplir la case %d \n",i+1);
        scanf("%d",&tab[i]);
    }
    max=tab[0];
    v=tab[0]*tab[0];
    somme=tab[0];
    for(i=1;i<n;i++)
    {
        somme+=tab[i];
        v+=tab[i]*tab[i];
        if(tab[i]>max)
        {
           max=tab[i];
           pos=i;
        }
    }
    printf("Le max est %d la postiotion est %d \n",max,i);
    printf("La somme de ce tableau est %d \n",somme);
    printf("La moyenne est %d \n",somme/n);
    printf("La varience est %d \n",v/n);
    return 0;
}
