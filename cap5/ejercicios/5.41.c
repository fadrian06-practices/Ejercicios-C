/*
  (Cómo visualizar la recursividad.) Es interesante observar en acción “a la
  recursividad”. Modifique la función factorial de la figura 5.14 para
  imprimir su variable local y su llamada recursiva a la función. Para cada
  llamada recursiva, despliegue las salidas en una línea separada y agregue un
  nivel de sangrado. Haga lo mejor posible por hacer sus salidas claras,
  interesantes, y significativas. Aquí, su meta es diseñar e implementar un
  formato de salida que ayude a una persona a entender mejor la recursividad.
  Usted podría querer incluir dichas capacidades gráficas a los muchos otros
  ejemplos y ejercicios que aparecen a través del libro.
 */

/* Figura 5.14: fig05_14_1.c
  Función factorial recursiva */
#include <stdio.h>

/* definición recursiva de la función factorial */
long factorial(long numero, int nivel) {
  long i; /* contador */

  /* caso base */
  if (numero <= 1) {
    for (i = 0; i < nivel; ++i)
      printf("  "); // Imprimir espacios en blanco para el sangrado

    printf("Factorial(%ld) = 1\n", numero);
    return 1;
  }

  /* paso recursivo */
  for (i = 0; i < nivel; ++i)
    printf("  "); // Imprimir espacios en blanco para el sangrado

  printf("Calculando Factorial(%ld)...\n", numero);

  long resultado = numero * factorial(numero - 1, nivel + 1);

  for (i = 0; i < nivel; ++i)
    printf("  "); // Imprimir espacios en blanco para el sangrado

  printf("Factorial(%ld) = %ld\n", numero, resultado);

  return resultado;
}

/* la función main comienza la ejecución del programa */
int main() {
  int i; /* contador */

  /* repite 11 veces; durante cada iteración, calcula el factorial(i)
  y despliega el resultado */
  for (i = 0; i <= 10; ++i)
    printf("\n%2d! = %ld\n\n", i, factorial(i, 0));
}
