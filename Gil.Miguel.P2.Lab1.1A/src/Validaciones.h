#ifndef VALIDACIONES_H_
#define VALIDACIONES_H_

/// @brief Valida que el path ingresado sea correcto.
/// Admite letras, numeros, comas, y ciertos caracteres.
///
/// @param path char*
/// @return retorna 1 al finalizar la funcion
int validarPath(char* path);

/// @brief Valida que la opcion ingresada sea correcta.
/// Solo admite numeros especificos.
///
/// @param pOpcion int* le cargara el valor correspondiente
void validarOpcion(int* pOpcion);

#endif /* VALIDACIONES_H_ */
