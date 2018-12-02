#include <stdio.h>
#include <stdlib.h>


void main()
{
int tempo, velo_med, dist, litros_usados;

printf ("Informe o tempo de sua viagem: ");
scanf("%d", &tempo);
printf("Informe a velocidade media da viagem: ");
scanf("%d", &velo_med);

dist = (velo_med * tempo);
litros_usados = dist / 12;

printf("\nTempo da viagem: %d", tempo);
printf("\nVelocidade Media: %dKM", velo_med);
printf("\nDistancia da viagem: %d", dist);
printf("\nQuantidade de litros: %d", litros_usados);
	
	
printf ("\n\n\n");
system("pause");
} 
