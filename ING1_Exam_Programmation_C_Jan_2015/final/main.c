#include <stdio.h>
#include <stdlib.h>

void initialiser_echiquier(char m[8][8]){
    int i,j;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            m[i][j]='-';
        }
    }
}

void afficher_echiquier(char m[8][8]){
    int i,j;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
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
     scanf("%d",&x);
     printf("Donenr la colone: \n");
     scanf("%d",&y);
     if ((verifier_case(m,x,y))==1){
        m[x][y]='R';

        for(j=0;j<8;j++){
            if(m[x][j]=='R') m[x][j]='R';
            else m[x][j]='X';
        }

        for(i=0;i<8;i++){
                if(m[i][y]=='R') m[i][y]='R';
                else m[i][y]='X';
        }

        i=x;
        j=y;
        while ((i!=0)&&(j!=0)){
            i--;
            j--;
            m[i][j]='X';
        }
        i=x;
        j=y;

        while ((i!=7)&&(j!=7)){
            i++;
            j++;
            m[i][j]='X';
        }

        i=x;
        j=y;
      while ((i!=0)&&(j!=7)){
            i--;
            j++;
            m[i][j]='X';
        }

        i=x;
        j=y;
        while ((i!=7)&&(j!=0)){
            i++;
            j--;
            m[i][j]='X';
        }



     }

}



int main()
{
     int m[8][8];
     int i,j,c;
     initialiser_echiquier(m);
     afficher_echiquier(m);
     placer_reine(m);
     afficher_echiquier(m);
     return(0);


}




