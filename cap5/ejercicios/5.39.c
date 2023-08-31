/*
  (Las torres de Hanoi.) Todo científico de computación en ciernes debe luchar
  con cierta clase de problemas, y la Torres de Hanoi es uno de los más famosos.
  La leyenda cuenta que en un templo del lejano oriente, los sacerdotes
  intentaban mover una pila de discos de un asta a otra. El asta inicial
  contenía 64 discos ensartados y ordenados de abajo hacia arriba en orden de
  tamaño decreciente. Los sacerdotes intentaban mover la pila de una primera a
  una segunda bajo las restricciones de que sólo podían mover un disco a la vez,
  y en ningún momento podían colocar un disco más grande arriba de uno más
  pequeño. Una tercera asta estaba disponible para almacenar los discos de
  manera temporal. Supuestamente el mundo se acabará cuando los sacerdotes
  completen su tarea, por lo que tenemos pocos motivos para facilitar sus
  esfuerzos. Vamos a suponer que los sacerdotes intentan mover los discos del
  asta 1 al asta 3.

  Queremos desarrollar un algoritmo que imprima la secuencia
  precisa de la transferencia de cada disco. Si quisiéramos afrontar este
  problema con métodos tradicionales, rápidamente nos encontraríamos atascados
  sin esperanza para manejar los discos. En lugar de esto, si atacamos el
  problema considerando la recursividad, la tarea se hace posible
  automáticamente.

  Podemos considerar mover los n discos en términos del movimiento de sólo n-1
  discos (y por ende la recursividad) de la siguiente manera:

  a) Mueva n – 1 discos del asta 1 al asta 2, utilice el asta 3 como área de
  almacenamiento temporal.
  b) Mueva el último disco (el mayor) del asta 1 al asta 3.
  c) Mueva los n – 1, del asta 2 al asta 3, utilizando el asta 1 como área de
  almacenamiento temporal.

  El proceso finaliza cuando la última tarea involucra el movimiento del disco
  n – 1. Es decir, el caso base. Esto se lleva a cabo mediante la tarea trivial
  de mover un disco, sin la necesidad del área de almacenamiento temporal.

  Escriba un programa para resolver el problema de las Torres de Hanoi. Utilice
  una función recursiva con cuatro parámetros:

  a) El número de discos a mover.
  b) El asta en la que se encuentran ensartados los discos.
  c) El asta a la que se moverán los discos.
  d) El asta que se utilizará como área de almacenamiento temporal.

  Su programa debe imprimir las instrucciones precisas necesarias para
  mover los discos desde el asta inicial al asta de destino.

  Por ejemplo, para mover una pila con tres discos del asta 1 al asta 3, su
  programa debe imprimir la siguiente serie de movimientos:

  1 → 3 (Esto significa mover un disco del asta 1 al asta 3).
  1 → 2
  3 → 2
  1 → 3
  2 → 1
  2 → 3
  1 → 3
 */

#include <stdio.h>

enum TorresDeHanoi { NINGUNA, PRIMERA, SEGUNDA, TERCERA };

void moverDiscos(
  short discos,
  enum TorresDeHanoi origen,
  enum TorresDeHanoi destino,
  enum TorresDeHanoi temporal
) {
  if (discos == 1) {
    printf("%d -> %d\n", origen, destino);
    return;
  }

  moverDiscos(discos - 1, origen, temporal, destino);
  printf("%d -> %d\n", origen, destino);
  moverDiscos(discos - 1, temporal, destino, origen);
}

int main() {
  moverDiscos(3, PRIMERA, TERCERA, SEGUNDA);
}
