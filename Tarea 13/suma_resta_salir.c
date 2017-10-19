//SUMA_RESTA POR DANIEL ISAAC REYES SANCHEZ
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{	
	int Resultado,Num1,Num2,Seleccion; 
    do 
	{
	    printf("\nSelecciona una opcion:\n");
		printf("1) Suma\n");
		printf("2) Resta\n");
		printf("3) Salir\n");	
		printf("\nElejiste: ");	
		scanf("%d", &Seleccion);
        switch(Seleccion)
        {
        	case 1:       	       
		            printf("\nIngresa un numero: ");
		            scanf("%d",&Num1);                           
		            printf("\nIngresa otro numero para sumar: ");
		            scanf("%d",&Num2);
		            Resultado=Num1+Num2;
		            printf("El resultado es: %d\n",Resultado);       	       
        	break;
        	case 2:
		            printf("\nIngresa un numero: ");
		            scanf("%d",&Num1);                          
		            printf("\nIngresa otro numero para restar: ");
		            scanf("%d",&Num2);
		            Resultado=Num1-Num2;
		            printf("\nEl resultado es: %d",Resultado);				   	
        	break;
        default:
        printf("\nAdios vaquero.\n");
        break;	
    }}
	while (Seleccion!=3);
		

  system("PAUSE");	
  return 0;
}
