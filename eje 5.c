#include <stdio.h>
#include <stdlib.h>
int main() {
	float alumnos[3][3]={0}, promedio= 0;
	int op=0,legajo=0,trimestre=0,nota=0,op2=0,op4=1,op3=0,i=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("ingrese la nota del trimestre n°%d del alumno n°%d\n",j+1,i+1);
			scanf("%f", & alumnos[i][j]);
		}
	}
	
	while(op4==1)
	{
	printf("deseea modificar alguna nota? (1 para si, 2 para no)");
	scanf("%d",&op4);
	
	if(op4==1)
	{
		printf("ingrese numero de legajo:");
		scanf("%d",& legajo);
		legajo-=1;
		printf("ingrese trimestre a corregir (1, 2, o 3):");
		scanf("%d",&trimestre);
		trimestre-=1;
		printf("ingrese nueva nota:");
		scanf("%d",&nota);
		
		printf("confirma la modificacion de la siguiente nota del alumno %d en el trimestre %d: %.2f por la nota de %d (1 para si, 2 para no)\n",legajo+1,trimestre+1,alumnos[legajo][trimestre],nota);
		scanf("%d",&op2);
		if(op2==1)
		{
			alumnos[legajo][trimestre]=nota;
		}
		else
		{
			printf("dessea continuar? (1 para si, 2 para no): ");
			scanf("%d",&op3);
			if(op3==1)
			{
				op4=1;
			}
			else
			{
				op4=0;
			}
		}
		
	}
	else
	   {
		op4=0;
	}
	}
	
	
		for (int i=0;i<3;i++)
		{
		for(int j=0;j<1;j++ )
		{
		promedio=(alumnos[i][j]+alumnos[i][j+1]+alumnos[i][j+2])/3;
		printf("numero de legajo: %d	1°trimestre: %.2f	2°trimestre: %.2f	3°trimestre: %.2f	promedio:%.2f\n",i+1,alumnos[i][j],alumnos[i][j+1],alumnos[i][j+2],promedio);
		}
		}
	
	
	
	return 0;
}

