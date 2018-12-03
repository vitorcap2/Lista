#include <stdio.h>
#include <stdlib.h>


int main()
{
	int valor,i,tab;
	


	
	for(i = 0; i < 20; i++)
	{
		printf("Informe o valor: \n");
		scanf("%d", &valor);
	
	for (tab = 1; tab <= valor; tab ++)
	{
		printf("%d x %d = %d\n", tab, valor, (tab * valor));
	}
	}
	
	
printf ("\n\n\n");
system ("pause");
}
