#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, i, j;

    printf("Informe um valor de 2 a 20: ");
    scanf("%d", &num);

    for (i=1; i<=num; i++) {
        for (j=1; j<=i; j++)
            printf("%d", j);
        printf("\n");
    }

    for (i=i-2; i>0; i--) {
        for (j=1; j<=i; j++)
            printf("%d", j);
        printf("\n");
    }
	
	
printf ("\n\n\n");
system ("pause");
}
