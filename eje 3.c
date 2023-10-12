#include <stdio.h>
#include <stdlib.h>
int main() {
	int matriz[2][3], menor=0,suma=0;
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("ingrese los valores de la matriz: ");
			scanf("%d", & matriz[i][j]);
			if (i==0 && j==0)
			{
				menor=matriz[i][j];
			}
			if (matriz[i][j]<=menor)
			{
				menor=matriz[i][j];
			}
			
			
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
			
			suma+=matriz[i][j];
		}
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			
			printf("fila %d y columna %d = %d\n", i+1,j+1, matriz[i][j]);
		}
	}
	
	printf("el numero mas chico de tu matriz es: %d\n",menor);
	printf("la suma de todos los elementos de la matriz es: %d",suma);
	return 0;
}

