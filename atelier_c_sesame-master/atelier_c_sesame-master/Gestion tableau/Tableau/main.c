#include <stdio.h>

void saisie(int *n);
void remplir(int n , int *tab);
void afficher(int n , int tab[50]);
void insertion(int e , int p , int *n , int *tab);
void supprimer(int p , int *n , int *tab);
void modifier(int e , int p , int *n , int *tab);
void tri(int *tab , int n);

int main()
{

    int n;
    int tab[50];
    int choix;
    int p,e;
    saisie(&n);
    do
    {
          printf("**************Menu*******************\n");
          printf("1)Remplir le tableau*****************\n");
          printf("2)Afficher le tableau ***************\n");
          printf("3)Ajouter un element*****************\n");
          printf("4)Supprimer un element***************\n");
          printf("5)Modifier un element****************\n");
          printf("6)Trier le tableau*******************\n");
          printf("7)Quitter****************************\n");
          printf("*************************************\n");
          printf("\n");
          do
          {
               printf("Tapez votre choix \n");
               scanf("%d",&choix);
               switch(choix)
               {
                    case 1 : remplir(n,tab);
                    break;
                    case 2 : afficher(n,tab);
                    break;
                    case 3 : printf("Insérer un élément \n");
                             do
                             {
                                 printf("Donner la position \n");
                                 scanf("%d",&p);
                             }while((p>n)||(p<1));
                             printf("Donner un nombre pour l'inserer \n");
                             scanf("%d",&e);
                             insertion(e,p,&n,tab);
                    break;
                    case 4 : do
                             {
                                 printf("Donner la position \n");
                                 scanf("%d",&p);
                             }while((p>n)||(p<1));
                             supprimer(p,&n,tab);
                    break;
                    case 5 :
                             do
                             {
                                 printf("Donner la position \n");
                                 scanf("%d",&p);
                             }while((p>n)||(p<1));
                             printf("Donner le valeur \n");
                             scanf("%d",&e);
                             modifier(e,p,&n,tab);
                    break;
                    case 6 : tri(tab,n);
                    break;
                    case 7 :  system("clear");
                              printf("Fin d'éxecustion \n");
                    break;
                    default : printf("\n");
               }
          }while((choix<1)||choix>7);
    }while(choix!=7);

    return 0;
}

void saisie(int *n)
{
    int x;
    do
    {
        printf("Donner la taille du tableau \n");
        scanf("%d",&x);
    }while((x>50)||(x<1));
    *n=x;
}

void remplir(int n , int *tab)
{
    int i;
    for (i=0;i<=n;i++)
    {
         printf("Tapez la case %d \n",i);
         scanf("%d",&tab[i]);
    }
}

void afficher(int n , int tab[50])
{
     int i;
     for(i=0;i<=n;i++)
     {
         printf("%d |",tab[i]);
     }
     printf("\n");
}

void insertion(int e , int p , int *n , int *tab)
{

     int i;
     if(*n+1==p)
     {
          tab[p]=e;
          *n++;
     }
     else
     {
          for(i=*n;i>=p;i--)
          {
              tab[i+1]=tab[i];
          }
          tab[p]=e;
          *n=*n+1;
     }
}

void supprimer(int p , int *n , int *tab)
{
     int i;
     if(*n==p)
     {
         *n=*n-1;
     }
     else
     {
          for(i=p;i<*n;i++)
          {
               tab[i]=tab[i+1];
          }
          *n=*n-1;
     }
}

void modifier(int e , int p , int *n , int *tab)
{
    tab[p]=e;
}

void tri(int *tab , int n)
{
     int nb,i,aux;
     do
     {
         nb=0;
         for(i=0 ; i<n ; i++)
         {
              if(tab[i]>tab[i+1])
              {
                   aux=tab[i];
                   tab[i]=tab[i+1];
                   tab[i+1]=aux;
                   nb++;
              }
         }
     }while(nb!=0);
}
