/*
  Escriba una función recursiva potencia( base, exponente ) que cuando se
  invoque devuelva base^exponente Por ejemplo, potencia ( 3, 4 )= 3 * 3 * 3 * 3.
  Suponga que exponente es un entero mayor o igual que 1. Pista: El paso
  recursivo utilizará la relación: base^exponente = base * base^exponente - 1 y
  la condición de terminación ocurre cuando exponente es igual a 1 debido a que
  base^1 = base
 */

/* Calcula `base^exponente` */
int potencia(int base, int exponente) {
  static int resultado = 1;

  if (exponente == 1)
    return base;

  resultado = base * potencia(base, exponente - 1);
  return resultado;
}
