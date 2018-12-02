#include <stdio.h>
#include <stdlib.h>


void main()
{
int idade, sexo, olhos, maior_id, sexo_fem, olhos_v, cabelo, cabelo_l;

    maior_id = 0;

	while (idade > 0)
	{
		printf("Informe sua idade");
		scanf("%d", &idade);

			if(idade > maior_id)
			{
				maior_id = idade;
			}
        if(idade > 0)
        {
		printf("Informe seu sexo");
		printf("\n1- Fasculino");
		printf("\n2- Femenino");
		scanf("%d", &sexo);

		printf("Informe cor dos olhos");
		printf("\n1- Azuis");
		printf("\n2- Verdes");
		printf("\n3- Castanhos");
		scanf("%d", &olhos);

		printf("Informe a cor do cabelo");
		printf("\n1- Louro");
		printf("\n2- Castanho");
		printf("\n3- Preto");
		scanf("%d", &cabelo);

		if(sexo == 2)
		{
			if(olhos == 2)
			{
				if(cabelo == 1)
				{
					sexo_fem = sexo_fem + 1;
				}
			}

		}
        }

	}
	printf("%f Pessoas do sexo femenino cujo estra entre 18-35 e tem olhos verdes + cabelo louro", sexo_fem);
	printf("\nMaior idade dos habitantes: %d", maior_id);



printf ("\n\n\n");
system ("pause");
}



