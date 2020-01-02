#include <stdio.h>
#include<string.h>

int main()
{
    char ch1[200], ch2[200];
    int l,res;
    printf("Introduisez la premier chaine \n");
    gets(ch1);
    printf("Introduisez la deuxiéme chaine \n");
    gets(ch2);
    l=strlen(ch1);
    printf("La longeur de la chaine l est %d \n",l);
    strcpy(ch1,ch2);
    puts(ch1);
    puts(strcat(ch1,ch2));
    res=strcmp(ch1,ch2);
    printf("la resultat de strcmp est %d \n",res);
    if(res<0)
    {
      printf("%s précéde %s \n",ch1,ch2);
    }
    else
    {
       if(res>0)
       {
          printf("%s inférieur %s \n",ch1,ch2);
       }
       else
       {
          printf("%s est supérieur à %s \n",ch1,ch2);
       }
    }
    getchar();
    return 0;
}
