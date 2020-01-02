#include <stdio.h>
int main()
{
    short a=10;
    short b=50;
    short *p;
    p=&a; //p pointe sur l'adresse de  a
    b=*p; //b contient le contenu de variable de p
    *p=20; //donc prend la valeur de 10
    // *p=10
    // p adresse de a
    // a content la valeur de p
    // b contient la valeur de *p=20
    printf("La valuer de *p est %d \n",*p);
    printf("La valeur de p est  est %d \n",p);
    printf("La valeur de a est %d \n",a);
    printf("La valeur de b est %d \n",b);
    return 0;
}
