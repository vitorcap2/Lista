#include <stdio.h>
#include <stdlib.h>

void main()
{
 int num,num2,potencia, i; 
 
  potencia = 1;
  i        = 0;

  printf("Digite um numero inteiro: ");
  scanf("%d", &num);
  printf("Digite um numero um inteiro nao-negativo: ");
  scanf("%d", &num2);
  

  
  while (i != num2) {
    potencia = potencia * num;
    i = i + 1;
  }
  
  printf("\nO valor de %d elevado a %d: %d\n", num, num2, potencia);
	
	
	
printf ("\n\n\n");
system ("pause");
}
