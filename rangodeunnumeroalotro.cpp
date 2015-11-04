#include <stdio.h>
int main()
{	int num1,num2;
	printf("Programa que muestra el rango entre dos numeros\n");
	printf("Introduce el primer numero\n");
	scanf("%d",&num1);
	printf("Introduce el primer numero\n");
	scanf("%d",&num2);
	if(num1<=num2)
	{
	while (num1<=num2)
	{
	printf("%d",num1);
	num1=num1+1;
	}
		}
	else if(num2<=num1)
	{
		while(num2<=num1)
		{
			printf("%d",num2);
			num2=num2+1;
		}
	}
return 0;}
