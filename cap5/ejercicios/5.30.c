/*
  Escriba una función puntosCalidad que tome el promedio de un estudiante y
  devuelva
 */

/*
  4 si el promedio del estudiante está entre 90-100,
  3 si el promedio es 80-89,
  2 si el promedio es 70-79,
  1 si el promedio es 60-69,
  0 si el promedio es menor que 60.
 */
enum Calidad { MUY_BAJA, BAJA, MEDIA, ALTA, MUY_ALTA, ERROR };

enum Calidad puntosCalidad(double promedio) {
  if (promedio < 60)
    return MUY_BAJA;

  if (promedio <= 69)
    return BAJA;

  if (promedio <= 79)
    return MEDIA;

  if (promedio <= 89)
    return ALTA;

  if (promedio <= 100)
    return MUY_ALTA;

  return ERROR;
}
