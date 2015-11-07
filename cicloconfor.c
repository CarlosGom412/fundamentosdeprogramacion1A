#include<stdio.h>
int main()
{
	int n1,n2,x,i;
	printf("Programa que hace una secuencia:\n");
	printf("Introduce el primer valor:\n");
	scanf("%d",&n1);
	printf("Introduce el segundo valor:\n");
	scanf("%d",&n2);
	if(n1<=n2)
	{
		for(x=1;x<=n2;x++)
		{
			printf("%d ",x);
		}
	}
	else
	{
		for(x=n1;x>=n2;x--)
		{
			printf(" %d",x);
		}
	}
	
}
