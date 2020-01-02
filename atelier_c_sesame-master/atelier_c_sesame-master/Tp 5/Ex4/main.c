#include <stdio.h>
#include <string.h>

void main()
{
    char ch[50],ch0[50] ,ch1[50] , ch2[50] , ch10[50]="" ,ch20[50]="",ch11[50]="" , ch21[50]="";
    int l1,l2,i,j;

    do{
    puts("Donner une chaine 1 de taille paire");
    gets(ch);
    l1=strlen(ch);
    } while(l1%2!=0);

    do{
    puts("Donner une chaine 2 de taille paire");
    gets(ch0);
    l2=strlen(ch0);
    } while(l2%2!=0);

    for(i=0;i<l1;i++)
    {
      ch1[i]=ch[l1-i-1];
    }
    puts(ch1);

    for(i=0;i<l2;i++)
    {
       ch2[i]=ch0[l2-i-1];
    }
    puts(ch2);

    strncat(ch10,ch1,l1/2);
  //  puts(ch10);

    strncat(ch20,ch2,l2/2);
   // puts(ch20);

    for(i=l1/2;i<l1;i++)
    {
      ch11[i-(l1/2)]=ch1[i];
    }
   // puts(ch11);

    for(i=l2/2;i<l2;i++)
    {
      ch21[i-(l2/2)]=ch2[i];
    }
   // puts(ch21);

    strcat(ch10,ch21);
    puts(ch10);

    strcat(ch11,ch20);
    puts(ch11);

  if(strcmp(ch11,ch10)!=0)
  {
    printf("les chaines ne sont pas egaux ! \n");
  }
  else
  {
    printf("Les deux chaines sont egaux \n");
  }
}
