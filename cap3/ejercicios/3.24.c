/*
  El proceso para encontrar el número más grande (es decir, el máximo de
  un grupo de números) se utiliza con frecuencia en aplicaciones para
  computadora. Por ejemplo, un programa que determina el ganador de un concurso
  de unidades vendidas por cada vendedor. El vendedor que vende el mayor número
  de unidades gana. Escriba un programa en pseudocódigo y posteriormente un
  programa que introduzca una serie de 10 números y determine e imprima el
  mayor de éstos. [Clave: Su programa debe utilizar tres variables de la
  siguiente manera]:

  contador: Un contador para contar los números de 1 a 10 (es decir, para
    llevar la cuenta de cuántos números se han introducido y determinar si ya se
    procesaron los 10 números).
  numero: El número actual que se introduce al programa.
  mayor: El número más grande encontrado hasta el momento.

  Pseudocódigo
    Inicio
      Establecer contador en 1
      Establecer mayor en 0
      Mientras contador sea menor o igual a 10 (repite 10 veces)
        Incrementa el contador
        Lee el número
        Si número es más alto que 'mayor' entonces
          mayor será igual al numero
        Si no
          mayor conservará su valor
        Fin si
      Fin de mientras

      Imprimir el mayor
    Fin
*/

/* Encuentra el mayor de 10 números */
#include <stdio.h>

int main() {
  int contador = 1;
  int numero;    /* El número actual que se introduce en el programa */
  int mayor = 0; /* El número más grande encontrado hasta el momento */

  while (contador++ <= 10) {
    printf("(%d/10) Introduzca un numero: ", contador - 1);
    scanf("%d", &numero);

    if (numero > mayor)
      mayor = numero;
  }

  printf("El numero mayor es: %d\n\n", mayor);
}
