#include <stdio.h>
#include <stdlib.h>


int main()
{
	int v_maior,v_menor,i,valor;
	
	v_maior = 0;
	v_menor = 99999;
	
	for (i = 1; i <= 50;i++)
	{
		printf("Informe o valor %d (inteiro): ", i);
		scanf("%d", &valor);
		
		if (valor > v_maior )
		{
			v_maior = valor;
		}
		if (valor < v_menor)
		{
			v_menor = valor;
		}
	}
		printf("Valor menor: %d", v_menor);
		printf("\nValor maior: %d", v_maior);
	
	
	
printf ("\n\n\n");
system ("pause");
}
