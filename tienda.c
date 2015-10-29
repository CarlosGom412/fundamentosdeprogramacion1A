#include<stdio.h>

int main()
{
	int num,num2;
		printf("Programa que determina las ganancias y las compras de una tienda\n\n");
		printf("Escrbe el numero correspondiente de la opcion que deses\n");
printf("Compras: 1\n");
printf("Ganacia: 2\n");
scanf("%d",&num);
switch(num)
case 1: 
{
		printf("Acontinuacion se muestran 5 prodictos.\nintrodice el numero de caulquier producto\n");
		printf("Tortas: 1\n");
		printf("Jugos: 2\n");
		printf("Galletas: 3\n");
		printf("Refrescos: 4\n");
		printf("Papas: 5\n");
		scanf("%d",&num2);
		switch (num2){ int cant,ventas;
			case 1:{printf("Cuantas tortas se van a comprar\n");
			scanf("%d",&cant);
			ventas=cant*9;
			printf("Lo que se pagara por este producto es: $%d",ventas);printf("\nel costo de cada uno de los productos es de $9.00");
				break;
			}
			case 2:{printf("Cuantos jugos se van a comprar\n");
			scanf("%d",&cant);
			ventas=cant*7;
			printf("Lo que se pagara por este producto es: $%d",ventas);printf("\nel costo de cada uno de los productos es de $7.00");
				break;
			}
			case 3:{printf("Cuantas galletas se van a comprar\n");
			scanf("%d",&cant);
			ventas=cant*12;
			printf("Lo que se pagara por este producto es: $%d",ventas);printf("\nel costo de cada uno de los productos es de $12.00");
				break;
			}
			case 4:{printf("Cuantos refrescos se van a comprar\n");
			scanf("%d",&cant);
			ventas=cant*5;
			printf("Lo que se pagara por este producto es: $%d",ventas);printf("\nel costo de cada uno de los productos es de $5.00");
				break;
			}
			case 5:{printf("Cuantas papas se van a comprar\n");
			scanf("%d",&cant);
			ventas=cant*6;
			printf("Lo que se pagara por este producto es: $%d",ventas);printf("\nel costo de cada uno de los productos es de $6.00");
				break;
			}
			
		}
 
break;}
switch (num){
case 2:{int num3;
printf("Acontinuacion se muestran 5 prodictos. \nintrodice el numero de caulquier producto para saber cual \nes la ganancia de alguno de ellos:\n");
		printf("Tortas: 1\n");
		printf("Jugos: 2\n");
		printf("Galletas: 3\n");
		printf("Refrescos: 4\n");
		printf("Papas: 5\n");
		scanf("%d",&num3);
	switch(num3){int canti,ganancia;
		case 1:{printf("Escribe la cantidad de tortas que compraras\n");
		scanf("%d",&canti);
		ganancia=(canti*15)-(canti*9);
		printf("La ganancia es de:  $%d",ganancia); printf("    Por este producto la ganancia individual es de: $6.00\n");
		printf("El precio a vender es de $15.00");
			break;
		}
		
		case 2:{printf("Escribe la cantidad de jugos que compraras\n");
		scanf("%d",&canti);
		ganancia=(canti*10)-(canti*7);
		printf("La ganancia es de:  $%d",ganancia); printf("    Por este producto la ganancia individual es de: $3.00\n");
		printf("El precio a vender es de $10.00");
			break;
		}
		
		case 3:printf("Escribe la cantidad de galletas que compraras\n");
		scanf("%d",&canti);
		ganancia=(canti*15)-(canti*12);
		printf("La ganancia es de:  $%d",ganancia); printf("    Por este producto la ganancia individual es de: $3.00\n");
		printf("El precio a vender es de $15.00");
		
		case 4:{printf("Escribe la cantidad de refrescos que compraras\n");
		scanf("%d",&canti);
		ganancia=(canti*10)-(canti*5);
		printf("La ganancia es de:  $%d",ganancia); printf("    Por este producto la ganancia individual es de: $5.00\n");
		printf("El precio a vender es de $10.00");
			break;
		}
		
		case 5:{printf("Escribe la cantidad de papas que compraras\n");
		scanf("%d",&canti);
		ganancia=(canti*10)-(canti*6);
		printf("La ganancia es de:  $%d",ganancia); printf("    Por este producto la ganancia individual es de: $4.00\n");
		printf("El precio a vender es de $10.00");
			break;
		}	
	}
	break;
}
}
}
