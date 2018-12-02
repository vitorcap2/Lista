#include <stdio.h>
#include <stdlib.h>


void main()
{
	int vendas_car,tot_car;
	float salario_min,vendas_val,tot_venda,sal_tot,tot_sal;
	printf("Informe o salario minimo:R$");
	scanf("%f", &salario_min);
	printf("Informe a quantidade de carro vendido do funcionario: ");
	scanf("%d", &vendas_car);
	printf("Informe o valor total das vendas: ");
	scanf("%f", &vendas_val);
	
	tot_sal = salario_min * 2;
	tot_car = vendas_car * 50;
	tot_venda = vendas_val * 0.05;
	sal_tot = tot_sal + tot_car + tot_venda;
	
	printf("Salario total: R$%.2f", sal_tot);
	
	
	
printf ("\n\n\n");
system("pause");
}
