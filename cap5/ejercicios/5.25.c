/* Escriba una función que devuelva
el más pequeño de tres números de punto flotante. */

/* Calcula el menor de tres reales */
double min(double numero1, double numero2, double numero3) {
  if (numero1 < numero2 && numero1 < numero3)
    return numero1;

  if (numero2 < numero1 && numero2 < numero3)
    return numero2;

  return numero3;
}
