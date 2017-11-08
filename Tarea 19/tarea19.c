//Tarea 19 Reyes Sanchez Daniel Isaac CyP 2017
#include <stdio.h>
#include <stdlib.h> 
  int figura(int a, int b){
    int j=0;
    int k=0;
    for(j=1;j<=a;j=j+1){
    for(k=1;k<=b;k=k+1){
      printf("+");
                                               
      }
      printf("\n");
      }
      }
int main(int argc, char *argv[]){
    int a,b;
    printf("Ingresa la altura del cuadrado: \n");
     scanf("%d", &a);
    printf("Ingresa la base del cuadrado:\n");
     scanf("%d", &b);
    figura(a=a,b=b);
    
  system("PAUSE");	
  return 0;
}

