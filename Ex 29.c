#include <stdio.h>
#include <stdlib.h>


void main()
{
	int l1,l2,l3;
	printf("Informe o primeiro lado: ");
	scanf("%d", &l1);
	printf("Informe o segundo lado: ");
	scanf("%d", &l2);
	printf("Informe o terceiro lado: ");
	scanf("%d", &l3);
	
	if(l1 < (l2 + l3) && l2 < (l1 + l3) && l3 < (l1 + l2))
	{

				if (l1 == l2 && l2 == l3 && l1 == l3)
				{
					printf("Triangulo equilatero");
				}
				else
				{
					printf ("Triangulo isociles");
				}
				if (l1 != l2 && l2 !=l3 && l3 != l1)
				{
					printf ("Triangulo escaleno");
				}
	}
	else 
	{
		printf ("Nao e um triangulo!");
	}
	
printf ("\n\n\n");
system("pause");
}
