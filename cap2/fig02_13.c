/* Figura 2.13: fig02_13.c
  Uso de instrucciones if, operadores
  de relaci�n y operadores de igualdad */
#include <stdio.h>

/* la funci�n main inicia la ejecuci�n del programa */
int main() {
  int num1; /* primer n�mero que lee el usuario */
  int num2; /* segundo n�mero que lee el usuario */

  printf("Introduzca dos enteros y le dire\n");
  printf("las relaciones que satisfacen: ");
  scanf("%d%d", &num1, &num2); /* lectura de los enteros */

  if (num1 == num2) {
    printf("%d es igual que %d\n", num1, num2);
  } /* fin de if */

  if (num1 != num2) {
    printf("%d no es igual que %d\n", num1, num2);
  } /* fin de if */

  if (num1 < num2) {
    printf("%d es menor que %d\n", num1, num2);
  } /* fin de if */

  if (num1 > num2) {
    printf("%d es mayor que %d\n", num1, num2);
  } /* fin de if */

  if (num1 <= num2) {
    printf("%d es menor o igual que %d\n", num1, num2);
  } /* fin de if */

  if (num1 >= num2) {
    printf("%d es mayor o igual que %d\n", num1, num2);
  } /* fin de if */

  return 0; /* indica que el programa termin� con �xito */
} /* fin de la funci�n main */
