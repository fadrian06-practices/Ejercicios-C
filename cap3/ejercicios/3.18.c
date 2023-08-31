/*
  Desarrolle un programa en C que determine si un cliente de una tienda
  departamental excede el límite de crédito de su cuenta. Para cada cliente, se
  dispone de los siguientes datos:
  1. Número de cuenta.
  2. Saldo al inicio del mes.
  3. Total de elementos cargados al cliente en este mes.
  4. El total de los créditos aplicados a la cuenta del cliente durante el mes.
  5. El límite de crédito autorizado.
  El programa debe introducir cada uno de estos datos, calcular el nuevo saldo
  (= saldo inicial + cargos – créditos), y determinar si el nuevo saldo excede
  el límite de crédito del cliente. Para aquellos clientes que excedan el límite
  de crédito, el programa debe desplegar el número de cuenta, el límite de
  crédito, el saldo nuevo y el mensaje “Lí- mite de crédito excedido”.

  Objetivo
  Determinar si un cliente excede el límite de crédito de su cuenta.

  Mejoramiento 1
  Recolectar valores necesarios.
  Calcular el nuevo saldo.
  Verifica si el cliente excede el límite de crédito.

  Mejoramiento 2
  Repetir mientras no se digite valor centinela (-1)
    Leer datos necesarios
    Calcular el nuevo saldo
    Comprobar si el cliente excede el límite de crédito
*/

/* Determinar si un cliente excede el límite de crédito */
#include <stdio.h>

int main() {
  int numeroCuenta;
  float saldoInicial;  /* Saldo al inicio del mes */
  float totalCargos;   /* Total de elementos cargados al cliente en este mes */
  float totalCreditos; /* El total de los créditos aplicados a la cuenta del
                          cliente durante el mes */
  float limiteCredito; /* El límite de crédito autorizado */
  float nuevoSaldo;

  printf("Introduzca el numero de cuenta (-1 para terminar): ");
  scanf("%d", &numeroCuenta);

  while (numeroCuenta != -1) {
    printf("Introduzca el saldo inicial: ");
    scanf("%f", &saldoInicial);

    printf("Introduzca el total de cargos: ");
    scanf("%f", &totalCargos);

    printf("Introduzca el total de creditos: ");
    scanf("%f", &totalCreditos);

    printf("Introduzca el limite de credito: ");
    scanf("%f", &limiteCredito);

    nuevoSaldo = saldoInicial + totalCargos - totalCreditos;

    if (nuevoSaldo > limiteCredito) {
      printf("Cuenta: %d\n", numeroCuenta);
      printf("Limite de credito: %.2f\n", limiteCredito);
      printf("Saldo: %.2f\n", nuevoSaldo);
      printf("Limite de credito excedido.\n");
    }

    printf("\n");

    printf("Introduzca el numero de cuenta (-1 para terminar): ");
    scanf("%d", &numeroCuenta);
  }

  printf("\n");
}
