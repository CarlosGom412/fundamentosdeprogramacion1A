#include<stdio.h>
int main()
{
	int matriz[3][3],esc,i,j;
	printf("Ingresa valores para la matriz\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Matriz  [%d , %d] :",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	printf("\n\nPor cuanto quieres multiplicar la matriz?\n\n");
	scanf("%d",&esc);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			matriz[i][j]=(matriz[i][j])*esc;
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
}
