/* propinas*/
#include<stdio.h>//libreria de es
	float cuenta;
	float propina;
	float total;
	float nper;
	float tentrep;
	int main()
	{//inicio main
		printf("DAME EL TOTAL A PAGAR DE TU CUENTA ");
		scanf("%f", &cuenta);
		propina=cuenta*0.10;
		total=propina+cuenta;
		printf("la propina es de %f \n", propina);
		printf("el total es de %f \n \n", total);
		printf("ENTRE CUANTOS SE VA A DIVIDIR LA CUENTA ");
		scanf("%f", &nper);
		tentrep=total/nper;
		printf("Lo que vas a pagar por cada uno %f \n", tentrep);
		return 0;
		
	}//fin main
