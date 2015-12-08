#include<stdio.h>
int main()
{
	int matriz[3][3],i,j;
	printf("Ingresa valores para la matriz\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Matriz  [%d , %d] :",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	
}
