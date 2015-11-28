#include<stdio.h>
int main()
{
	char cadena[50],subcadena[50];
	int i,j;
	printf("Inserta una parabra\n\n");
	scanf("%s",cadena);
	printf("\n Inserta una comparativa\n\n");
	scanf("%s",subcadena);
	for (i=0;i<50;i++)
	{
		while(cadena[i]!='\0'){
		while(cadena[i]==subcadena[j])
		{
			i++;
			j++;
			if (subcadena[j]=='\0')
			{
				printf("Si existe");
				return 0;
			}
			else if (subcadena[j]!=cadena[i]){printf("No existe");}
		}
		i++;
	}
}}
