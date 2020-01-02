#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch[200],ch1[200];
    int x,i,j,y=0;
    printf("Donner Une Ligne De Texte :\n");
    gets(ch);
    x=strlen(ch);

    for(i=x;i>0;i--){
        if(ch[i]==' '){
                for(j=i+1;j<x;j++){
                    ch1[y]=ch[j];
                    y++;
                }
        }
    }

    printf("%s",ch1);
    return 0;
}
