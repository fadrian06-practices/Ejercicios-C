/*
  El ordenamiento de burbuja que presentamos en la figura 6.15 es ineficiente
  para arreglos grandes. Haga las siguientes modificaciones sencillas, para
  mejorar el rendimiento del ordenamiento de burbuja:

  a) Después de la primera pasada, seguramente el número más alto es el elemento
  más grande del arreglo; después de la segunda pasada, los dos números más
  altos se encuentran “en su lugar”, y así sucesivamente. En lugar de hacer
  nueve comparaciones en cada pasada, modifique el programa de ordenamiento de
  burbuja para hacer ocho comparaciones en la segunda pasada, siete en la
  tercera pasada, y así sucesivamente.

  b) Los datos en el arreglo pudieran estar ya en el orden apropiado o cerca del
  orden apropiado, ¿entonces, por qué hacer nueve pasadas si con menos podría
  ser suficiente? Modifique el ordenamiento para verificar, al final de cada
  pasada, si se han hecho intercambios. Si no se han hecho intercambios,
  entonces los datos deben estar ya en el orden apropiado, de manera que el
  programa debe terminar. Si se hicieron intercambios, entonces se requiere al
  menos una pasada.
 */

/* Figura 6.15: fig06_15_1.c
  Este programa ordena los valores de un arreglo en orden ascendente */
#include <stdio.h>
#include <sys/timeb.h>
#define TAMANIO 10

void imprimirArreglo(const int b[], int tamanio) {
  int i = 0;

  for (; i < TAMANIO; i++)
    printf("%4d", b[i]);
}

void ordenar(int a[], int tamanio) {
  int pasadas;  /* contador de pasadas */
  int i;        /* contador de comparaciones */
  int almacena; /* ubicación temporal utilizada para el intercambio de elementos
                 */
  int intercambios = 0;
  int iteraciones = 0;

  /* ordenamiento burbuja */
  /* ciclo para controlar el número de pasos */
  for (pasadas = 1; pasadas < TAMANIO; ++pasadas) {
    /* ciclo para controlar el número de comparaciones por pasada */
    for (i = 0; i < TAMANIO - pasadas; ++i) {
      ++iteraciones;
      /* compara los elementos adyacentes y los intercambia si el primer
       * elemento es mayor que el segundo */
      if (a[i] > a[i + 1]) {
        almacena = a[i];
        a[i] = a[i + 1];
        a[i + 1] = almacena;
        ++intercambios;
      }
    }

    if (!intercambios)
      break;

    intercambios = 0;
  }
}

/* la función main comienza la ejecución del programa */
int main() {
  /* inicializa a */
  int a[TAMANIO] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

  printf("Elementos de datos en el orden original\n");
  /* muestra el arreglo original */
  imprimirArreglo(a, TAMANIO);

  ordenar(a, TAMANIO);

  printf("\n\nElementos de datos en orden ascendente\n");
  /* muestra el arreglo ordenado */
  imprimirArreglo(a, TAMANIO);

  printf("\n\n");
}
