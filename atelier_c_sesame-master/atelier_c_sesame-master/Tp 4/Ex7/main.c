#include <stdio.h>
int main()
{
    int mat1[100][100] ;
    int mat2[100][100] ;
    int mat3[100][100] ;
    int mat4[100][100] ;
    int n,i,j;
    do
    {
          printf("Donner la taille de n \n");
          scanf("%d",&n);
    }while((n>100)||(n<0));

    printf("Remplir la matrice 1 \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           scanf("%d",&mat1[i][j]);
        }
    }

    printf("Remplir la matrice 2 \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           scanf("%d",&mat2[i][j]);
        }
    }

    printf("Afficher la matrice 1 \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Afficher la matrice 2 \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
        printf("\n");
    }
    printf("\n");
    printf("La somme de deux matrices \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d | ",mat2[j][i]);
           mat4[i][j]+=(mat1[i][j]*mat2[j][i]);
        }

    }
    printf("\n");
    printf("Le produit de deux matrices \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d ",mat4[i][j]);
        }
        printf("\n");
    }
    return 0;
}
