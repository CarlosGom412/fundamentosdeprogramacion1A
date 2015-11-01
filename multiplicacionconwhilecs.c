#include<stdio.h>
int main()
{
	int num1,num2,i=0,res;

	printf("Inserta el primer numero\n");
	scanf("%d",&num1);
	printf("Inserta el segundo numero: \n");
	scanf("%d",&num2);
	res=num1*num2;
	while (num1<=res)
	{
		num2=num2;
		printf("+%d",num2);
		num1=num1+num2;
	}
	
	while (i<=res)
	{
		i=res;
		printf("  =%d",i);
		i=i+res;
	}
}
