#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * * argv) {
	float distribuidor, impostos, fabrica, soma;

	distribuidor = 0.28;
	impostos = 0.45;
	soma = 0;

	printf("Informe o custo de fabrica: ");
	scanf("%f", &fabrica);

	fabrica = fabrica + (fabrica * distribuidor) + (fabrica * impostos);

	printf("Valor do carro: %0.2f\n\n", fabrica);
	system("pause");
	return 0;
}
