/*
  Recuperar el dinero se hace más difícil durante los periodos de recesión, de
  manera que las empresas deben reducir sus límites de crédito para prevenir
  que sus cuentas por cobrar (el dinero prestado) se hagan muy grandes. En
  respuesta a la prolongada recesión, una empresa recortó sus límites de crédito
  a la mitad. De esta manera, si un cliente en particular tenía un límite de
  crédito de $2000, ahora su límite es de $1000. Si un cliente tenía un límite
  de crédito de $5000, este cliente tiene ahora un límite de crédito de $2500.

  Escriba un programa que analice el estado del crédito de tres clientes de
  esta empresa. Por cada cliente a usted se le brinda:

  a) El número de cuenta del cliente.
  b) El límite de crédito antes de la recesión.
  c) El saldo actual del cliente (es decir, el monto que le debe el cliente a la
  empresa).

  Su programa debe calcular e imprimir el nuevo límite de crédito para cada
  cliente, y debe determinar (e imprimir) cuáles clientes tienen saldos que
  exceden los nuevos límites de crédito.
 */

/* Calcula el límite de crédito para tres empleados */
#include <stdio.h>

int main() {
  short numeroCuenta;          // Número de cuenta del cliente
  float limiteCreditoAnterior; // Límite de crédito antes de la recesión
  float nuevoLimiteCredito;    // Nuevo límite de crédito
  float saldoActual;           // Monto que le debe el cliente a la empresa
  short contador = 1;

  for (; contador <= 3; ++contador) {
    printf("Introduzca el numero de cuenta: ");
    scanf("%hd", &numeroCuenta);
    printf("Introduzca el limite de credito anterior: ");
    scanf("%f", &limiteCreditoAnterior);
    printf("Introduzca el saldo actual: ");
    scanf("%f", &saldoActual);

    nuevoLimiteCredito = limiteCreditoAnterior / 2;

    if (nuevoLimiteCredito < saldoActual) {
      printf("\nSu saldo %.2f", saldoActual);
      printf(" excede el nuevo limite de credito %.2f\n", nuevoLimiteCredito);
    }

    printf("\n");
  }
}
