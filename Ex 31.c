#include <stdio.h>
#include <stdlib.h>


int main()
{
	
	int valor,i,tot;
	
	tot = 0;
	
	for(i = 0; i < 5; i++)
	{
		printf("Qual o numero: ");
		scanf("%d", &valor);
		if (valor < 0)
		{
			tot = tot + 1;
		}
	}
	printf("Negativos: %d", tot);
	
	
	
	
printf ("\n\n\n");
system("pause");
}
