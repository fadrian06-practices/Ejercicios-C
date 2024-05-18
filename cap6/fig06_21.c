/* Figura 6.21: fig06_21.c
  Inicialización de arreglos multidimensionales */
#include <stdio.h>

void despliegaArreglo(const int a[][3]); /* prototipo de la función */

/* la función main comienza la ejecución del programa */
int main() {
  /* inicializa arreglo1, arreglo2, arreglo3 */
  const int arreglo1[2][3] = {{1, 2, 3}, {4, 5, 6}};
  const int arreglo2[2][3] = {1, 2, 3, 4, 5};
  const int arreglo3[2][3] = {{1, 2}, {4}};

  printf("Los valores en el arreglo1 por linea son:\n");
  despliegaArreglo(arreglo1);

  printf("Los valores en el arreglo2 por linea son:\n");
  despliegaArreglo(arreglo2);

  printf("Los valores en el arreglo3 por linea son:\n");
  despliegaArreglo(arreglo3);

  return 0; /* indica terminación exitosa */
} /* fin de main */

/* función para mostrar un arreglo con dos filas y tres columnas */
void despliegaArreglo(const int a[2][3]) {
  int i; /* contador de filas */
  int j; /* contador de columnas */

  /* ciclo a través de las filas */
  for (i = 0; i <= 1; i++) {
    /* muestra los valores de las columnas */
    for (j = 0; j <= 2; j++) {
      printf("%d ", a[i][j]);
    } /* fin del for interno */

    printf("\n"); /* comienza la nueva línea de salida */
  } /* fin del for externo */
} /* fin de la función imprimeArreglo */
