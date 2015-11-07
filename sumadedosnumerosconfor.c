#include<stdio.h>
int main()
{
	int n1,n2,i,suma;
	printf("Programa que multiplica dos numeros\n");
	printf("Introduce el primer numero:\n");
	scanf("%d",&n1);
	printf("Introduce el segundo numero:\n");
	scanf("%d",&n2);
	for (i=1;i<=n2;i++)
	{
		suma=suma+n1;
		printf("%d",n1);
	}
	suma=suma-1;
	printf("  %d  ",suma);
	return 0;
}
