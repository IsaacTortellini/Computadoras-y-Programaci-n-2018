//Tarea 20 Reyes Sanchez Daniel Isaac 1159
#include <stdio.h>
#include <stdlib.h>
#include "FunIva.h"
	int a,b,i,i2,Op;
	float Iva;
	
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

int main(int argc, char *argv[]) {
	
	printf(" 1) Cuadro de Simbolos.\n");
	printf(" 2) IVA.\n");
    printf("Selecciona una opcion y presiona enter: ");
    scanf("%d",&Op);
    
    if((Op<3)&&(Op>0)){
        system("CLS");
        switch(Op){
        	case 1:
    printf("Ingresa la altura del cuadrado: \n");
     scanf("%d", &a);
    printf("Ingresa la base del cuadrado:\n");
     scanf("%d", &b);
    figura(a=a,b=b);
        	break;
    	
    	    case 2:   		  	       	
	printf("\nDame la cantidad IVA: ");
    scanf("%f",&Iva);
    printf("\n\nEl IVA es: %f\n\nEl Subtotal es: %f\n\nEl Total es: %f\n\n",Iva,Sub(Iva),Tot(Iva));
    	    break;
	    }
	}
	else
	{
		printf("\n\n\tSelecciona una de las opciones antes mostradas.\n\n\n");
	}
    system("PAUSE");
	return 0;
}
