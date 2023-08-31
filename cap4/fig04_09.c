/* Figura 4.9: fig04_09.c
  Uso de la instrucción de repetición do/while */
#include <stdio.h>

/* la función main comienza la ejecución del programa */
int main() {
  int contador = 1; /* inicializa el contador */

  do {
    printf("%d\n", contador); /* despliega el contador */
  } while (++contador <= 10); /* fin del do...while */

  return 0; /* indica la terminación exitosa del programa */
} /* fin de la función main */
