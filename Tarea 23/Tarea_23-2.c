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
    ALUMNO var1,tmp;
    printf("Introduce la edad:");
    scanf("%d",&var1.edad);
    
    printf("Introduce el nombre:");
    //fflush(stdin);
    //gets(var1.nombre);
    scanf("%*c%[^\n]",tmp.nombre);
    
    printf("Introduce Carrera:");
    //fflush(stdin);
    //gets(tmp.carrera);
    scanf("%*c%[^\n]",tmp.carrera);
    
    printf("Edad:%d Nombre:%s Carrera:%s\n",var1.edad, tmp.nombre, tmp.carrera);
  
  system("PAUSE");	
  return 0;
}
