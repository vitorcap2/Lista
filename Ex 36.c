#include <stdio.h>
#include <stdlib.h>


int main()
{
	int valor,i;
	printf("Informe o valor: ");
	scanf("%d", &valor);
	
	for(i = 1; i <= 10; i++)
	{
		printf("\n%d x %d = %d", i, valor, (i * valor));
	}
	
	
printf ("\n\n\n");
system ("pause");
}
