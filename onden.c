#include <stdio.h>


int main()
{
	int num1;
	int num2;
	int num3;
	printf("Programa que ordena tres numeros de mayor a menor\n");
	printf("Dame el primer numero\n");
	scanf("%d",&num1);
	printf ("Dame el segundo numero\n");
	scanf("%d",&num2);
	printf ("Dame el tercer numero\n");
	scanf("%d",&num3);
	
	if ((num1>=num2) && (num1>=num3)&&(num2>=num3))
	{
	printf("El orden es:%d",num1);printf(" %d",num2);printf(" %d",num3);
	}	
	else if ((num1>=num2) && (num1>=num3)&&(num3>=num2))
	{
	printf("El orden es:%d",num1);printf(" %d",num3);printf(" %d",num2);
	}
	else if ((num2>=num1) && (num2>=num3)&&(num1>=num3))
	{
	printf("El orden es:%d  ",num2);printf(" %d",num1);printf(" %d",num3);
	}
	else if ((num2>=num1) && (num2>=num3)&&(num3>=num1))
	{
	printf("El orden es:%d",num2);printf(" %d",num3);printf(" %d",num1);
	}
	else if ((num3>=num1) && (num3>=num2)&&(num1>=num2))
	{
	printf("El orden es:%d",num3);printf(" %d",num1);printf(" %d",num2);
	}
	else if ((num3>=num1) && (num3>=num2)&&(num2>=num1))
	{
	printf("El orden es:%d",num3);printf(" %d",num2);printf(" %d",num1);
	}	
	return 0;
}
