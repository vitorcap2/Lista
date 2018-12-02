#include <stdio.h>
#include <stdlib.h>


void main()
{
int ano_nasc,mes_nasc,dia_nasc,ano_atual,mes_atual,dia_atual, dias;
	
printf("Informe o ano de nascimento:\n");
printf("Dia: ");
scanf("%d", &dia_nasc);
printf("Mes: ");
scanf("%d", &mes_nasc);
printf("Ano: ");
scanf("%d", &ano_nasc);



printf("Informe a data de hoje\n");
printf("Dia: ");
scanf("%d", &dia_atual);
printf("Mes: ");
scanf("%d", &mes_atual);
printf("Ano: ");
scanf("%d", &ano_atual);




dias = ((ano_atual - ano_nasc ) * 365) + ((mes_atual - mes_nasc) * 30) + (dia_atual - dia_nasc);
printf("Dias vividos: %d", dias);


	
printf ("\n\n\n");
system("pause");
}
