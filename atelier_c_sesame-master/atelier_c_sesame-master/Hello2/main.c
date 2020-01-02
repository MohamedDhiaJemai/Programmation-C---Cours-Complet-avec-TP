#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lettre;
    int code;
    printf("donner une lettre \n");
    scanf("%c",&lettre);
    code=lettre;
    printf("le code est %d et le successuer est %c",code,lettre+1);
    getchar();
    sleep(1);
    return 0;
}
