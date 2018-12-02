#include <stdlib.h>
#include <stdio.h>

void main(){

int cod, qtd;
float total,valor;

valor = 0;

printf("\Codigos: ");
printf ("\n1001");
printf ("\n1324");
printf ("\n6548");
printf ("\n987");
printf ("\n7623");
printf("Tecle (-1) para encerrar a compra");

while (cod != -1)
{
	
	printf ("\nInforme o cod desejado: ");
	scanf ("%d", &cod);
	if (cod > 0)
	{
	printf ("\nInforme a quantidade comprada: ");
	scanf ("%i", &qtd);	
	}
	
		if(cod == 1001)
		{
		total = 5.32 * qtd;
		printf ("\nO valor total da compre e de:$%.2f", total);
		valor = valor + total;
		}
		if(cod == 1324)
		{
		total = 6.45 * qtd;
		printf ("\nO valor total da compre e de:$%.2f", total);
		valor = valor + total;
		}
		if(cod == 6548)
		{
		total = 2.37 * qtd;
		printf ("\nO valor total da compre e de:$%.2f", total);
		valor = valor + total;
		}
		if(cod == 987)
		{
		total = 5.32 * qtd;
		printf ("\nO valor total da compre e de:$%.2f", total);
		valor = valor + total;
		}
		if(cod == 7623)
		{
		total = 6.45 * qtd;
		printf ("\nO valor total da compre e de:$%.2f", total);
		valor = valor + total;
		}
		
		

}
printf("\nCompra finalizada!");
printf("\nValor total da compra: R$%.2f", valor);

printf("\n");
system("pause");
}
