#include<stdio.h>
	int kilos;
	int tipo;

int main()
{
	printf("Programa que te dice que capacidad de ropa carga y tipo de ropa\n");
	printf("Introduce cuantos kilos introduciras en la lavadora");
	scanf("%d", & kilos);
	printf("Introduce si tu ropa es delicada =1, normal =2 o sucia =3 \n");
	scanf("%d",tipo);
	if (((kilos>=0) && (kilos<=10)) && (tipo = 1))
	{
		 	printf("Tu lavadora tiene un peso minimo y es delicada 5 Minutos\n");	
	}
	
	else if (((kilos>=0) && (kilos<=10)) && (tipo = 2))
	{
		 	printf("Tu lavadora tiene un peso minimo y es normal 10 minutos\n");	
	}
	
	else if (((kilos>=0) && (kilos<=10)) && (tipo = 3))
	{
		 	printf("Tu lavadora tiene un peso minimo y es sucia 20 Minutos\n");	
	}
	
	else if (((kilos>=11) && (kilos<=15)) && (tipo = 1))
	{
		 	printf("Tu lavadora tiene un peso medio y es delicada 5 Minutos\n");	
	}
	
	else if (((kilos>=11) && (kilos<=15)) && (tipo = 2))
	{
		 	printf("Tu lavadora tiene un peso medio y es normal 10 minutos\n");	
	}
	
	else if (((kilos>=11) && (kilos<=15)) && (tipo = 3))
	{
		 	printf("Tu lavadora tiene un peso medio y es normal 20 minutos\n");	
	}
	
	else if (((kilos>=16) && (kilos<=20)) && (tipo = 1))
	{
		 	printf("Tu lavadora tiene un peso maximo y es normal 10 minutos\n");	
	}
	
	return 0;
}
