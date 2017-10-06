//IMPRIMIR N ASTERISCOS POR DANIEL ISAAC REYES SANCHEZ
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i,num;

    printf("Introduce un numero entero: ");
    scanf("%d",&num);

    for(i=0; i<num ; i++)
        printf("*");

  
  system("PAUSE");	
  return 0;
}
