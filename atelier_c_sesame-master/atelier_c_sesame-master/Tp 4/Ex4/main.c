#include <stdio.h>
void main()
{
    int i,j,n,ligne;
    int mat[100][100];
    do
    {
       printf("Donner un nombre n \n");
       scanf("%d",&n);
    }while((n<2)||(n>100));
    for(i=0 ;i<n;i++)
    {
       for(j=0;j<i;j++)
       {
           if((j==0)||(i==j))
           {
               mat[i][j]=1;
           }
           else
           {
               mat[i][j]=mat[i-1][j-1]+mat[i-1][j];
           }
       }
    }
    printf("L'affichage du Triangle de Pascal \n");
    for(i=0 ;i<n;i++)
    {
       for(j=0;j<i;j++)
       {
           printf("%d ",mat[i][j]);
       }
       printf("\n");
    }
    do
    {
         printf("Donner la ligne \n");
         scanf("%d",&ligne);
    }while((ligne>n)||(ligne<0));

    for(j=0;j<n;j++)
    {
        if(mat[ligne][j]!=0)
        {
            printf("le %d éme ligne est %d",ligne,mat[l][j]);
        }
    }
}
