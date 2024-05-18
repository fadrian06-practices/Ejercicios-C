/* ¿Qué hace el siguiente programa? */

#include <stdio.h>

/* la función main comienza la ejecución del programa */
int main() {
  int c; /* variable para mantener el carácter introducido por el usuario */

  if ((c = getchar()) != EOF) {
    main();
    printf("%c", c);
  } /* fin de if */

  return 0; /* indica terminación exitosa */
} /* fin de main */

/* RESPUESTA: obtiene un caracter y si no es EOF crea otro hilo recursivo donde
obtiene otro caracter que si es distinto a EOF se crea otro hilo recursivo
o si es EOF se resuelven los casos recursivos y la función termina su ejecución
*/
