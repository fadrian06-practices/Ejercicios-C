/*¿Qué despliega el siguiente programa?

#include <stdio.h>
int main() {
  int contador = 1;
  while ( contador <= 10 ) {
    printf( “%s\n”, contador % 2 ? “****” : “++++++++” );
    contador++;
  }
  return 0;
}

Respuesta:
  ****
  ++++++++
  ****
  ++++++++
  ****
  ++++++++
  ****
  ++++++++
  ****
  ++++++++
*/

#include <stdio.h>

/* la función main inicia la ejecución del programa */
int main() {
  int contador = 1; /* inicializa contador */

  while (contador <= 10) { /* repite 10 veces */
    /* muestra una línea de texto */
    printf("%s\n", contador % 2 ? "****" : "++++++++");
    contador++; /* incrementa contador */
  }
}
