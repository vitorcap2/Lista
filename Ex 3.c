#include <stdio.h>
#include <stdlib.h>

void main () {

float idade;

printf("Digite sua idade em dias!\n");

scanf("%f", &idade);

printf("\nIdade em anos: %.0f", idade / 365);
printf("\nIdade em meses: %.2f", idade / 12);
printf("\nIdade em dias: %.0f\n", idade);

system("pause");
}
