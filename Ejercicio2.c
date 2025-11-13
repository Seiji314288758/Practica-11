/*Victor Seiji Nieto Morita
practica 11 ejercicio 2*/

#include <stdio.h>

void sumar(); // prototipo de la función
int sumar2(int a, int b);//prototipado de funcion con parametros y regreso

int main()
{
 int a, b, res;
 
 printf("Dame el primer valor: ");
 scanf("%d", &a);
 printf("Dame el sergundo valor: ");
 scanf("%d", &b);
 
 sumar(); // llamado de la función suma
 res = sumar2(a, b);
 
 printf("El resultado de la suma es %d\n", res);
 return 0;
}

void sumar() //función suma
{
  int z, x=6, y=10; //variables locales
  z=x+y;
  printf("%i",z);
}

int sumar2(int a, int b)//función que regresa el resultado de la suma
{
    
 return a + b; //regresa resultado   
}    
