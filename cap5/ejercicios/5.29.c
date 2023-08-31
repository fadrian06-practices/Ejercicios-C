/*
  El máximo común divisor (MCD) de dos enteros es el entero más grande que
  divide cada uno de los números. Escriba un programa mcd que devuelva el
  máximo común divisor de dos enteros.
 */

int mcd(int x, int y) {
  int menor = x < y ? x : y;
  int mayor = menor == x ? y : x;
  int contador = 1;
  int mcd = contador;

  if (mayor % menor == 0)
    return menor;

  for (; contador <= menor; ++contador)
    if (x % contador == 0 && y % contador == 0)
      mcd = contador;

  return mcd;
}
