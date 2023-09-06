/*
  (Ordenamiento por cubetas.) Un ordenamiento por cubetas comienza con un
  arreglo de enteros positivos con un solo subíndice para ser ordenados, y un
  arreglo de enteros con dos subíndices, con filas cuyos subíndices se en-
  cuentran entre el 0 y el 9, y columnas cuyos subíndices van del 0 a n-1, en
  donde n es el número de valores del arreglo a ordenarse. A cada fila del
  arreglo con dos subíndices se le conoce como cubeta. Escriba una función
  ordenamientoCubeta que tome como argumentos un arreglo entero y el tamaño del
  arreglo. El algoritmo es el siguiente:

  1) Hace un ciclo a través del arreglo con un solo subíndice y coloca cada uno
  de sus valores en una fila del arreglo en cubetas, basándose en los valores
  de uno de sus dígitos. Por ejemplo, el 97 se coloca en la fila 7, el 3 se
  coloca en la fila 3 y el 100 se coloca en la fila 0.

  2) Hace un ciclo a lo largo del arreglo en cubetas, fila por fila, y copia los
  valores nuevamente en el arreglo original. El nuevo orden de los valores
  anteriores, en el arreglo con un solo subíndice, es 100, 3 y 97.

  3) Repite este proceso para cada posición subsiguiente de los dígitos
  (décimas, centésimas, milésimas, etcétera) y se detiene cuando el dígito que
  se encuentra más a la izquierda del número más grande se ha procesado. En la
  segunda pasada, el 100 se coloca en la fila 0, el 3 en la fila 0 (ya que 3 no
  tiene décimas) y 97 se coloca en la fila 9. El orden de los valores del
  arreglo con un solo subíndice es 100, 3, 97. En la tercera pasada, 100 se
  coloca en la fila 1, el 3 en la fila cero y el 97 en la fila cero (después
  del 3). Se garantiza que el ordenamiento por cubetas tenga ordenados
  adecuadamente a todos los valores, después de procesar al dígito más a la
  izquierda del número más grande. El ordenamiento por cubetas sabe que esto
  está hecho, cuando todos los valores se copian en la fila cero del arreglo con
  dos subíndices. Observe que el arreglo cubetas con dos subíndices tiene 10
  veces el tamaño del arreglo entero que se está ordenando. Esta técnica de
  ordenamiento proporciona un mejor rendimiento que un ordenamiento de burbuja,
  pero requiere mucha más memoria. El ordenamiento de burbuja sólo requiere
  espacio para un elemento de datos adicional. El ordenamiento por cubetas es un
  ejemplo de la desventaja espacio-tiempo éste utiliza más memoria, pero se
  desempeña mejor. Esta versión del ordenamiento por cubetas requiere que se
  copien todos los datos nuevamente en el arreglo original en cada paso. Otra
  posibilidad es crear un segundo arreglo con dos subíndices, y repetidamente
  mover los datos entre los dos arreglos cubetas, hasta que los datos se
  copien en la fila cero de uno de los arreglos. La fila cero entonces contiene
  el arreglo ordenado.
 */
