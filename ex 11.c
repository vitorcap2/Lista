#include <stdio.h>
#include <stdlib.h>

void main()
{
	float raio,area,pi;
	
pi = 3.14159;
	printf ("Informe o valor do raio: ");
	scanf ("%f", &raio);
	area = pi * (raio * raio);
	printf ("Valor da area: %.4f", area);
printf ("\n");
system ("pause");
}
