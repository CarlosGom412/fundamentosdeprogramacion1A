#include<stdio.h>
int main()
{
	float prom,num,nums[10],sum=0;
	int i;
	printf("Programa que hace el promedio de 10 calificaciones\n\n");
	for(i=0;i<10;i++)
	{
		printf("  Introduce una calificacion:\n");
		scanf("%f",&num);
		nums[i]=num*0.1;
			sum=sum+nums[i];
		
		if(num>10)
		{
		printf("Dato ERRONEO");
		return 0;
		}
	}
	
	printf("\n%f",sum);
}
