#include <stdio.h>
#include <string.h>

void main()
{
    int longeurCh1,longeurCh2,test;
    char ch1[50]; char ch2[50];
    puts("Donner une chaine 1");
    gets(ch1);
    puts("Donne rune chaine 2");
    gets(ch2);
    longeurCh1=strlen(ch1);
    longeurCh2=strlen(ch2);
    if(longeurCh1!=longeurCh2)
    {
       printf("Les deux chaines ne sont pas egaux \n");
    }
    else
    {
        for(int i=0;i<longeurCh1;i++)
        {
             if(ch1[i]==ch2[i])
             {
                 test=1;
             }
             else
             {
                 test=0;
                 break;
             }
        }
    }
    if(test)
    {
        printf("Les deux chaines sont egaux \n");
    }
    else
    {
        printf("Les deux chaines ne sont pas egaux \n");
    }
}
