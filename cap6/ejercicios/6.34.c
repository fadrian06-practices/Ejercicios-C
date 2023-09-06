/*
  (Búsqueda lineal.) Modifique el programa de la figura 6.18 para utilizar la
  función recursiva busquedaLineal para realizar una búsqueda lineal en el
  arreglo. La función debe recibir un arreglo entero y el tamaño del arreglo
  como sus argumentos. Si la clave de búsqueda se localiza, devuelva el
  subíndice del arreglo; de otro modo devuelva -1.
*/

/* Figura 6.18: fig06_18_1.c
  Búsqueda lineal recursiva en un arreglo */
#include <stdio.h>
#define LONGITUD 100

int busquedaLineal(const int arreglo[], int llave, int longitud) {
  if (longitud == 0)
    return -1;

  if (arreglo[longitud - 1] == llave)
    return longitud - 1;

  return busquedaLineal(arreglo, llave, longitud - 1);
}

/* la función main comienza la ejecución del programa */
int main() {
  int a[LONGITUD];   /* crea el arreglo a */
  int x = 0;         /* contador para inicializar los elementos del arreglo a */
  int llaveBusqueda; /* valor para localizar en el arreglo a */
  int elemento; /* variable para almacenar la ubicación de llaveBusqueda o -1 */

  /* crea los datos */
  for (; x < LONGITUD; ++x)
    a[x] = 2 * x;

  printf("Introduzca la llave de busqueda entera:\n");
  scanf("%d", &llaveBusqueda);

  /* intenta localizar llaveBusqueda en el arreglo a */
  elemento = busquedaLineal(a, llaveBusqueda, LONGITUD);

  /* despliega los resultados */
  if (elemento != -1)
    return printf("Encontre el valor en el elemento %d\n", elemento);

  printf("Valor no encontrado\n");
}
