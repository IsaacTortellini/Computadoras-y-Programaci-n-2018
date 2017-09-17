//*
Daniel Isaac Reyes Sánchez
computadoras y programacion
programa de comparacion de 3 numeros y cual es el menor
Tarea No 7
*/
//INGRESA 3 NUMEROS DIFERENTES>0, MUESTRA EL MENOR.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num1=0;
    int num2=0;
    int num3=0;
    printf("Ingresa un numero entero mayor a 0:\n");
    scanf("%d",&num1);
    printf("Ingresa un segundo numero entero mayor a 0:\n");
    scanf("%d",&num2);
    printf("Ingresa un tercer numero entero mayor a 0:\n");
    scanf("%d",&num3);
    if(num1>0&&num2>0&&num3>0&&(num1!=num2&&num1!=num3&&num2!=num3)){
    if (num1<num2&&num1<num3){
                              printf("%d es el menor de los 3.",num1); 
  }
  if(num2<num1&&num2<num3){
                           printf("%d es el menor de los 3.",num2);
  }
  if(num3<num1&&num3<num2){
                           printf("%d es el menor de los 3.",num3);
}
}else{
      printf("Los numeros deben ser diferentes entre si y mayores a 0.\n");
}
  system("PAUSE");	
  return 0;
}
