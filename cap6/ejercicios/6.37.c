/*
  (Impresión de un arreglo.) Escriba una función recursiva desplegarArreglo que
  tome un arreglo y el tamaño del arreglo como sus argumentos y que no devuelva
  valor alguno. La función debe detener el procesamiento y regresar, cuando
  reciba un arreglo de tamaño cero.
 */

#include <stdio.h>

void desplegarArreglo(const int arreglo[], int longitud) {
  if (longitud == 0)
    return;

  desplegarArreglo(arreglo, longitud - 1);
  printf("arreglo[%d] = %d\n", longitud - 1, arreglo[longitud - 1]);
}
