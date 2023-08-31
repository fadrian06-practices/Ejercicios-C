/*
  Escriba un programa que despliegue los múltiplos del número entero 2, a saber
  2, 4, 8, 16, 32, 64, y así sucesivamente. Su ciclo no debe terminar (es
  decir, debe crear un ciclo infinito). ¿Qué sucede cuando ejecuta este
  programa?
 */

/* Imprime múltiplos de 2 */
#include <stdio.h>

int main() {
  int numero = 2;

  while (numero >= 0) {
    printf("%d\n", numero);
    numero *= 2;
  }

  printf("\n");
}
