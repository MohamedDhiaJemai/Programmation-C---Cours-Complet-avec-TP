#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char ch[50],ch1[50],x, C;
    int n,i,a,b;

    b=1;
    do{
            printf("Donner un mot : \n");
            gets(ch);
            for(i=0;i<(strlen(ch));i++){
                    if ((ch[i]<'A') || (ch[i]>'Z')){
                    b=0;
                    printf("Vous Dever Entrer un Mot En Majuscule \n");
                    break;
                    }
                    if(b=0) break;
            }
    }while(b!=1);


    strcpy(ch1,ch);
    n=strlen(ch1);

    printf("Vous devez deviner les caracteres : \n");
    for(i=1;i<(strlen(ch1)-1);i++){
        ch1[i]='-';
    }

 puts(ch1);
 int cmp=3;
            do{

            printf(" \ Donner un caractere : \n");
            scanf("%c",&x);
            scanf("%c",&C);

           // printf("%c   ", x  );
                    for(i=1;i<(strlen(ch1)-1);i++){
                        if (ch[i]==x){
                            ch1[i]=x;


                            }
                    }
                    puts(ch1);
                   // cmp--;

            }while(strcmp(ch1,ch)!=0);



    return 0;
}
