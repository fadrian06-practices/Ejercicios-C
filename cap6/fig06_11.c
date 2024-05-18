/* Figura 6.11: fig06_11.c
  Arreglos estáticos que se inicializan a cero */
#include <stdio.h>

void iniciaArregloEstatico(void);   /* prototipo de la función */
void iniciaArregloAutomatico(void); /* prototipo de la función */

/* la función main comienza la ejecución del programa */
int main() {
  printf("Primera llamada a cada funcion :\n");
  iniciaArregloEstatico();
  iniciaArregloAutomatico();

  printf("\n\nSegunda llamada a cada funcion :\n");
  iniciaArregloEstatico();
  iniciaArregloAutomatico();

  printf("\n");

  return 0; /* indica terminación exitosa */
} /* fin de main */

/* función para demostrar un arreglo estático local */
void iniciaArregloEstatico(void) {
  /* inicializa los elementos a 0 la primera vez que se llama a la función */
  static int arreglo1[3];
  int i; /* contador */

  printf("\nValores al entrar a iniciaArregloEstatico :\n");

  /* muestra el contenido del arreglo1 */
  for (i = 0; i <= 2; i++) {
    printf("arreglo1[%d] = %d\n", i, arreglo1[i]);
  } /* fin de for */

  printf("\nValores al salir de iniciaArregloEstatico :\n");

  /* modifica y muestra el contenido de arreglo1 */
  for (i = 0; i <= 2; i++) {
    printf("arreglo1[%d] = %d\n", i, arreglo1[i] += 5);
  } /* fin de for */
} /* fin de la función iniciaArregloEstatico */

/* función para demostrar un arreglo local automático */
void iniciaArregloAutomatico(void) {
  /* inicializa los elementos cada vez que se llama a la función */
  int arreglo2[3] = {1, 2, 3};
  int i; /* contador */

  printf("\n\nValores al entrar a iniciaArregloAutomatico :\n");

  /* muestra el contenido de arreglo2 */
  for (i = 0; i <= 2; i++) {
    printf("arreglo2[%d] = %d\n", i, arreglo2[i]);
  } /* fin de for */

  printf("\nValores al salir de iniciaArregloAutomatico :\n");

  /* modifica y muestra el contenido de arreglo2 */
  for (i = 0; i <= 2; i++) {
    printf("arreglo2[%d] = %d\n", i, arreglo2[i] += 5);
  } /* fin de for */
} /* fin de la función iniciaArregloAutomatico */
