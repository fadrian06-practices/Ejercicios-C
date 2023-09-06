/*
  (El recorrido del caballo.) Uno de los juegos de intriga más interesantes para los entusiastas del ajedrez es el pro-
  blema del Recorrido del caballo. La pregunta es: ¿puede una pieza de ajedrez llamada caballo moverse alrededor
  de un tablero y tocar cada una de las 64 posiciones, una y sólo una vez? Aquí estudiaremos este intrigante problema
  a fondo.
  El caballo tiene un movimiento en forma de L(dos posiciones en una dirección y una posición en dirección perpen-
  dicular). Por lo tanto, a partir de un cuadrado en el centro de un tablero, el caballo puede hacer ocho movimientos
  diferentes (numerados de 0 a 7) como muestra la figura 6.25.
  a) Dibuje un tablero de ajedrez de 8 por 8 en una hoja de papel e intente el recorrido del caballo a mano. Coloque
  un 1 en la primera posición a la que se mueva, un 2 en la segunda posición, un 3 en la tercera, etcétera. Antes
  de comenzar el recorrido, estime qué tan lejos cree usted que llegará, recuerde que el recorrido completo consis-
  te en 64 movimientos. ¿Qué tan lejos llegó? ¿Fue lo que usted estimó?

  b) Ahora, desarrollemos un programa que mueva el caballo alrededor del tablero. El tablero se representa mediante
  un arreglo con dos subíndices de 8 por 8, llamado tablero. Cada una de las posiciones se inicializa en cero. Des-
  cribimos cada uno de los ocho posibles movimientos en términos tanto de su componente horizontal como de
  la vertical. Por ejemplo, un movimiento de tipo 0, como lo muestra la figura 6.25, consiste en moverse una posi-
  ción a la izquierda y dos posiciones verticales hacia arriba. Los movimientos horizontales a la izquierda y los
  movimientos verticales hacia arriba se indican con números negativos. Los ochos movimientos se deben descri-
  bir mediante dos arreglos con dos subíndices, horizontal y vertical, como sigue:
  horizontal[ 0 ] = 2
  horizontal[ 1 ] = 1
  horizontal[ 2 ] = -1
  horizontal[ 3 ] = -2
  horizontal[ 4 ] = -2
  horizontal[ 5 ] = -1
  horizontal[ 6 ] = 1
  horizontal[ 7 ] = 2
  vertical[ 0 ] = -1
  vertical[ 1 ] = -2
  vertical[ 2 ] = -2
  vertical[ 3 ] = -1
  vertical[ 4 ] = 1
  vertical[ 5 ] = 2
  vertical[ 6 ] = 2
  vertical[ 7 ] = 1
  Haga que las variables filaActual y columnaActual indiquen la fila y la columna de la posición actual del
  caballo. Para hacer un movimiento de tipo numeroMovimiento, en donde numeroMovimiento se encuentra
  entre 0 y 7, su programa utiliza las instrucciones
  filaActual += vertical[ numeroMovimiento ];
  columnaActual += horizontal[ numeroMovimiento ];
  Mantenga un contador que varíe de 1 a 64. Registre la última cuenta en cada posición a la que el caballo se mue-
  ve. Recuerde probar cada movimiento posible para ver si el caballo ya ha visitado dicha posición, y, por supuesto,
  pruebe en el probable movimiento que el caballo no ha pisado fuera del tablero. Escriba ahora un programa para
  mover el caballo alrededor del tablero. Ejecute el programa. ¿Cuántos movimientos hizo el caballo?

  c) Después de escribir y ejecutar el programa del recorrido del caballo, probablemente haya desarrollado sus pro-
  pias ideas valiosas. Utilizaremos estas ideas para desarrollar una heurística (estrategia) para mover el caballo.
  La heurística no garantiza el éxito, pero una heurística cuidadosamente desarrollada mejora en gran medida la
  oportunidad de éxito. Probablemente usted ya observó que las posiciones externas son más difíciles que las po-
  siciones cercanas al centro del tablero. De hecho, las posiciones más difíciles, o inaccesibles son las cuatro
  esquinas.
  La intuición sugiere que usted debe intentar mover primero el caballo a las posiciones más problemáticas y de-
  jar pendientes aquellas a las que es más fácil acceder, de manera que cuando el tablero se congestione cerca del
  final del recorrido, habrá una mayor oportunidad de éxito.
  Debemos desarrollar una “heurística de accesibilidad”, clasificando cada una de las posiciones de acuerdo a qué
  tan accesibles son y luego mover siempre el caballo a la posición (con los movimientos en L del caballo, por
  supuesto) que son más accesibles. Etiquetamos el arreglo con dos subíndices, accesibilidad, con los
  números que indican desde cuántas posiciones es accesible una posición determinada. Sobre un tablero en blanco,
  cada posición central tiene un grado de 8, cada esquina tiene un grado 2 y las otras posiciones tienen números de
  accesibilidad 3, 4 o 6 de la siguiente manera:
  2 3 4 4 4 4 3 2
  3 4 6 6 6 6 4 3
  4 6 8 8 8 8 6 4
  4 6 8 8 8 8 6 4
  4 6 8 8 8 8 6 4
  4 6 8 8 8 8 6 4
  3 4 6 6 6 6 4 3
  2 3 4 4 4 4 3 2
  Ahora, escriba una versión del programa del recorrido del caballo, utilizando la heurística de accesibilidad. El caba-
  llo se puede mover en cualquier momento a la posición con el número menor de accesibilidad. En caso de un empa-
  te, el caballo se puede mover a cualquiera de las posiciones con empate. Por lo tanto, el recorrido puede comenzar
  en cualquiera de las cuatro esquinas. (Nota: Mientras el caballo se mueve alrededor del tablero, su programa debe
  reducir los números de accesibilidad al ocuparse más y más posiciones. De esta manera, en cualquier momento
  durante el recorrido, cada número de posición disponible permanecerá igual al número preciso de posiciones a
  partir de la cual se puede acceder a dicha posición). Ejecute esta versión de su programa. ¿Obtuvo el recorrido com-
  pleto? Modifique ahora el programa para ejecutar 64 recorridos, Y que cada uno comience en una posición del
  tablero. ¿Cuántas rutas completas obtuvo?
  d) Escriba una versión del programa del recorrido del caballo, la cual, cuando encuentre un empate entre dos o
  más posiciones, decida cuál posición elegir, buscando aquellas posiciones que se puedan alcanzar desde las po-
  siciones “empatadas”. Su programa se debe mover a la posición en la que el siguiente movimiento alcance a la
  posición con el número menor de accesibilidad.
 */
