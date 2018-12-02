#include <stdio.h>
#include <stdlib.h>


void main()
{
	int valor_compra,valor_cliente,tot,nota_100,nota_10,nota_1;
	printf ("Informe o valor da compra: R$");
	scanf("%d", &valor_compra);
	printf("Informe o valor do cliente: R$");
	scanf("%d", &valor_cliente);
	
tot = valor_cliente - valor_compra;

 	if(tot>10){
      nota_1 = valor_compra; 
      
    }
	else if(tot >=10 && tot <100)
	{
    nota_100 = tot%10; 
    nota_10 = tot/10; 
    
    
  }else if(tot >=100){
    nota_100 = tot/100; 
    nota_10 = (tot%100)/10;
    nota_1 = (tot%100)%10;
    
  }


	printf("\nQuanto foi dado pelo cliente: %d", valor_cliente);
	printf("\nTroco:R$ %d", tot);
	printf("\nNotas de 1: %d", nota_1);
	printf("\nNotas de 10: %d", nota_10);
	printf("\nNotas de 100: %d", nota_100);

	
	
printf ("\n\n\n");
system("pause");
}
