//NUMERO ENTERO Y DECIMALES POR DANIEL ISAAC REYES SANCHEZ
//TAREA12
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float decimal1=0;
    float decimal2=0;
    int numero=0;
    printf("\nIngresa un numero decimal:\n");
    scanf("%f",&decimal1);
    printf("\nIngresa otro numero decimal:\n");
    scanf("%f",&decimal2);
    printf("Ahora ingresa un numero entero:\n");
    scanf("%d",&numero);
    if(decimal1==decimal2&&decimal1==numero)
    printf("\nLos 3 numeros son iguales.");
    else {
         if(decimal1>decimal2&&decimal1>numero)
         printf("\n %.2f es el mayor",decimal1);
          if(decimal2>decimal1&&decimal2>numero)
          printf("\n %.2f es el mayor",decimal2);
           if(numero>decimal1&&numero>decimal2)
           printf("\n %d es el mayor",numero);}
           
    if (decimal1<decimal2&&decimal1<numero)
      printf("\n %.2f es el menor. \n", decimal1);  
        if (decimal2<decimal1&&decimal2<numero)
        printf("\n %.2f es el menor. \n", decimal2); 
          if (numero<decimal1&&numero<decimal2)
          printf("\n %d es el menor. \n", numero); 
      
  system("PAUSE");	
  return 0;
}
