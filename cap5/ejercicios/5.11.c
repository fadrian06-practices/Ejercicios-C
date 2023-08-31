/*
  La función floor puede utilizarse para redondear un número a una posición
  decimal determinada. La instrucción:

    y = floor( x * 10 + .5 ) / 10;

  redondea x a la posición de las décimas (la primera posición a la derecha del
  punto decimal). La instrucción

    y = floor( x * 10 + .5 ) / 100;

  redondea x a la posición de las centésimas (la segunda posición a la derecha
  del punto decimal).

  Escriba un programa que defina cuatro funciones para
  redondear al número x de distintas maneras:

  a) redondeaAentero( numero )
  b) redondeaAdecimas ( numero )
  c) redondeaAcentesimas ( numero )
  d) redondeaAmilesimas ( numero )

  Por cada valor leído, su programa debe imprimir el valor original, el número
  redondeado al entero más cercano, el número redondeado a la décima más
  cercana, el número redondeado a la centésima más cercana, y el número
  redondeado a la milésima más cercana.
 */

/* Imprime un real redondeado a varios dígitos de precisión */
#include <math.h>
#include <stdio.h>

int redondeaAentero(double numero) {
  return (int)floor(numero + .5);
}

double redondeaAdecimas(double numero) {
  return floor(numero * 10 + .5) / 10;
}

double redondeaAcentesimas(double numero) {
  return floor(numero * 100 + .5) / 100;
}

double redondeaAmilesimas(double numero) {
  return floor(numero * 1000 + .5) / 1000;
}

double obtenerNumero() {
  double x;
  printf("Introduce un numero (-1 para terminar): ");
  scanf("%lf", &x);
  return x;
}

int main() {
  while (1) {
    double x = obtenerNumero();

    if (x == -1)
      break;

    printf("\nNumero original: %f\n", x);
    printf("Numero redondeado a entero: %d\n", redondeaAentero(x));
    printf("Numero redondeado a decimas: %.1f\n", redondeaAdecimas(x));
    printf("Numero redondeado a centesimas: %.2f\n", redondeaAcentesimas(x));
    printf("Numero redondeado a milesimas: %.3f\n\n", redondeaAmilesimas(x));
  }

  printf("\n");
}
