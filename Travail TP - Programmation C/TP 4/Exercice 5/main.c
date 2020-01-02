#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,j,tab[30],t[30],tableau[30];

    printf("Taile Du Tableau 1 : \n");
    scanf("%d",&n);

    for (i=0; i<n ; i++){
        do{
          printf("Case [%d] : ",i);
          scanf("%d",&t[i]);
        }while((t[i]<=0) && (t[i]>=20));
    }

    printf("\n Taile Du Tableau 2 : \n");
    scanf("%d",&m);

    for (j=0; j<m ; j++){
        do{
          printf("Case [%d] : ",j);
          scanf("%d",&tab[j]);
        }while((tab[j]<=0) && (tab[j]>=20));
    }

    for(i=0; i<(n+m); i++){
        if (i<n) tableau[i]=t[i];
        else tableau[i]= tab [i-n];
    }

    printf("\n Fusionnement Des Tableaux : \n");
    for (i=0;i<(n+m);i++){
        printf ("%d|",tableau[i]);
    }

    return 0;
}
