/*
  Una empresa quiere transmitir datos mediante la línea telefónica, pero les
  preocupa que sus teléfonos pudieran estar intervenidos. Todos sus datos se
  transmiten como enteros de cuatro dígitos. A usted le pidieron que escriba un
  programa que encripte sus datos de manera que se transmitan de forma más
  segura. El programa debe leer un entero de cuatro dígitos y encriptar la
  información de la siguiente manera:

  1. reemplace cada dígito con el residuo de la división entre 10 de la suma de
  dicho dígito más 7.
  2. Posteriormente, intercambie el primer dígito con el tercero, e intercambie
  el segundo dígito con el cuarto.
  3. Luego despliegue el entero encriptado.

  Escriba un programa por separado que introduzca un entero encriptado de cuatro
  dígitos y lo desencripte para formar el número original.
 */

/* Encripta y desencripta enteros */
#include <stdio.h>

int main() {
  int numeroAEncriptar, numeroADesencriptar;
  int primerDigito, segundoDigito, tercerDigito, cuartoDigito;
  int temporal;

  /*----------  ENCRIPTAR  ----------*/
  printf("Introduzca un numero entero de cuatro digitos: ");
  scanf("%d", &numeroAEncriptar);

  cuartoDigito = numeroAEncriptar % 10;
  numeroAEncriptar /= 10;
  tercerDigito = numeroAEncriptar % 10;
  numeroAEncriptar /= 10;
  segundoDigito = numeroAEncriptar % 10;
  numeroAEncriptar /= 10;
  primerDigito = numeroAEncriptar % 10;
  numeroAEncriptar /= 10;

  primerDigito = (primerDigito + 7) % 10;
  segundoDigito = (segundoDigito + 7) % 10;
  tercerDigito = (tercerDigito + 7) % 10;
  cuartoDigito = (cuartoDigito + 7) % 10;

  temporal = primerDigito;
  primerDigito = tercerDigito;
  tercerDigito = temporal;

  temporal = segundoDigito;
  segundoDigito = cuartoDigito;
  cuartoDigito = temporal;

  printf("El numero encriptado es: ");
  printf("%d%d%d%d", primerDigito, segundoDigito, tercerDigito, cuartoDigito);
  printf("\n\n");

  /*----------  DESENCRIPTAR  ----------*/
  printf("Introduzca un numero entero de cuatro digitos encriptado: ");
  scanf("%d", &numeroADesencriptar);

  cuartoDigito = numeroADesencriptar % 10;
  numeroADesencriptar /= 10;
  tercerDigito = numeroADesencriptar % 10;
  numeroADesencriptar /= 10;
  segundoDigito = numeroADesencriptar % 10;
  numeroADesencriptar /= 10;
  primerDigito = numeroADesencriptar % 10;
  numeroADesencriptar /= 10;

  temporal = primerDigito;
  primerDigito = tercerDigito;
  tercerDigito = temporal;

  temporal = segundoDigito;
  segundoDigito = cuartoDigito;
  cuartoDigito = temporal;

  if (primerDigito >= 7)
    primerDigito -= 7;
  else
    primerDigito += 3;

  if (segundoDigito >= 7)
    segundoDigito -= 7;
  else
    segundoDigito += 3;

  if (tercerDigito >= 7)
    tercerDigito -= 7;
  else
    tercerDigito += 3;

  if (cuartoDigito >= 7)
    cuartoDigito -= 7;
  else
    cuartoDigito += 3;

  printf("El numero desencriptado es: ");
  printf("%d%d%d%d", primerDigito, segundoDigito, tercerDigito, cuartoDigito);
  printf("\n\n");
}
