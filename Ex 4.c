#include <stdio.h>
#include <stdlib.h>


void main () {

float nota1,nota2,nota3,media;

printf("Informe a primeira nota:");
scanf("%f", &nota1);
printf("Informe a segunda nota:");
scanf("%f", &nota2);
printf("Informe a terceita nota:");
scanf("%f", &nota3);

media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) /10;
printf("Media pondera %.2f\n", media);

system("pause");
}
