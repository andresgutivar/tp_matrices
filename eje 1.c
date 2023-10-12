#include <stdio.h>
#include <stdlib.h>
int main() {
	int matriz[2][3];
	
	for(int i=0;i<2;i++)
	{
	for(int j=0;j<3;j++)
	{
	printf("ingrese los valores de la matriz: ");
	scanf("%d", & matriz[i][j]);
	}
	}
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			
			printf("fila %d y columna %d = %d\n", i,j, matriz[i][j]);
		}
	}
	return 0;
}

