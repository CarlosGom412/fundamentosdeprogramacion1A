#include<stdio.h>
int main()
{
	int i,final,j;
	printf("Introduce el numero final de la serie\n");
	scanf("%d",&final);
	for(i=1;i<=final;i++)
	{
		printf("%d ",i);
		if(i%2==0)
		{
			for(j=2;j<=i;j++)
			{
				printf("%d ",i);
			}
		}
	}
}
