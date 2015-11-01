#include<stdio.h>
int main()
{
	int i,num1,num2,res;
	printf("Dame el primer numero\n");
	scanf("%d",&num1);
	printf("Dame el segundo numero: \n");
	scanf("%d",&num2);
	res=num1*num2;
	do{	
		num2=num2;
		printf("+%d",num2);
		num1=num1+num2;	
	}
	while (num1<=res);
	
	do	{
		i=res;
		printf("  =%d",i);
		i=i+res;
	}
		while (i<=res);
}
