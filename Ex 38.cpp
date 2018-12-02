#include<stdio.h>
#include<stdlib.h>

typedef struct dado{
int horas;
int minutos;
}Dado;

int main()
{
	  Dado min;
	  int valor1,valor2;
	  printf("informe  os minutos: ");
	  scanf("%d", &min.minutos);
	  valor2=min.minutos/60;
	  valor1=min.minutos%60;
	  printf("%.2d:%.2d minutos", valor2, valor1);
	  
	  printf("\n\n\n");
	  system("pause");
}
