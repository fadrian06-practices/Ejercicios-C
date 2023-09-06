/*
  (Impresión de una cadena al revés.) Escriba una función recursiva
  cadenaAlReves, que tome un arreglo de caracteres que contenga una cadena
  como un argumento, que despliegue la cadena al revés y que no devuelva valor
  alguno. La función debe detener el procesamiento y regresar, cuando encuentre
  el carácter de terminación nulo.
 */

#include <stdio.h>

void cadenaAlReves(const char cadena[], int longitud) {
  if (longitud == '\0')
    return;

  printf("%c ", cadena[longitud - 1]);
  cadenaAlReves(cadena, longitud - 1);
}
