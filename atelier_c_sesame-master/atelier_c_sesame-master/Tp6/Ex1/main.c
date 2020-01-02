#include <stdio.h>

int tab[10];
void SaisirTab(int tab[10],int n);
int PlusSouvent(int tab[10],int n);
void AfficherTab(int tab[10],int b);

int main()
{
    int tab[100];
    int n;
    printf("Donner n \n");
    scanf("%d",&n);
    SaisirTab(tab,n);
    printf("La valeur qui apparait le plus souvent dans le tableau est %d \n",PlusSouvent(tab,n));
    printf("\n");
    AfficherTab(tab,n);
    return 0;
}

void SaisirTab(int tab[10], int n)
{
   int i;
   for(i=0;i<n;i++)
   {

       printf("tapez la case %d \n",i+1);
       scanf("%d",&tab[i]);
   }
}

int PlusSouvent(int tab[10],int n)
{
    int i,j,occ,nocc,ps,eps;

    ps=0;
    eps=0;
    occ=0;
    nocc=0;

    for(i=0;i<n;i++)
    {
        occ=tab[i];
        for(j=i;j<n;j++)
        {
            if(tab[j]==occ)
            {
               nocc++;
            }
        }
        if(nocc>ps)
        {
           ps=nocc;
           eps=occ;
        }
        nocc=0;
    }
    return eps;
}

void AfficherTab(int tab[10],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d | ",tab[i]);
    }
}
