#include <stdio.h>
#include <stdlib.h>
#include "info.h"

int main(int argc, char *argv[])
{
    appInfoData("Ejemplo de Punteros","16/11/2017");
    
    int a;
    a=10;
    int *puntero;
    puntero=&a;
    
    printf("%d\n", *puntero);
    
    
  
  system("PAUSE");	
  return 0;
}
