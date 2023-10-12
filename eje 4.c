#include <stdio.h>
#include <stdlib.h>
int main() {
	int colectivo[3][12]={0};
	int linea=0,coche=1,recaudado,ta=0,tb=0,tc=0,t=0,fila=0,columna=0;
	
	while(coche>=1)
	{
		printf("ingrese la linea de colectivo (1, 2, o 3): ");
		scanf("%d", & linea);//fila
		fila=linea-1;
		printf("ingrese el numero del colectivo (del 1 al 12): ");
		scanf("%d", & coche);//columna
		columna=coche-1;
		printf("ingrese lo recaudado: ");
		scanf("%d", & recaudado);
		
		colectivo[fila][columna]=colectivo[fila][columna]+recaudado;
	}
	
	for(int i=0; i<3;i++)
	{
		for(int j=0;j<12;j++)
		{
			switch(i)
			{
			case 0:
				ta+=colectivo[i][j];
				break;
			case 1:
				tb+=colectivo[i][j];
				break;
			case 2:
				tc+=colectivo[i][j];
				break;
			}
			
			t+=colectivo[i][j];
			
		}
	}
	
	printf("recudacion total de linea 1: %d\n",ta);
	printf("recudacion total de linea 2: %d\n",tb);
	printf("recudacion total de linea 3: %d\n",tc);
	printf("recudacion total general: %d\n",t);
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<12;j++)
		{
			
			printf("lo recaudado de la linea %d y colectivo %d es= %d\n", i+1,j+1,colectivo[i][j] );
		}
	}
	return 0;
}
