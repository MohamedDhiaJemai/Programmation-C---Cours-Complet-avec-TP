# include <stdio.h>
#include <conio.h>
int main ()
{
int N,i,j ;
printf ("Donnez l'hauteur N =");
scanf ("%d",&N);


for (i=0;i<N;i++){

    for (j=0;j<=N-(i+1);j++)printf (" ");
    for (j=0;j<2*i+1;j++)printf ("*");
    for (j=0;j<=N-(i+1);j++)printf (" ");
printf ("\n");
}
getch();
return 0;

}
