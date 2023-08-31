/*
  (Leyes de De Morgan.) En este capítulo explicamos los operadores lógicos &&,
  ||, y !. Algunas veces, las leyes de De Morgan hacen más conveniente para
  nosotros el uso de expresiones lógicas. Estas leyes establecen que la
  expresión !(condicion1 && condicion2) es lógicamente equivalente a la
  expresión (!condicion1 || !condicion2). Utilice las leyes de De Morgan para
  escribir expresiones equivalentes para cada una de las siguientes expresiones
  lógicas, y después escriba un programa que muestre que en cada caso, tanto
  la expresión original como la nueva expresión son equivalentes.

  a) !( x < 5 ) && !( y >= 7 )

    Respuesta: !(x < 5 || y >= 7)

  b) !( a == b ) || !( g != 5 )

    Respuesta: !(a == b && g != 5)

  c) !( ( x <= 8 ) && !( y > 4 ) )

    Respuesta:
      = !((x <= 8) && (y <= 4))
      = !(x <= 8) || !(y <= 4)

  d) !( ( i > 4 ) || ( j <= 6 ) )

    Respuesta: !(i > 4 && j <= 6)
*/

/* Verificación de las leyes de Morgan */
#include <stdio.h>
int main() {
  /*----------  a) !(x < 5) && !(y >= 7)  ----------*/
  short x, y, p, q;

  printf("a) !(x < 5) && !(y >= 7)\n");
  printf("Introduce el valor de X y el valor de Y: ");
  scanf("%hd %hd", &x, &y);

  p = !(x < 5) && !(y >= 7);
  q = !(x < 5 || y >= 7);
  printf("\n(!(x < 5) && !(y >= 7)) == !(x < 5 || y >= 7): ");
  printf("%s\n\n", p == q ? "true" : "false");

  /*----------  b) !(a == b) || !(g != 5)  ----------*/
  short a, b, g;

  printf("b) !(a == b) || !(g != 5)\n");
  printf("Introduce el valor de 'a', el valor de 'b' y el valor de 'g': ");
  scanf("%hd %hd %hd", &a, &b, &g);
  p = !(a == b) || !(g != 5);
  q = !(a == b && g != 5);
  printf("\n(!(a == b) || !(g != 5)) == (!(a == b && g != 5)): ");
  printf("%s\n\n", p == q ? "true" : "false");

  /*----------  c) !((x <= 8) && !(y > 4))  ----------*/
  printf("c) !((x <= 8) && !(y > 4))\n");
  printf("Introduce el valor de X y Y: ");
  scanf("%hd %hd", &x, &y);
  p = !((x <= 8) && !(y > 4));
  q = !(x <= 8) || !(y <= 4);
  printf("\n(!((x <= 8) && !(y > 4))) == !(x <= 8) || !(y <= 4): ");
  printf("%s\n\n", p == q ? "true" : "false");

  /*----------  d) !( ( i > 4 ) || ( j <= 6 ) )  ----------*/
  short i, j;

  printf("d) !((i > 4) && !(j <= 6))\n");
  printf("Introduce el valor de 'i' y el valor de 'j': ");
  scanf("%hd %hd", &i, &j);
  p = !((i > 4) || (j <= 6));
  q = !(i > 4) && !(j <= 6);
  printf("\n(!((i > 4) || (j <= 6))) == !(i > 4) && !(j <= 6): ");
  printf("%s\n\n", p == q ? "true" : "false");
}
