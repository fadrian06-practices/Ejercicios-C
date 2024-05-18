/*
  Implemente las siguientes funciones enteras:

  a) La función celsius devuelve el equivalente en Celsius de la temperatura en
  Fahrenheit.
  b) La función fahrenheit devuelve el equivalente en Fahrenheit de
  la temperatura en Celsius.
  c) Utilice estas funciones para escribir un programa que imprima una gráfica
  que muestre el equivalente en Fahrenheit de las temperaturas Celsius de 0 a
  100 grados, y los equivalentes Celsius de todas las temperaturas Fahrenheit
  de 32 a 212 grados. Imprima las salidas de forma tabular de modo que minimice
  el número de líneas de salida, pero que sean claras.
 */

#include <stdio.h>

double celcius(double fahrenheit) { return (fahrenheit - 32) * ((float)5 / 9); }

double fahrenheit(double celcius) { return (celcius * ((float)9 / 5)) + 32; }

int main() {
  int f = 32; // Farenheits
  int c = 0;  // Celcius

  printf("Celcius -> Fahrenheit\t|  Fahrenheit -> Celcius\n");
  printf("-------    ----------\t|  ----------    -------\n");

  do {
    printf("%7d    %.2f\t|  %10d    %.2f\n", c, fahrenheit(c), f, celcius(f));
    ++c;
    ++f;
  } while (c <= 100 && f <= 212);

  printf("\n");
}
