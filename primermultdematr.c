#include<stdio.h>
int main()
{
	int ma[3][3],mb[3],matt[3],i=0,j=0;
	printf("Ingresa valores para la matriz\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Matriz  [%d , %d] :",i,j);
			scanf("%d",&ma[i][j]);
		}
	}
	printf("Ingresa valores del vector\n\n");
	for(i=0;i<3;i++)
	{
			scanf("%d",&mb[i]);
	}
	matt[0]=((ma[0][0])*mb[0])+((ma[1][0])*(mb[1]))+((ma[2][0])*(mb[2]));
	matt[1]=((ma[0][1])*mb[0])+((ma[1][1])*(mb[1]))+((ma[2][1])*(mb[2]));
	matt[2]=((ma[0][2])*mb[0])+((ma[1][2])*(mb[1]))+((ma[2][2])*(mb[2]));
	printf("\nLa matriz que se multiplicara es:\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",ma[i][j]);
		}
		printf("\n");
	}
	printf("\nEl vector que se multiplicara es:\n\n");
	for(i=0;i<3;i++)
	{
			printf("%d ",mb[i]);
	}
	printf("\nEl resultado es el siguiente:\n\n");
	for(i=0;i<3;i++)
	{
			printf("\n%d ",matt[i]);
	}

}
