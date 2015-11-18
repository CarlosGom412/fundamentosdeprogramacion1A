#include<stdio.h>
int main()
{
	int moda[10]={0,0,0,0,0,0,0,0,0,0,},mayor;
	int arreglo[10],promedio=0,i,d;
	float p;
		int r=0;
	
	printf("Programa que calcula el promedio y la mosa de 10 calificaciones.\n\n");
	for(i=0;i<10;i++)
	{
		printf("Introduce la calificacion %d ",i+1);
		scanf("%d",&arreglo[i]);
		promedio=promedio+arreglo[i];
		if (arreglo[i]>10)
		{
			printf("Dato ERRONEO");
			return 0;
		}
		else if (arreglo[i]<0)
		{
			printf("Dato ERRONEO");
			return 0;
		}
	}
	for(i=0;i<10;i++){
		moda[arreglo[i]-1]++;
	}
	for(i=0;i<10;i++)
	{
		if (moda[arreglo[i]-1]>r)
		{
			r=moda[arreglo[i]-1];
			r=arreglo[i];
		}
	}
	
	printf("La moda es: %d \n",r);
	p=promedio*0.1;
	printf("El promedio es: %f",p);
}
