#include <stdio.h>
#include <string.h>

void main()
{
    char ch1[50] , ch2[50] , ch3[50]="";
    int i,j,k=0,x=0,y=0,z=0;


    puts("Donner la chaine 1");
    gets(ch1);



    puts("Donner la chaine 2");
    gets(ch2);


  for(i=0;i<strlen(ch2);i++)
  {
    for(j=0;j<strlen(ch1);j++)
    {
      if(ch2[i]==ch1[j])
      {
        ch3[k]=ch2[i];
        k++;
      }
    }
  }

  while(x<strlen(ch3)-1)
  {

    y=x+1;
    while(y<strlen(ch3))
    {
      if(ch3[y]==ch3[x])
      {
        for(z=y;z<strlen(ch3)-1;z++)
        {
          ch3[z]=ch3[z+1];
        }
        ch3[strlen(ch3)-1]='\0';
      }
      y++;
    }
    x++;
  }

 puts(ch3);
}
