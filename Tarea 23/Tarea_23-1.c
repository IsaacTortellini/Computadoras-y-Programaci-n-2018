//TAREA 23 DANIEL ISAAC REYES SANCHEZ
#include <stdio.h>
#include <stdlib.h>
struct alumnos
       {
         int edad;
         char nombre[60];
         char genero;
         char carrera[25];
         char nCuenta[10];
       };
       
       typedef struct alumnos ALUMNO;
       
int main(int argc, char *argv[])
{
    ALUMNO var1;
    printf("Introduce la edad:");
    scanf("%d",&var1.edad);
    
    printf("Introduce el nombre:");
    fflush(stdin);
    gets(var1.nombre);
    
    printf("Edad:%d nombre:%s\n",var1.edad, var1.nombre);
  
  system("PAUSE");	
  return 0;
}
