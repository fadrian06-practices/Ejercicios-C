/*
  Una aplicación de la función floor es la de redondear un valor al entero más
  cercano. La instrucción: y = floor(x + .5 ); redondea el número x al entero
  más cercano, y asigna el resultado a y.

  Escriba un programa que lea varios números y utilice la instrucción anterior
  para redondear estos números al entero más cercano. Por cada uno de los
  números procesados, imprima el número original y el número redondeado.
 */

/* Imprime un flotante redondeado */
#include <math.h>
#include <stdio.h>

double obtenerNumero() {
  double x;

  printf("Introduce un numero (-1 para terminar): ");
  scanf("%lf", &x);

  return x;
}

double redondear(double x) { return floor(x + .5); }

int main() {
  while (1) {
    double x = obtenerNumero();

    if (x == -1)
      break;

    double y = redondear(x);
    printf("\nNumero original: %lf\nNumero redondeado: %.0lf\n\n", x, y);
  }

  printf("\n");
}
