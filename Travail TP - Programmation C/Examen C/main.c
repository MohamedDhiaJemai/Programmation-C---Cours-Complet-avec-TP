#include <stdio.h>
#include <stdlib.h>

void initialiser_echiquier(int t, char m[8][8]){
    int i,j;
    for(i=0;i<t;i++){
        for(j=0;j<t;j++){
            m[i][j]='-';
        }
    }
}

void afficher_echiquier(int t, char m[8][8]){
    int i,j;
    for(i=0;i<t;i++){
        for(j=0;j<t;j++){
            printf("%c\t",m[i][j]);
        }
        printf("\n");
    }
}


int verifier_case(char m[8][8],int i,int j){
    if (m[i][j]=='-'){ return(1); }
    else { return(0); }

}

void placer_reine(char m[8][8]){
     int i,j,x,y;
     printf("Donner la ligne: \n");
     scanf("%d",&i);
     printf("Donenr la colone: \n");
     scanf("%d",&j);
     if ((verifier_case(m,i,j))==1)
        m[i][j]='R';
    x=i; // x = Ligne
    y=j; // y = Colone
    for(i=0;i<x;i++){
        m[i][y]='X';
    }
    for(i=(x+1);i<8;i++){
        m[i][j]='X';
    }
    for(j=0;j<y;j++){
        m[x][j]='X';
    }
    for(j=(y+1);j<8;j++){
        m[x][j]='X';
    }

    /*for(i=0;i<8;i++){
        for(j=8;j>0;j--){
                if(m[i][j]!='R'){
                    m[i][j]='X';
                }
        }
    }
*/
    i=x;
    j=y;
    do{
        i--;
        j++;
        m[i][j]='X';
    }while((i!=0)&&(j!=7));
    i=x;j=y;
    do{
        i++;
        j--;
        m[i][j]='X';
    }while((i!=7)&&(j!=0));

     i=x;j=y;
    do{
        x++;
        y++;
        m[x][y]='X';
    }while((x!=7)&&(y!=7));
 i=x;j=y;
    do{
        x--;
        y--;
        m[x][y]='X';
    }while((x!=0)&&(y!=0));
}



int main()
{
     int m[8][8];
     int i,j,t=8,c;
     initialiser_echiquier(t,m);
     afficher_echiquier(t,m);
     placer_reine(m);
     afficher_echiquier(t,m);
     return(0);


}




