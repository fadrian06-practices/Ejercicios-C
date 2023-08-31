/*
  Escriba un programa que compruebe si los ejemplos sobre las llamadas a
  las funciones matemáticas de la biblioteca que mostramos en la figura 5.2
  producen realmente los resultados indicados.
 */

/* ej05_03.c */
/* Verificación de las funciones matemáticas de la biblioteca */
#include <math.h>
#include <stdio.h>

/* la función main inicia la ejecución del programa */
int main() {
  /* calcula y despliega la raiz cuadrada */
  printf("sqrt(%.1f) = %.1f\n", 900.0, sqrt(900.0));
  printf("sqrt(%.1f) = %.1f\n", 9.0, sqrt(9.0));

  /* calcula y despliega la función exponencial e a la x */
  printf("exp(%.1f) = %f\n", 1.0, exp(1.0));
  printf("exp(%.1f) = %f\n", 2.0, exp(2.0));

  /* calcula y despliega el logaritmo (base e) */
  printf("log(%f) = %.1f\n", 2.718282, log(2.718282));
  printf("log(%f) = %.1f\n", 7.389056, log(7.389056));

  /* calcula y despliega el logaritmo (base 10) */
  printf("log10(%.1f) = %.1f\n", 1.0, log10(1.0));
  printf("log10(%.1f) = %.1f\n", 10.0, log10(10.0));
  printf("log10(%.1f) = %.1f\n", 100.0, log10(100.0));

  /* calcula y despliega el valor absoluto */
  printf("fabs(%.1f) = %.1f\n", 13.5, fabs(13.5));
  printf("fabs(%.1f) = %.1f\n", 0.0, fabs(0.0));
  printf("fabs(%.1f) = %.1f\n", -13.5, fabs(-13.5));

  /* calcula y despliega ceil( x ) */
  printf("ceil(%.1f) = %.1f\n", 9.2, ceil(9.2));
  printf("ceil(%.1f) = %.1f\n", -9.8, ceil(-9.8));

  /* calcula y despliega floor( x ) */
  printf("floor(%.1f) = %.1f\n", 9.2, floor(9.2));
  printf("floor(%.1f) = %.1f\n", -9.8, floor(-9.8));

  /* calcula y despliega pow( x, y ) */
  printf("pow(%.1f, %.1f) = %.1f\n", 2.0, 7.0, pow(2.0, 7.0));
  printf("pow(%.1f, %.1f) = %.1f\n", 9.0, 0.5, pow(9.0, 0.5));

  /* calcula y despliega fmod( x, y ) */
  printf("fmod(%.3f/%.3f) = %.3f\n", 13.675, 2.333, fmod(13.675, 2.333));

  /* calcula y despliega sin( x ) */
  printf("sin(%.1f) = %.1f\n", 0.0, sin(0.0));

  /* calcula y despliega cos( x ) */
  printf("cos(%.1f) = %.1f\n", 0.0, cos(0.0));

  /* calcula y despliega tan( x ) */
  printf("tan(%.1f) = %.1f\n", 0.0, tan(0.0));
}
