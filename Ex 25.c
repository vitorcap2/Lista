#include <stdio.h>
#include <stdlib.h>


void main()
{
float salario_bruto, pvs, slb;

printf("Informe seu salario BRUTO: ");
scanf("%f", &salario_bruto);

pvs = salario_bruto * 0.90;
slb = pvs * 0.95;
	
printf("Seu salario liquido e de:R$%.2f", slb);
	
printf ("\n\n\n");
system("pause");
}
