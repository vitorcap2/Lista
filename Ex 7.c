#include <stdio.h>
#include <stdlib.h>

void main(){

int a, b;

printf("Informe um valor inteiro: ");
scanf("%d", &a);
printf("Informe um valor inteiro: ");
scanf("%d", &b);

if(a % b == 0)
{
    printf("Os valores sao multiplos");
}
else
{
    printf("Os valores nao sao multiplos");
}
printf ("\n");
system("Pause");
}

