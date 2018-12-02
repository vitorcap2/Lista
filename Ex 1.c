#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	
float x1,x2,y1,y2,d;

printf ("Informe o valor de x2: ");
scanf ("%f", &x2);
printf ("Informe o valor de x1: ");
scanf ("%f", &x1);
printf ("Informe o valor de y2: ");
scanf ("%f", &y2);
printf ("Informe o valor de y1: ");
scanf ("%f", &y1);

d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

printf("A distancia entre os pontos e: %.3f", d);
	

printf ("\n\n\n");
system("pause");
}
