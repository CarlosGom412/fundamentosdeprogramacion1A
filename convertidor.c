/*Programa de conversiones*/
#include<stdio.h>//Librería de E/S
#include<conio.h>
  float mega;
  int bit;
  int byte;
  float giga;
  float tera;
  float div;
  int main()
  {//Inicio main
  printf("Este programa es un convertidor de unidad de datos \n donde la base sera los MEGABYTES\n\n");
  printf("Dame una cantidad en Megabytes  ");
  scanf("%f", &mega);
   bit=(int)mega*1024*1024*8;
   div= (mega*1024*1024*8)/ 1000;
   byte=(int) mega*1024*1024;
   giga=mega/1024;
   tera=mega/1024/1024;
  printf("El resultado en bits es: %d  ", bit);
  printf(" o tambien   %f",div); printf("x 1000 \n");
  printf("El resultado en bytes es: %d \n", byte);
  printf("El resultado en Gigabytes es: %f \n", giga);
  printf("El resultado en bits es: %f \n", tera);
  getch();
  
  return 0;
  }//Fin main
