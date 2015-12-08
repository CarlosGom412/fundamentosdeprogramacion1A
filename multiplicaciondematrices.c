#include <stdio.h>
int main()
{
	int f1,c1,f2,c2,i,j,k;
 	printf("\nIntroduce cuantas filas y columnas tendra la matriz A\n\n");
	scanf("%d",&f1);
  	scanf("%d",&c1);
  	printf("\nIntroduce cuantas filas y columnas tendra la matriz B\n\n");
  	scanf("%d",&f2);
  	scanf("%d",&c2);
  	int ma[f1][c1],mb[f2][c2],mc[f1][c2];
  	if(c1!=f2)
	  {
             printf("NO se puede multiplicar estas matrices\n");
             return 0;
	  }
  		for(i=0;i<f1;i++){
      for(j=0;j<c1;j++){
          printf("Escribe el valor de la matriz 1 (%d, %d)",i,j);
          scanf("%d", &ma[i][j]);
      }
  }
  printf("\n\n");
  for(i=0;i<f2;i++){
      for(j=0;j<c2;j++){
          printf("Escribe el valor de la matriz 2 (%d, %d)",i,j);
          scanf("%d", &mb[i][j]);
      }
  }
  for(i=0;i<f1;i++){
      for(j=0;j<c2;j++){
          mc[i][j]=0;
          for(k=0;k<c1;k++){
              mc[i][j]=(mc[i][j]+(ma[i][k]*mb[k][j]));
          }
      }
  }
  printf("\n Matriz A");
  printf("\n");
  for(i=0;i<f1;i++){
      printf("\n ");
      for(j=0;j<c1;j++){
          printf("%d  ", ma[i][j]);
      }
  }
  printf("\n Matriz B");
  printf("\n");
  for(i=0;i<f2;i++){
      printf("\n ");
      for(j=0;j<c2;j++){
          printf("%d  ", mb[i][j]);
      }
  }
  printf("\n Matriz resultante 'C'");
  printf("\n");
  for(i=0;i<f1;i++){
      printf("\n ");
      for(j=0;j<c2;j++){
          printf("%d  ",mc[i][j]);
      }
  }
}
