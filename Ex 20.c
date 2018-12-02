#include <stdio.h> 

void main()
{
	int mat[x][y],i,j,l,c,lin,col,;
	
	for(i = 0; i < x; i++)
	for(j = 0; j < y; j++)
	{
		printf("Informe mat[%d][%d]: ", i,j);
		scanf("%d", &mat[i][j]);
	}
	printf("Matriz antes\n"); 
	for (i=0; i<x; i++) 
	for (j=0; j<y; j++) 
	{
	printf("%d\t",mat[i][j]); 
	printf("\n"); 
	}
	printf("Matriz depois\n"); 
	for (i=0; i<x; i++) { 
	for (j=0; j<y; j++) 
	printf("%d\t",mat[i][j]); 
	printf("\n"); 
	} 
	for (i=0; i<lin; i++) 
	for (j=0; j<col; j++) 
	if (x[i][j] < 0) 
	x[i][j] = - x[i][j]; 
}

