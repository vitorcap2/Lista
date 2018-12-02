#include <stdio.h>
#include <stdlib.h>

void main()
{
float salario,sal_100,tot_salario,i,filho,tot_filho,sal_maior,contSal;

	while (salario > 0)
	{
    printf("\nInforme o salario do usuario:R$");
	scanf("%f", &salario);

        if (salario > 0)
        {
            if (sal_maior < salario)
            {
                sal_maior = salario;
            }

        }
		if (salario <= 100 && salario > 0)
		{
        sal_100 = sal_100 + 1;
		}
		if (salario > 0)
        {
        contSal = contSal + 1;
		tot_salario = tot_salario + salario;
        }


		printf("\nInforme a quantidade de filhos do usuario: ");
		scanf("%f", &filho);

		if (salario > 0)
        {
        tot_filho = tot_filho + filho;
        }

	}

    printf("Maior Salario: %.4f", sal_maior);
	printf("\nQuant salario: %.0f", sal_100);
	printf("\nTotal: %.3f", tot_salario / contSal);
	printf("\nQuant filho:%.2f", tot_filho / contSal);



printf ("\n\n\n");
system ("pause");
}

