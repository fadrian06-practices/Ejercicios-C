/*
  Para el siguiente programa, establezca el alcance (si es alcance de función,
  de archivo, de bloque o de prototipo de función) de cada uno de los siguientes
  elementos.

  a) La variable x en main.

    Respuesta: alcance de función

  b) La variable y en cubo.

    Respuesta: alcance de función

  c) La función cubo.

    Respuesta: alcance de archivo

  d) La función main.

    Respuesta: alcance de archivo

  e) El prototipo de la función para cubo.

    Respuesta: alcance de prototipo

  f) El identificador y en el prototipo de la función cubo.

    Respuesta: alcance de prototipo

 */
#include <stdio.h>

int cubo(int y);

int main() {
  int x;

  for (x = 1; x <= 10; x++)
    printf("%d\n", cubo(x));

  return 0;
}

int cubo(int y) { return y * y * y; }
