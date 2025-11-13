/*Victor Seiji Nieto Morita
practica 11 ejericio 3*/

#include <stdio.h>

int resultado; //variable global

void multiplicar(); // prototipo de la función
void suma();
void resta();
void division();

int main()
{
   multiplicar(); //llamado de la función multiplicar
   printf("Resultado multiplicacion: %i\n",resultado);
   sumar();
   printf("Resultado suma: %d\n", resultado);
   restar();
   printf("Resultado resta: %d\n", resultado);
   dividir();
   printf("Resultado division: %d\n", resultado);
   return 0;
}

void multiplicar() //función multiplicar
{
   resultado = 5 * 4;
}
void sumar() //función multiplicar
{
   resultado = 5 + 4;
}
void restar() //función multiplicar
{
   resultado = 5 - 4;
}
void dividir() //función multiplicar
{
   resultado = 5 / 4;
}
