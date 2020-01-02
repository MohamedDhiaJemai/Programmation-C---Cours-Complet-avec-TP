#include <stdio.h>
void main()
{
    int s,m,h;
    printf("Donner seconde minute et heure \n");
    scanf("%d %d %d",&s,&m,&h);
    printf("%d:%d:%d \n",h,m,s);
    if((m>59)||(s>59)||(h>23)||(m<0)||(s<0)||(h<0))
    {
       printf("erreur \a \n");
    }
    else
    {
        if(s==59)
        {
            m+=1;
            s=0;
        }
        else
        {
            s+=1;
        }
    }

    if(s==1)
    {
         printf("Il est %d heure(s) %d minute(s) une seconde \n",h,m);
    }
    else
    {
        if(m==1)
        {
            printf("Il est %d heure(s) une minute %d seconde(s) \n",h,s);
        }
        else
        {
             if(h==1)
             {
                  printf("Il est %d heures une minute une seconde \n",h);
             }
             else
             {
                 if((s==1)&&(m==1)&&(h==1))
                 {
                     printf("Il est une heure une minute une seconde \n");
                 }
                 else
                 {
                     if((h==23)&&(m==59)&&(s==59))
                     {
                         printf("Il est 0 heure 0 minute 0 seconde \n");
                     }
                     else
                     {
                          printf("Il est %d heure(s) %d minutes %d seconde(s) \n",h,m,s);
                     }
                 }
             }
        }
    }
}
