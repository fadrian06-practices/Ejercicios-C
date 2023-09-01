/* Figura 6.18: fig06_18.c
  Búsqueda lineal en un arreglo */
#include <stdio.h>
#define TAMANIO 100

/* prototipo de la función */
int busquedaLineal(const int arreglo[], int llave, int tamanio);

/* la función main comienza la ejecución del programa */
int main() {
  int a[TAMANIO]; /* crea el arreglo a */
  int x; /* contador para inicializar los elementos de 0 a 99 del arreglo a */
  int llaveBusqueda; /* valor para localizar en el arreglo a */
  int elemento; /* variable para almacenar la ubicación de llaveBusqueda o -1 */

  /* crea los datos */
  for (x = 0; x < TAMANIO; x++) {
    a[x] = 2 * x;
  } /* fin de for */

  printf("Introduzca la llave de busqueda entera:\n");
  scanf("%d", &llaveBusqueda);

  /* intenta localizar llaveBusqueda en el arreglo a */
  elemento = busquedaLineal(a, llaveBusqueda, TAMANIO);

  /* despliega los resultados */
  if (elemento != -1) {
    printf("Encontre el valor en el elemento %d\n", elemento);
  } /* fin de if */
  else {
    printf("Valor no encontrado\n");
  } /* fin de else */

  return 0; /* indica terminación exitosa */
} /* fin de main */

/* compara la llave con cada elemento del arreglo hasta que se localiza el
 * elemento o hasta que alcanza el final del arreglo; devueve el subíndice del
 * elemento si lo encontró o -1 si no lo encontró */
int busquedaLineal(const int arreglo[], int llave, int tamanio) {
  int n; /* contador */

  /* ciclo a través del arreglo */
  for (n = 0; n < tamanio; ++n) {
    if (arreglo[n] == llave) {
      return n; /* devuelve la ubicación de la llave */
    } /* fin de if */
  } /* fin de for */

  return -1; /* llave no encontrada */
} /* fin de la función busquedaLineal */
