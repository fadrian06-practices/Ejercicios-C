/*
  (Búsqueda binaria.) Modifique el programa de la figura 6.19 para utilizar una
  función recursiva busquedaBinaria, para realizar la búsqueda binaria en el
  arreglo. La función debe recibir un arreglo entero y el subíndice inicial y el
  final como sus argumentos. Si la clave de búsqueda es localizada, devuelva el
  subíndice del arreglo; de otro modo devuelva -1.
 */

/* Figura 6.19: fig06_19_1.c
  Búsqueda binaria recursiva dentro de un arreglo */
#include <stdio.h>
#define LONGITUD 15

/* Imprime una línea de salida que muestra la parte actual del arreglo que se
 * está procesando. */
void despliegaLinea(const int b[], int baj, int cen, int alt) {
  int i = 0; /* contador para la iteración a través del arreglo b */

  /* ciclo a través del arreglo completo */
  for (; i < LONGITUD; ++i) {

    /* despliega espacios si se encuentra fuera del rango actual del subarreglo
     */
    if (i < baj || i > alt) {
      printf(" ");
      continue;
    }

    if (i == cen) {         /* despliega el elemento central */
      printf("%3d*", b[i]); /* marca el valor central */
      continue;
    }

    /* despliega otros elementos en el subarreglo */
    printf("%3d ", b[i]);
  }

  printf("\n"); /* inicia la nueva línea de salida */
}

int busquedaBinaria(const int b[], int claveDeBusqueda, int bajo, int alto) {
  if (bajo > alto)
    return -1;

  int central = (bajo + alto) / 2;
  despliegaLinea(b, bajo, central, alto);

  if (claveDeBusqueda == b[central])
    return central;

  if (claveDeBusqueda < b[central])
    return busquedaBinaria(b, claveDeBusqueda, bajo, central - 1);

  return busquedaBinaria(b, claveDeBusqueda, central + 1, alto);
}

/* Imprime un encabezado para la salida */
void despliegaEncabezado(void) {
  int i = 0; /* contador */

  printf("\nSubindices:\n");

  /* muestra el encabezado de la columna */
  for (; i < LONGITUD; ++i)
    printf("%3d ", i);

  printf("\n"); /* comienza la nueva línea de salida */

  /* muestra una línea de caracteres - */
  for (i = 1; i <= 4 * LONGITUD; ++i)
    printf("-");

  printf("\n"); /* inicia una nueva línea de salida */
}

/* la función main comienza la ejecución del programa */
int main() {
  int a[LONGITUD]; /* crea el arreglo a */
  int i = 0;       /* contador para inicializar los elementos del arreglo a */
  int llave;       /* valor a localizar en el arreglo a */
  int resultado;   /* variable para almacenar la ubicación de la llave o -1 */

  /* crea los datos */
  for (; i < LONGITUD; ++i)
    a[i] = 2 * i;

  printf("Introduzca un numero entre 0 y 28: ");
  scanf("%d", &llave);

  despliegaEncabezado();

  /* busca la llave en el arreglo a */
  resultado = busquedaBinaria(a, llave, 0, LONGITUD - 1);

  /* despliega los resultados */
  if (resultado != -1) {
    printf("\n");
    printf("%d se encuentra en el elemento %d del arreglo", llave, resultado);
    return printf("\n");
  }

  printf("\n%d no se encuentra\n", llave);
}
