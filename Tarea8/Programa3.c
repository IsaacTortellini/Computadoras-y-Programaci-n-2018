//PROGRAMA TABLAS DE 3 A 6 CON SCAN Y FOR POR DANIEL ISAAC REYES SANCHEZ 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    
    printf("Tablas de multiplicar de 3 a 6.");
    printf("\nPresiona cualquier numero y enter para continuar.");
    scanf("%d");
    for(a=1;a<=10;a=a+1){
                         printf(" 3 x %d = %d \n",a,a*3);
                         }
    for(b=1;b<=10;b=b+1){
                         printf(" 4 x %d = %d \n",b,b*4);
                         }
    for(c=1;c<=10;c=c+1){
                         printf(" 5 x %d = %d \n",c,c*5);
                         }
    for(d=1;d<=10;d=d+1){
                         printf(" 6 x %d = %d \n",d,d*6);
}

  
  system("PAUSE");	
  return 0;
}
