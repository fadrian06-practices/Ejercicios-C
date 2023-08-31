/*
  ¿Será posible llamar a main de manera recursiva? Escriba un programa que
  contenga una función main. Incluya la variable static cuenta, inicializada
  en 1. Postincremente e imprima el valor de cuenta cada vez que se invoque a
  main. Ejecute su programa. ¿Qué sucede?
 */

/* Función main() recursiva */
#include <stdio.h>

int main() {
  static int cuenta = 1;
  cuenta++;
  printf("%d\n", cuenta);
  main();
}

// RESPUESTA: un incremento infinito
