//IVA POR DANIEL ISAAC REYES SANCHEZ

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 
 float cantidad,subtotal,total,iva;
 
 printf("Introduce una cantidad: ");scanf("%f",&cantidad);

  total=cantidad;
  iva=(cantidad*15)/100;
  subtotal=total-iva;
 
 printf("Cantidad:  %.2fn\n",cantidad);
 printf("IVA:       %.2fn\n",iva);
 printf("Subtotal:  %.2fn\n",subtotal);
 printf("Total:     %.2fn\n",total);
 
  system("PAUSE");	
  return 0;
}

