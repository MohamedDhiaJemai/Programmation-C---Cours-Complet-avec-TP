#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[200];
    int i,j,x;
    printf("Donner Une Ligne De Texte :\n");
    gets(ch);
    x=strlen(ch);

    for(i=0;i<x;i++){
        if(ch[i]=='e'){
            do{
                for(j=i;j<x;j++){
                    ch[j]=ch[j+1];
                }
            }while(ch[i]=='e');
        }
    }

    printf("%s",ch);

    return 0;
}
