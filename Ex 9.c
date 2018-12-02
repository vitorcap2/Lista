#include <stdlib.h>
#include <stdio.h>

void main(){
float n1,n2,n3,media_ar,media_pon, media_har;
int opcao;

printf("Informe a primeira nota:");
scanf("%f", &n1);
printf("Informe a segunda nota:");
scanf("%f", &n2);
printf("Informe a terceira nota:");
scanf("%f", &n3);

printf("Informe qual media deseja calcular a sua nota!\n");
printf("\n1- Aritmetica");
printf("\n2- Ponderada");
printf("\n3- Harmonica\n");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
    media_ar = (n1+n2+n3) / 3;
    printf ("Sua media e de: %.2f", media_ar);
    break;
case 2:
	media_pon = ((n1 * 3) + (n2 * 3) + (n3 * 4))/ 10;
    printf("Sua media e de: %.2f", media_pon);
    break;
case 3:
	media_har =	3/(1/n1 + 1/n2 + 1/n3);
    printf("Sua media e de %.2f", media_har);
    break;
default:
    printf("Opcao inválida");
}

printf("\n");
system("pause");
}

