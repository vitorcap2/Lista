#include <stdlib.h>
#include <stdio.h>

void main(){
int idade;

printf("Informe sua idade\n");
scanf("%d", &idade);

if(idade >= 5 &&  idade <= 7)
{
  printf("Infantil A");
}
if(idade >= 8 &&  idade <= 10)
{
	 printf("Infantil B");
}
if(idade >= 11 &&  idade <= 13)
{
	 printf("Infantil A");
}
if(idade >= 14 &&  idade <= 17)
{
	 printf("Infantil B");
}
else if (idade >= 18)
{
	printf("Adulto");
}
printf("\n");
system("pause");
}

