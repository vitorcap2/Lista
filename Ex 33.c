#include <stdio.h>
#include <stdlib.h>


int main()
{
	float alt_ch, alt_ze;
	int anos;
	
	alt_ze = 1.10;
	alt_ch = 1.50;
	anos = 0;
	
	while (alt_ze < alt_ch)
	{
		alt_ze = alt_ze + 0.03;
		alt_ch = alt_ch + 0.02;
		anos = anos + 1;
	}
	printf("Ze precisara de %d anos para ser maior que Chico!", anos);
	
	
printf ("\n\n\n");
system ("pause");
}
