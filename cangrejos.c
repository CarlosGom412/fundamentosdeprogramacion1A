#include<stdio.h>
int main()
{
	int p,sub,baj,i=1;
	printf("Programa que calcula los dias en el que un cangrejo saldra del oyo\n\n");
	printf("Introduce el profundo del oyo\n");
	scanf("%d",&p);
	printf("Introduce cunto avanzara el cangrejo por dia\n ");
	scanf("%d",&sub);
	printf("Introduce lo que retrocedera por noche el cangrejo\n");
	scanf("%d",&baj);
	if (baj<sub)
	{
			while (p>=0)
		{
			if (p>=0)
			{
				p=p-sub;
			}
			if (p>=0)
			{
				p=p+baj;
				i++;
			}
		}
		printf("El cangrejo saldra en %d dias",i);
	}
	else if(sub<=baj)
	{
		printf("El cangrejo no podra salir del pozo");
	}
}
