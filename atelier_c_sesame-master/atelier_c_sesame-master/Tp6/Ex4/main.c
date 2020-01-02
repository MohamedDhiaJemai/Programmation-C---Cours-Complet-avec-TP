#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void saisie(char ch[100]);
void chaineentier(char ch[100]);
int estEntier(char ch[100]);

int main()
{
    char ch[100];
    saisie(ch);

    printf("la chaine est %s \n",ch);
    return 0;
}
void saisie(char ch[100])
{
        do
        {
              puts("Donner une chaine ");
              gets(ch);
              printf("%d \n",estEntier(ch));
        }while(estEntier(ch)==0);

}

int estEntier(char ch[100])
{
    int i;
    int test;

    for(i=0;i<strlen(ch);i++)
    {

        if(!isdigit(ch[i]))
        {
            test=0;
            break;
        }
        else
        {
            test=1;
        }

    }

    return test;
}

