#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,s1,s2,s3,s4,n,m[20][20];
    printf("Donner La Valeur de N : \n");
    scanf("%d",&n);

     printf("\nRemplissage Du Matrice :\n");

    for(i=0;i<(2*n);i++){
        for(j=0;j<(2*n);j++){
            printf("valeur de [%d][%d] \n",i,j);
            scanf("%d",&m[i][j]);
        }
    }

    s1=0;
    for(i=0;i<n;i++){
         for(j=0;j<n;j++){
            s1=s1+m[i][j];
         }
    }

    s2=0;
    for(i=n;i<(2*n);i++){
         for(j=n;j<(2*n);j++){
            s2=s2+m[i][j];
         }
    }

    s3=0;
    for(i=n;i<(2*n);i++){
         for(j=0;j<n;j++){
            s3=s3+m[i][j];
         }
    }

    s4=0;
    for(i=n;i<(2*n);i++){
         for(j=n;j<(2*n);j++){
            s4=s4+m[i][j];
         }
    }

    printf("La Somme Du 1ere Matrice : %d \n",s1);
    printf("La Somme Du 2eme Matrice : %d \n",s2);
    printf("La Somme Du 3eme Matrice : %d \n",s3);
    printf("La Somme Du 4eme Matrice : %d \n",s4);

    if((s1==s2)&&(s2==s3)&&(s3==s4))
        printf("C'est Une Matrice Equitable\n");
    else
        printf("N'est pas Equitable");
    return 0;
}
