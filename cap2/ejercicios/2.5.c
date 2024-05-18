/*
  Escriba un programa completo que calcule el producto de tres enteros,
  utilizando las instrucciones que escribió en el ejercicio 2.4.
 */

/* Calcula el producto de tres enteros */
#include <stdio.h>

int main() {
  int x, y, z, resultado; /* declara variables */

  printf("Introduzca tres enteros: "); /* indicador */
  scanf("%d%d%d", &x, &y, &z);         /* lee tres enteros */

  resultado = x * y * z; /* multiplica los valores */

  printf("El producto es %d\n", resultado); /* despliega el resultado */

  return 0;
}
