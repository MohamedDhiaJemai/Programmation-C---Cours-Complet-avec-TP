#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int r,nb;
    char ch[50], ch1[50];
    printf("Donner un entier : \n");
    scanf("%d",&nb);
    do{
        r=nb%2;
        ch1=r;
        strcat(ch1,ch);
        nb = nb /2;
    }while (nb==0);

    printf("%s",ch);
    return 0;
}
