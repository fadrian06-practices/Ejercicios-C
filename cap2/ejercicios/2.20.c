/*
  Escriba un programa que lea el radio de un c�rculo y que imprima el di�metro,
  la circunferencia y el �rea de ese c�rculo. Utilice el valor constante
  de 3.14159 para PI. Realice cada uno de estos c�lculos dentro de
  instrucci�n(es) printf, y utilice el especificador de conversi�n %f. [Nota: En
  este cap�tulo s�lo explicamos constantes y variables enteras. En el cap�tulo
  3 explicaremos los n�meros de punto flotante, es decir, valores que pueden
  tener puntos decimales.]
 */

/* Calcula di�metro de un c�rculo */
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
