#include <stdio.h>



int main(int argc, char *argv[])
{
  int dato;
  FILE *ptrArchivo;
  ptrArchivo=fopen("datos.dat","wb");  
  
  
  if(ptrArchivo==NULL){
     printf("Error al abrir el arhivo.\n");
     }else{
           printf("Dame el dato a guardar al archivo:");
           scanf("%d",&dato);
           
           fprintf(ptrArchivo,"%d\n",dato);
           fprintf(ptrArchivo,"%d\n",++dato);
           fprintf(ptrArchivo,"%d\n",++dato);
  
  fclose(ptrArchivo);
}  int datoLeido;

ptrArchivo=fopen("datos.dat","rb");
if(ptrArchivo==NULL){
          printf("Error al abrir el archivo\n");
          }else{
                while(!feof(ptrArchivo)){
                     fscanf(ptrArchivo,"%d",&datoLeido);
                     printf("Dato:%d\n",datoLeido);
                     }
                     fclose(ptrArchivo);
                     }                
  system("PAUSE");	
  return 0;
}
