#include <stdio.h>
int main()
{	int num[10],i,may,men;
	printf("Programa que encuentra el numero mayor y menor\n");
	printf("Introduce 10 numeros\n");
	for(i=1;i<=10;i++)
	{printf("Inserta el numero %d  ",i);
	scanf("  %d",&num[i]);
	if(num[i]>may)may=num[i];
	if(num[i]<men)men=num[i];}
	printf("\n  El mayor es:  %d\n  El menor es:  %d",may,men);
return 0;}
