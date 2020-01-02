#include <stdio.h>
#include <stdlib.h>

void saisie(int *n);
void remplir(int n , int M[20][20]);
void afficher(int n , int M[20][20]);
void Trier(int n , int M[20][20]);
void Inverser(int n , int M[20][20]);
void Pascal(int P[8][8]);
void saisie1(int *n);
void saisie1(int *n)
{
     printf("Donner n \n");
     scanf("%d",n);
}
int main()
{
    int n;
    saisie1(&n);
    printf("Le valeur de n est %d \n",n);
/*
    int n,choix;
    int M[20][20];
    int P[8][8];
    saisie(&n);
    do
    {
         printf("*******************Menu***********************\n");
         printf("1)Remplir la matrice**************************\n");
         printf("2)Trier la matrice****************************\n");
         printf("3)Inverser la matrice*************************\n");
         printf("4)Afficher************************************\n");
         printf("5)Triangle de Pascal**************************\n");
         printf("6)Quitter*************************************\n");
         printf("**********************************************\n");
         printf("\n");
         do
         {
              printf("Donner votre choix \n");
              scanf("%d",&choix);
              system("clear");
              switch(choix)
              {
                  case 1 : remplir(n,M);
                  break;
                  case 2 : Trier(n,M);
                  break;
                  case 3 : Inverser(n,M);
                  break;
                  case 4 : afficher(n,M);
                  break;
                  case 5 : Pascal(P);
                  break;
                  case 6 : system("clear");
                           printf("Vous quittez cette appliquation \n");
                  default : printf("Vérifier votre choix \n");
                  break;
              }
         }while((choix < 1 ) || (choix >6));
    }while(choix != 6);
    */
    return 0;
}

void saisie(int *n)
{
    int x;
    do
    {
        printf("Donner la taille de la matrice carree \n");
        scanf("%d",&x);
    }while((x>20)||(x<1));
    *n=x;
}

void remplir(int n , int M[20][20])
{
     int i,j;
     int x;
     for(i=0 ; i<n ; i++)
     {
          for(j=0 ; j<n ; j++)
          {
              printf("Tapez la case %d de la ligne %d ",j,i);
              scanf("%d",&x);
              M[i][j]=x;
          }
     }
}

void afficher(int n , int M[20][20])
{
    int i,j;
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
              printf("%d ",M[i][j]);
        }
        printf("\n");
    }
}

void Trier(int n , int M[20][20])
{
    int nb,aux,i,j,k=0;
    int t[40];
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
             t[k]=M[i][j];
             k=k+1;
        }
    }
    do
    {
         nb=0;
         for (k=0 ; k<n*n-1 ; k++)
         {
              if(t[k]>t[k+1])
              {
                  aux=t[k];
                  t[k]=t[k+1];
                  t[k+1]=aux;
                  nb++;
              }
         }
    }while(nb!=0);
    k=0;
    for(i=0 ; i<n ; i++)
    {
       for( j=0 ; j<n ; j++)
       {
            M[i][j]=t[k];
            k++;
       }
    }
    printf("\n");
}

void Inverser(int n , int M[20][20])
{
     printf("\n");
     int i=0,j,aux;
     for(i=0 ; i<n ; i++)
     {
         for(j=0 ; j<i ; j++)
         {
              aux=M[i][j];
              M[i][j]=M[j][i];
              M[j][i]=aux;
         }
         printf("\n");
     }
     printf("\n");
}
void Pascal(int P[8][8])
{
    int i,j;
    for(i=0;i<8;i++)
    {
        for(j=0 ; j<i ; j++)
        {
             if ( (i==j) || (j==0) )
             {
                  P[i][j]=1;
             }
             else
             {
                 P[i][j]=P[i-1][j-1]+P[i][j-1];
             }
        }
    }

    for(i=0;i<8;i++)
    {
        for(j=0 ; j<i ; j++)
        {
            printf("%d ",P[i][j]);
        }
        printf("\n");
    }
}
