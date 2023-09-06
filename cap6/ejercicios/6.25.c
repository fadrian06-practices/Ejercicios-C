/*
  (Recorrido del caballo: métodos de fuerza bruta.) En el ejercicio 6.24, desarrollamos una solución para el problema
  del recorrido del caballo. El método utilizado, llamado “heurística de accesibilidad”, genera muchas soluciones y
  se ejecuta de manera eficiente.
  Mientras se incremente de manera continua la potencia de las computadoras, seremos capaces de resolver más pro-
  blemas con menos potencia y con algoritmos relativamente menos sofisticados. Llamemos a éste el método de la
  “fuerza bruta” para resolver un problema.
  a) Utilice la generación de números aleatorios para permitir que el caballo se desplace a lo largo del tablero (por
  supuesto, mediante sus movimientos en L) de manera aleatoria. Su programa debe ejecutar un recorrido e im-
  primir el tablero final. ¿Qué tan lejos llegó el caballo?
  b) La mayoría de las veces, el método anterior produce recorridos relativamente cortos. Ahora modifique su pro-
  grama para intentar 1000 recorridos. Utilice un arreglo con un solo subíndice para dar seguimiento al número
  de recorridos de cada longitud. Cuando su programa termine los 1000 recorridos, deberá desplegar esta infor-
  mación en un ordenado formato tabular. ¿Cuál fue el mejor resultado?
  c) Es muy probable que la mayoría de las veces, el programa anterior le haya brindado algunos recorridos “respe-
  tables”, pero no recorridos completos. Ahora “suéltele la rienda” y simplemente deje que su programa se eje-
  cute hasta que produzca un paso completo. (Precaución: Esta versión del programa podría ejecutarse durante
  horas en una computadora poderosa). Una vez más, mantenga una tabla con el número de recorridos para cada
  longitud, y despliegue esta tabla cuando se genere el primer recorrido completo. ¿Cuántos recorridos intentó su
  programa antes de generar un recorrido completo? ¿Cuánto tiempo se tomó?
  d) Compare la versión de la fuerza bruta del recorrido del caballo con la versión heurística de accesibilidad. ¿Cuál
  requirió un estudio más detallado del problema? ¿Cuál algoritmo fue más difícil de desarrollar? ¿Cuál requirió más potencia de la computadora? ¿Podríamos tener la certeza (por adelantado) de obtener un recorrido comple-
  to mediante el método de la fuerza bruta? Argumente las ventajas y las desventajas de solucionar el problema
  mediante la fuerza bruta en general.
 */
