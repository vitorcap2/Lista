#include <stdio.h>
#include <stdlib.h>

void main()
{
	float area, base, altura;
	printf ("Informe a base do triangulo: ");
	scanf ("%f", &base);
	printf ("Informe a altura do triangulo: ");
	scanf ("%f", &altura);
	area = (base * altura) / 2;
	printf ("Valor da base: %.2f", area);
	
printf ("\n");
system ("pause");
}
