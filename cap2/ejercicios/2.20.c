/*
  Escriba un programa que lea el radio de un círculo y que imprima el diámetro,
  la circunferencia y el área de ese círculo. Utilice el valor constante
  de 3.14159 para PI. Realice cada uno de estos cálculos dentro de
  instrucción(es) printf, y utilice el especificador de conversión %f. [Nota: En
  este capítulo sólo explicamos constantes y variables enteras. En el capítulo
  3 explicaremos los números de punto flotante, es decir, valores que pueden
  tener puntos decimales.]
 */

/* Calcula diámetro de un círculo */
#include <stdio.h>

int main() {
  int radio, diametro;

  printf("Introduce el radio del circulo: ");
  scanf("%d", &radio);

  diametro = radio * 2;
  printf("El diametro es %d\n", radio * 2);
  printf("La circunferencia es aproximada a %f\n", diametro * 3.14159);
  printf("El area es %f\n", 3.14159 * radio * radio);
}
