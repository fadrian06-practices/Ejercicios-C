/*
  El factorial de un número entero positivo n se
  escribe n! (que se pronuncia “n factorial”) y se define como:
  n! = n · (n - 1) · (n - 2) · … ·1 (para valores de n mayores o iguales que 1)
  y n! = 1 (para n = 0)

  Por ejemplo, 5! = 5 · 4 · 3 · 2 · 1, que es
  igual a 120.

  a) Escriba un programa que lea un entero positivo y que calcule y despliegue
  su factorial.
  b) Escriba un programa que estime el valor de la constante matemática e:
 */

/* Cálcula el factorial de n y e */
#include <stdio.h>

int main() {
  /*----------  CÁLCULO DE FACTORIAL  ----------*/;
  int numero, factorial = 0;

  printf("Introduzca un numero y le dire su factorial: ");
  scanf("%d", &numero);

  factorial = numero <= 1 ? 1 : numero--;

  while (numero > 1)
    factorial *= numero--;

  printf("El factorial es: %d\n\n", factorial);

  /*----------  CÁLCULO DE e  ----------*/;
  float e = 1, fact = 1, i = 1, num = 1;

  while (i <= 10) {
    while (num >= 1)
      fact *= num--;

    e += 1 / fact;
    fact = 1;
    num = ++i;
  }

  printf("La constante \"e\" es aproximada a: %f\n\n", e);

  /*----------  CÁLCULO de e^x  ----------*/;
  float x, y = 1, j = 1, potencia = 1;
  e = num = fact = i = 1;

  printf("\"e\" elevado a la: ");
  scanf("%f", &x);

  while (i <= 10) {
    while (num >= 1)
      fact *= num--;

    while (j <= y) {
      potencia *= x;
      ++j;
    }

    ++y;
    e += potencia / fact;
    fact = 1;
    num = ++i;
  }

  printf("El resultado es: %f\n\n", e);
}
