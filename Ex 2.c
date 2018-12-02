#include <stdio.h>
#include <stdlib.h>

int main () {

float d, r,s,a,b,c;



printf ("Informe o primeiro valor: ");
scanf("%f", &a);
printf ("Informe o segundo valor: ");
scanf("%f",&b);
printf("Informe o terceiro valor: ");
scanf("%f", &c);

r = (a + b) * (a + b);
s = (b + c) * (b + c);
d = (r + s) / 2;

printf("Resultado: %.2f", d);


printf ("\n\n\n");
system("pause");
}
