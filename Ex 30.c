#include <stdio.h>
#include <stdlib.h>


void main()
{
	int numero,i;
	char x;
	
	x = ('x');
		
	printf("Informe um numero entre 2 e 20: ");
	scanf("%d", &numero);
	
	while (numero < 2 || numero > 20);
	{
		printf("Numero invalido!");
		printf("\nDigite um numero entre 2 e 20: ");
		scanf("%d", &numero);
	}	
	for (i = 0; i <= numero; i++)
	{
		if(i != 1)
		{
			printf("%c", x);
		}
		numero = numero --;
		if (i > 1)
		{
			x = (x + " x");
		}
	}
	
	
printf ("\n\n\n");
system("pause");
}
