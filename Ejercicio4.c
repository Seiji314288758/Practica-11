/*Victor Seiji Nieto Morita
practica 11 ejercicio 4*/

#include<stdio.h>

void incremento();

/* La variable enteraGlobal es vista por todas
las funciones (main e incremento) */
int enteraGlobal;

int main()
{
  // La variable cont es local a la función main
  int cont;
  enteraGlobal = 0; // La función main accede a la variable global
  for (cont=0 ; cont<5 ; cont++)
{
  incremento();
}
  return 0;
}

void incremento()
{

  int enteraLocal = 5;// La variable enteraLocal es local a la función incremento
  enteraGlobal = enteraGlobal + 2;
  int res = enteraLocal + enteraGlobal;
  
  printf("global(%i) + local(%i) = %d\n",enteraGlobal, enteraLocal, res);
}
