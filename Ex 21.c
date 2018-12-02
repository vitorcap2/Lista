#include <stdio.h>
#include <stdlib.h>

void main () 
{
	
int soma,valor,valor2,i;

printf("Informe quantos numeros ira digitar: ");
scanf("%d", &valor);
for (i = 1; i <= valor; i++)
{
	printf("Informe os valores: ");
	scanf("%d", &valor2);
	soma = soma + valor2;
}
printf ("Soma = %d", soma);
	
	
	
printf ("\n\n\n");
system("pause");
}
