#include <stdio.h>
int cal;
int main ()
{
	printf("Programa que te dice si estas aprobado o reprobado\n");
	printf("introduce tu calificacion\n");
	scanf("%d",&cal);
	if (cal>=7)
	{
		printf("Estas aprobado");	
	}
	else 
	{
		printf("Estas reprobado");	
	}
	return 0;
}
