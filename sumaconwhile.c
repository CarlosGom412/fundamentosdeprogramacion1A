#include<stdio.h>
int main()
{
	int num,i,sum=0;
	printf("Ingrsar el numero final\n");
	scanf("%d",&num);
	i=1;
	while (i<=num)	
	{printf("\n%d",i);
	sum=sum+i;
	i=i+1;
	}
	printf("\n\nLa suma de este ciclo es de:   %d",sum);	
}
