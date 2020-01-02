#include <stdio.h>
#include<math.h>s
//int max(int tab[100],int n);
//int min(int tab[100],int n);
void main()
{
    int tab[100];
    int n;
    int i;
    int valeur;
    printf("Donner la taille de tableau \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("tapez la case %d \n",i+1);
        scanf("%d",&tab[i]);
    }

    printf("La temperature etendue est %d \n",tempiratureEtendue(tab,n));
    printf("La moyenne est %d \n",moyenne(tab,n));
    printf("La déviation est %d \n",deviation(tab,n));
    printf("Donnez une valeur \n");
    scanf("%d",&valeur);
    printf("La valeur la petit relvé est %d \n",plusRelve(tab,n,valeur));
    return 0;
}

int max(int tab[100],int n)
{
    int m,i;
    m=tab[0];
    for(i=0;i<n;i++)
    {
       if(m<tab[i])
       {
           m=tab[i];
       }
    }
    return m;
}

int min (int tab[100],int n)
{
    int m,i;
    m=tab[0];
    for(i=0;i<n;i++)
    {
       if(m>tab[i])
       {
           m=tab[i];
       }
    }
    return m;
}

int tempiratureEtendue(int tab[100],int n)
{
     return max(tab,n)-min(tab,n);
}

int moyenne(int tab[100],int n)
{
     int somme,i;
     somme=0;
     for(i=0;i<n;i++)
     {
        somme+=tab[i];
     }
     return somme/n;
}

int deviation(int tab[100],int n)
{
     int i,somme=0 ;
     for(i=0;i<n;i++)
     {
         somme+=abs(moyenne(tab,n)-tab[i]);
     }
     return somme/n;
}

int plusRelve(int tab[100],int n,int valeur)
{
    int x;
    for(int i=0;i<n;i++)
    {
        if(valeur>=tab[i])
        {
             x=tab[i];
        }
    }
    return x;
}
