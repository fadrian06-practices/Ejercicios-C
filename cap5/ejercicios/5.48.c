/*
  Después de que haya determinado lo que hace el programa de la figura 5.47,
  modifíquelo para que funcione de manera apropiada después de eliminar la
  restricción de que el segundo argumento sea positivo.
 */

/* Devuelve un resultado misterioso */
#include <stdio.h>

/* El parámetro b debe ser un entero positivo
para evitar la recursividad infinita */
int misterio(int a, int b) {
  /* caso base */
  if (b <= 1)
    return a;

  /* paso recursivo */
  return a + misterio(a, b - 1);
}

/* la función main comienza la ejecución del programa */
int main() {
  int x; /* primer entero */
  int y; /* segundo entero */

  printf("Introduzca dos enteros : ");
  scanf("%d%d", &x, &y);

  printf("El resultado es %d\n", misterio(x, y));
}
