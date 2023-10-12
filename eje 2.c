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
			if (i==0)
			{
				matriz[i][j]*=4;
			}
			
	
			if(j==2)
			{
				matriz[i][j]*=3;
			}
			
		}
	}
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			
			printf("fila %d y columna %d = %d\n", i+1,j+1, matriz[i][j]);
		}
	}
	return 0;
}
