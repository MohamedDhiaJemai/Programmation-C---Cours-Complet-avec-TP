#include <stdio.h>
#include <stdlib.h>

void initialiser_taquin(int m[4][4]){
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            do{
                printf("M[%d %d] : ",i,j);
                if ((i==3)&&(j==3)) m[i][j]=0;
                    else
                        scanf("%d",&m[i][j]);
            }while (m[i][j]>16);
        }
    }
}

void afficher_taquin(int m[4][4]){
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d | \t",m[i][j]);
        }
        printf("\n");
    }
}

int verifier_jeton (int x, int m[4][4]){
    int a,b,i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if (m[i][j]==x) {
                a=i; b=j;
            }
        }
    }
    if ((m[a+1][b]==0) return 1;
        else if (m[a-1][b]==0) return 1;
            else if (m[a][b+1]==0)return 1;
                else if(m[a][b-1]==0)) return 1;
                    else return 0;
}

void glisser_jeton (int x,int m[4][4]){
    int i,j,a,b,c,d;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if (m[i][j]==x) {
                a=i;
                b=j;
            }
            if (m[i][j]==0){
                c=i;
                d=j;
            }
        }
    }
    m[c][d]=m[a][b];
    m[a][b]=0;
}

int verifier_etat(int m[4][4]){
    int i,j,k=0,b=1;
    int t[16];
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            t[k]=m[i][j];
            k++;
        }
    }
    for(i=0;i<14;i++){
        if (t[i]>t[i+1]) {b=0; break;}
        else b=1;
    }
    return b;
}

int main()
{
    int m[4][4];
    int x;
    initialiser_taquin(m);
    printf("\n \n");
    afficher_taquin(m);
    do{
        printf("\nDonner un Jeton : \n");
        scanf("%d",&x);

        if (verifier_jeton (x,m)==1)
            glisser_jeton(x,m);
        else
            printf("\nImpossible \n");
        afficher_taquin(m);

    }while(verifier_etat(m)!=1);

    if (verifier_etat(m)==1) printf("\nJeu Terminer \n");
    return 0;
}
