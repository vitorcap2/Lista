#include <stdio.h>
#include <stdlib.h>


// EXERCICIO FEITO COM O PROFESSOR SUBSTITUTO

int main()
{
	int mat[2][3], i, j, l, resl[3], resc[2], c,f;
	printf ("Informe todos os valores da matriz: \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf ("Linha: %d, Coluna %d ", i, j);
		}
	}
	printf("\nQual a linha voce quer multiplicar?");
	scanf("%d", &l);
	printf("\nQual vai ser o fator multiplicador?");
	scanf("%d", &f);
	for (i = 0; i < 3; i++);
	{
		resl[i] = mat[l][i] * f;
	}
		printf("\nQual a coluna voce quer multiplicar?");
		scanf("%d", &c);
		printf("\nQual vai ser o fator multiplicador?");
		scanf("%d, &f");
		for (i = 0; i < 2; i++)
		{
			resc[i] = mat[l][f] * f;
	}
	
	
printf ("\n\n\n");
system ("pause");
}
