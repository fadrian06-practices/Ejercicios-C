/* Figura 6.4: fig06_04.c
  Inicializa un arreglo con una lista de inicialización */
#include <stdio.h>

/* la función main comienza la ejecución del programa */
int main() {
  /* utiliza la lista de inicialización para inicializar el arreglo n */
  int n[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
  int i; /* contador */

  printf("%s%13s\n", "Elemento", "Valor");

  /* muestra el contenido del arreglo en forma tabular */
  for (i = 0; i < 10; ++i) {
    printf("%8d%13d\n", i, n[i]);
  } /* fin de for */

  return 0; /* indica terminación exitosa */
} /* fin de main */
