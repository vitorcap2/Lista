#include <stdlib.h>
#include <stdio.h>

void main(){

int cod, qtd;
float total;


printf ("Informe a quantidade comprada: ");
scanf ("%i", &qtd);
printf ("1- 1001");
printf ("\n2- 1324");
printf ("\n3- 6548");
printf ("\n4- 987");
printf ("\n5- 7623");
printf ("\nInforme o cod desejado: ");
scanf ("%d", &cod);
switch (cod)
{

	case 1:
		total = 5.32 * qtd;
		printf ("\nO valor total da compre e de:$%.2f", total);
		break;
	case 2:
		total = 6.45 * qtd;
		printf ("\nO valor total da compre e de:$%.2f", total);
		break;
	case 3:
		total = 2.37 * qtd;
		printf ("\nO valor total da compre e de:$%.2f", total);
		break;
	case 4:
		total = 5.32 * qtd;
		printf ("\nO valor total da compre e de:$%.2f", total);
		break;
	case 5:
		total = 6.45 * qtd;
		printf ("\nO valor total da compre e de:$%.2f", total);
		break;
	default:
		printf ("Opcao invalida");
}
	
printf("\n");
system("pause");
}
