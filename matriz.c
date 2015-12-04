#include<stdio.h>
int main()
{
	int matriz[3][3];
	printf("Ingresa valores para la matriz\n\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("Matriz  [%d , %d] :",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
}
