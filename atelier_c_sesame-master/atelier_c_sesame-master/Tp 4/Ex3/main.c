#include <stdio.h>
int main()
{
    int T[100], val;
    int k, i,n;
    do
    {
        printf("Donner la taille du tableau \n");
        scanf("%d",&n);
    }while((n>100)||(n<0));

    printf("Donnez %d valeurs\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &T[i]);
    }
    printf("Donnez la position d'insertion de la valeur qui doit etre inferieur ou egal a %d \n",n);
    scanf("%d", &kco);
    while (k>n || k<0)
    {
        printf("Erreur (la position doit etre entre 0 et 5).\n\n Recommencez :\t");
        scanf("%d", &k);
    }
    printf("Donnez la valeur a inserer\n");
    scanf("%d", &val);

    for(i=n;i>k;i--)
    {
       T[i]=T[i-1];
    }
    T[k]=val;

    for(i=0;i<n;i++)
    {
        printf("%d | ",T[i]);
    }
    return 0;
}
