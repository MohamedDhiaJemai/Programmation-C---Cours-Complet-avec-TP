#include <stdio.h>

int main()
{
    int p1=1;
    int p2=2;
    p1=&p2;
    p2=&p1;
    printf("La valeur de *p1 est %d  \n",&p1);
    return 0;
}
