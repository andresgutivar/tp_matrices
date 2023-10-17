#include <stdio.h>
#include <stdlib.h>
int main() {
	int edificio[20][6]={0},total=0,j=0,i=0;
	float promedio=0;
	for(i=0;i<20;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("ingrese cantidad de habitantes del piso %d y habitacion %d: ",i+1,j+1);
			scanf("%d", & edificio[i][j]);
			total+=edificio[i][j];
		}
	}
	
	printf("el total de habitantes del edificio es de: %d\n",total);

		for(i=0;i<20;i++)
		{
		for(j=0;j<6;j++)
		{
			promedio+=edificio[i][j];

		}
		printf("el promedio de habitantes del piso %d es de: %.2f\n",i+1,promedio/6);
		promedio=0;
		}
	return 0;
}
//¡Muy ben trabajo!

