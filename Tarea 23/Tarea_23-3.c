//TAREA 23 DANIEL ISAAC REYES SANCHEZ
#include <stdio.h>
#include <stdlib.h>
#include "alumnos.h"       
int main(int argc, char *argv[])
{
    ALUMNO var1;
    var1=nuevoAlumno();
    
    printf("Edad:%d Nombre:%s\n",var1.edad, var1.nombre);
  
  system("PAUSE");	
  return 0;
}
