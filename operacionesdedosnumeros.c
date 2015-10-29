/* Operaciones de dos digitos*/
#include<stdio.h>//libreria de es
	int n1;
	int n2;
	int suma;
	int resta;
	int mult;
	int div;
	int main()
	{//inicio main
		printf("Dame un numero ");
		scanf("%d", &n1);
		printf("Dame un segundo numero ");
		scanf("%d", &n2);
		suma=n1+n2;
		resta=n1-n2;
		mult=n1*n2;
		div=n1/n2;
		printf("El resultado de la suma es % d ", suma);
		printf("El resultado de la resta es %d", resta);
		printf("El resultado de la multiplicacion %d",mult);
		printf("El resultado de la division es %d", div);
		return 0;
		
	}//fin main
