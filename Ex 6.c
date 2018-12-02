#include <stdio.h>
#include <stdlib.h>

void main()
{
	
 int i,num, conta=0;


printf ("Informe um numero inteiro: ");
scanf("%d", &num);
for(i = 0; i <= num;i++)
conta = conta + i;
printf("Soma = %d ", conta);


	
printf ("\n");
system ("pause");
}
