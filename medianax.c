#include <stdio.h> 
#include <stdlib.h> 
#define MAX 10
int main() 
{ 
    int arreglo[MAX],i=0,ax[MAX],pos=0,num=0;
    int j=0,mayor=0,pmayor=0,b=0;
    for(i=0;i<MAX;i++) { 
        printf("Ingresa No. %d de la secuencia: ",i+1); 
        scanf(" %d",&arreglo[i]); 
    } 
    for(i=0;i<MAX;i++) { 
        num = arreglo[i]; 
        pos = i; 
        for(j=i;j<MAX;j++) { 
            if(arreglo[j]==num) ax[pos]++; 
        } 
    } 
    mayor=ax[0]; 
    pmayor = 0; 
    for(i=0;i<MAX;i++) { 
        if(ax[i]>mayor) { 
            pmayor=i; 
            mayor=ax[i]; 
        } 
    } 
    b=0; 
    for(i=MAX;i>0 && b==0;i--) { 
        b=1; 
        for(j=0;j<i;j++) { 
            if(arreglo[j]>arreglo[j+1]) { 
                num = arreglo[j]; 
                arreglo[j] = arreglo[j+1]; 
                arreglo[j+1]=num; 
                b=0; 
            } 
        } 
    } 
    printf("\nElementos ordenados del arreglo : "); 
    for(i=0;i<MAX;i++) { 
        printf(" %d",arreglo[i]); 
    } 
    if(MAX%2!=0) {  
    } else { 
        printf("\nEL valor 1 de la mediana es : %d",arreglo[MAX/2]); 
        printf("\nEL valor 2 de la mediana es : %d\n",arreglo[(MAX/2)-1]); 
  system ("pause");
}
}
