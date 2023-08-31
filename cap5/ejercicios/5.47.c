/* ¿Qué hace el siguiente programa? */
#include <stdio.h>

int misterio(int a, int b); /* prototipo de función */

/* la función main comienza la ejecución del programa */
int main() {
  int x; /* primer entero */
  int y; /* segundo entero */

  printf("Introduzca dos enteros : ");
  scanf("%d%d", &x, &y);

  printf("El resultado es %d\n", misterio(x, y));

  return 0; /* indica terminación exitosa */
} /* fin de main */

/* El parámetro b debe ser un entero positivo
para evitar la recursividad infinita */
int misterio(int a, int b) {
  /* caso base */
  if (b == 1) {
    return a;
  }      /* fin de if */
  else { /* paso recursivo */
    return a + misterio(a, b - 1);
  } /* fin de else */

} /* fin de la función misterio */

/* RESPUESTA: lee dos enteros y devuelve un resultado misterioso.
Si el segundo entero es 1 el resultado será el primer entero. Si es mayor a uno,
retornará la multiplicación del primer entero por el segundo entero */
