#ifndef MENU_H_
#define MENU_H_

/// @brief Muestra un menú de opciones y le pide al usuario
/// que ingrese una opción. También muestra la cantidad actual de películas.
///
/// @param pArrayListPassenger recibe la ddm de la linkedlist
/// @return devuelve el valor de la opción, o 0 si no funciono
int menu(LinkedList* pArrayListMovie);

/// @brief Le pide al usuario que responda con 's' o 'n' a si quiere salir del menú.
///
/// @param p es un puntero que va a cargar el valor de la respuesta
void confirmarSalidaMenu(char* p);

#endif /* MENU_H_ */
