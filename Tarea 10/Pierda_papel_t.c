//PIEDRA PAPEL TIJERAS POR DANIEL ISAAC REYES SANCHEZ
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

  char *v[3] = {"piedra","papel","tijeras"};
  int ju, pc, jugados = 1, w = 0, l = 0;
 
  
  do {
    printf("Turno %d, elije tu arma para el 2 de 3 y presiona enter.(1, 2, 3) Victorias:%d Derrotas:%d\n",jugados, w,l);
    printf("1. Piedra destructora de mundos\n");
    printf("2. Papel awuado\n");
    printf("3. Tijeras de adamantium\n");
    do
      scanf("%d",&ju);
    while ((ju == '\n') && (ju != '1' || ju != '2' || ju != '3'));
    while(getchar()!='\n');
    ju--;
    pc = rand() % 3;
    printf("Eliges %s y la PC eligio %s  ",v[ju], v[pc]);
    if (ju == pc)
      printf("Empate increible.\n");
    else if ((ju == 0 && pc == 2)||(ju == 1 && pc == 0)||(ju == 2 && pc == 1)) {
      printf("Ganaste ( por ahora)\n");
      w++;
    }
    else {
      printf("Gana la pc (y pronto dominaran el mundo)\n");
      l++;
    }
    jugados++;
    printf("-----------------------------\n");
  } while (w < 2 && l < 2);
  if (w > l)
    printf("El futuro de la humanidad esta a salvo gracias a t, ganaste.");
  else
    printf("Eras el elegido, ahora has sido derrotado.");
  getchar();
  return 0;

  
  system("PAUSE");	
  return 0;
}
