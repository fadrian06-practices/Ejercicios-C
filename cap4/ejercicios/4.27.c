/*
  (Triples Pitagóricos.) Un triángulo recto puede tener todos sus lados enteros.
  Al conjunto de tres valores enteros para los lados del triángulo se le llama
  Triple Pitagórico. Estos tres lados deben satisfacer la relación que indica
  que la suma de los cuadrados de los lados es igual al cuadrado de la
  hipotenusa.

  Encuentre todos los Triples Pitagóricos para lado1, lado2 y la
  hipotenusa que no sean mayores que 500. Utilice un triple for anidado que
  intente todas las posibilidades.

  Éste es un ejemplo de computación de “fuerza bruta”. No es muy estético para
  mucha gente. Pero existen muchas razones por las cuales esta técnica es
  importante.

  Primero, con el fenomenal incremento en el poder de las computadoras, las
  soluciones que hubieran tardado años o incluso siglos con la tecnología de
  hace tan sólo un par de años, ahora puede realizarse en horas, minutos o
  incluso segundos. Los recientes chips con microprocesadores pueden procesar
  ¡mil millones de instrucciones por segundo!

  Segundo, como aprenderá en cursos de computación más avanzados, existe un gran
  número de problemas interesantes para los cuales no se conocen un método o
  algoritmo conocido que no sea el de la fuerza bruta.

  En este libro, investigamos muchos tipos de técnicas para resolver problemas.
  Aplicaremos muchos métodos de fuerza bruta para distintos problemas
  interesantes.
*/

/* Imprime los Triples Pitagóricos entre combinando lados de 1 a 500 */
#include <math.h>
#include <stdio.h>

int main() {
  int lado1, lado2, hipotenusa, combinaciones = 1;

  printf("Triples pitagoricos\n\n");

  for (hipotenusa = 1; hipotenusa <= 500; ++hipotenusa)
    for (lado1 = 1; lado1 <= 500; ++lado1)
      for (lado2 = 1; lado2 <= 500; ++lado2)
        if (pow(hipotenusa, 2) == pow(lado1, 2) + pow(lado2, 2)) {
          printf("%d\t%d\t%d\n", hipotenusa, lado1, lado2);
          ++combinaciones;
        }

  printf("\nCombinaciones: %d\n\n", combinaciones);
}
