/*
  El máximo común divisor de los enteros x y y es el entero más grande que
  divide tanto a x como a y. Escriba una función recursiva mcd que devuelva el
  máximo común divisor de x y y. El mcd de x y y se define de manera recursiva
  de la siguiente manera: si y es igual a 0, entonces mcd(x, y) es x, de lo
  contrario mcd(( x, y ) es mcd( y, x%y ), en donde % es el operador módulo.
 */

/* Calcula el minimo común múltiplo de 2 enteros */
int mcd(int x, int y) {
  if (y == 0)
    return x;
  return mcd(y, x % y);
}
