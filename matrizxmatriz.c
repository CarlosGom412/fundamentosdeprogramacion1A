#include<stdio.h>
int main()
{
	int ma[3][3],mb[3][3],matt[3][3],i=0,j=0;
	printf("Ingresa valores para la matriz\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Matriz  [%d , %d] :",i,j);
			scanf("%d",&ma[i][j]);
		}
	}
	printf("Ingresa valores de la otra matriz\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Matriz  [%d , %d] :",i,j);
			scanf("%d",&mb[i][j]);
		}
	}
	matt[0][0]=((ma[0][0])*(mb[0][0]))+((ma[1][0])*(mb[0][1]))+((ma[2][0])*(mb[0][2]));
	matt[0][1]=((ma[0][0])*(mb[1][0]))+((ma[1][0])*(mb[1][1]))+((ma[2][0])*(mb[1][2]));
	matt[0][2]=((ma[0][0])*(mb[2][0]))+((ma[1][0])*(mb[2][1]))+((ma[2][0])*(mb[2][2]));
	matt[1][0]=((ma[0][1])*(mb[0][0]))+((ma[1][1])*(mb[0][1]))+((ma[2][1])*(mb[0][2]));
	matt[1][1]=((ma[0][1])*(mb[1][0]))+((ma[1][1])*(mb[1][1]))+((ma[2][1])*(mb[1][2]));
	matt[1][2]=((ma[0][1])*(mb[2][0]))+((ma[1][1])*(mb[2][1]))+((ma[2][1])*(mb[2][2]));
	matt[2][0]=((ma[0][2])*(mb[0][0]))+((ma[1][2])*(mb[0][1]))+((ma[2][2])*(mb[0][2]));
	matt[2][1]=((ma[0][2])*(mb[1][0]))+((ma[1][2])*(mb[1][1]))+((ma[2][2])*(mb[1][2]));
	matt[2][2]=((ma[0][2])*(mb[2][0]))+((ma[1][2])*(mb[2][1]))+((ma[2][2])*(mb[2][2]));
printf("\n\nLa Matriz A: multiplica a: \n");
for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",ma[i][j]);
		}
		printf("\n");
	}
	printf("\n\nLa Matriz B: y el resultado es: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",mb[i][j]);
		}
		printf("\n");
	}
	printf("\n\nLa Matriz C\n");
for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",matt[i][j]);
		}
		printf("\n");
	}
	

}
