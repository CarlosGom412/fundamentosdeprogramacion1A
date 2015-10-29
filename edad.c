#include<stdio.h>
int edad;
int main()

{
	printf("Escribe tu edad  \n");
	scanf("%d",& edad);
	
	if ((edad>=0) && (edad<13))
	{
	printf("Eres un niño\n");
	
}
	else if ((edad>=13) && (edad<19))
	{
		printf("Eres un adolescente\n");
}
	else if ((edad>=19) && (edad<30))
	{
		printf("Eres un joven\n");
}
	else if ((edad>=30) && (edad<55))
	{
		printf("Eres un eres un adulto\n");
}
	
	else
	
		printf("Eres un adulto Mayor\n");


	return 0;
}
