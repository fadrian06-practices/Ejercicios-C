/*
  Escriba una función potenciaInt( base, exponente) que devuelva el valor de:
  base^exponente

  Por ejemplo, potenciaInt(3, 4)=3*3*3*3. Suponga que exponente es un entero
  positivo diferente de cero, y base es un entero. La función potenciaInt debe
  utilizar for para controlar los cálculos. No utilice las funciones matemáticas
  de la biblioteca.
 */

/* Calcula la potencia de `Base^exponente` */
int potenciaInt(int base, int exponente) {
  int acumulador = 1;
  int contador = 1;

  for (; contador <= exponente; ++contador)
    acumulador *= base;

  return acumulador;
}
