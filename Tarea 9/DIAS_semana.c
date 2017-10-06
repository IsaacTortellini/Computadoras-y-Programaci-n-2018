#include <stdio.h>
#include <stdlib.h>
//DIAS DE LA SEMANA POR DANIEL ISAAC REYES SANHEZ
int main(int argc, char *argv[])
{
     int dia;

    printf( "\n   Introduce un numero entero entre 1 y 7: ");
    scanf( "%d", &dia );

    switch ( dia )
    {
         case 1 : printf( "\n   Lunes \n" );
                  break;
         case 2 : printf( "\n   Martes \n" );
                  break;
         case 3 : printf( "\n   Miercoles \n");
                  break;
         case 4 : printf( "\n   Jueves \n" );
                  break;
         case 5 : printf( "\n   Viernes \n" );
                  break;
         case 6 : printf( "\n   Sabado \n");
                  break;
         case 7 : printf( "\n   Domingo \n" );
                  break;
        default : printf( "\n   Debes introducir un numero entero entre 1 y 7, loco. \n");
    }

  system("PAUSE");	
  return 0;
}
