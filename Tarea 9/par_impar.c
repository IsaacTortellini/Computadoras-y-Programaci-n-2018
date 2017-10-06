//NUMERO PAR IMPAR POR DANIEL ISAAC REYES SANCHEZ
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num;

    printf( "\n   Introduce un numero entero: ");
    scanf( "%d", &num );

    if ( num % 2 == 0 )
        printf( "\n   Es un numero par. \n" );
    else
        printf( "\n   Es un numero impar. \n" );

  
  system("PAUSE");	
  return 0;
}
