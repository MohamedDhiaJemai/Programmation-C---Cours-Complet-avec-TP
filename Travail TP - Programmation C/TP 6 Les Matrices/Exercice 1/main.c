#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i,j,k;
    int m1[20][20];
    int m2[20][20];
    int m3[20][20];

    printf("Donner La Taille Des Deux Matrice carre : \n");
    scanf("%d",&t);

    printf("\nRemplissage Du Matrice Num : 1 \n");

    for(i=0;i<t;i++){
        for(j=0;j<t;j++){
            printf("valeur de [%d][%d] \n",i,j);
            scanf("%d",&m1[i][j]);
        }
    }

    printf("\nRemplissage Du Matrice Num : 2 \n");

    for(i=0;i<t;i++){
        for(j=0;j<t;j++){
            printf("valeur de [%d][%d] \n",i,j);
            scanf("%d",&m2[i][j]);
        }
    }


    for(i=0;i<t;i++){
        for(j=0;j<t;j++){
                m3[i][j]=0;
            for(k=0;k<t;k++){
                m3[i][j]=m3[i][j]+m1[i][k]*m2[k][j];
            }
        }
    }

    printf("\nL'affichage Du 3eme Matice : \n");
    for(i=0;i<t;i++){
        for(j=0;j<t;j++){
            printf("valeur de [%d][%d] %d\n",i,j,m3[i][j]);
        }
    }

    return 0;
}
