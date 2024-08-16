#ifndef CONTROLLER_H_
#define CONTROLLER_H_

/// @brief Le pido un path al usuario para abrir el archivo.
///
/// @param path char*
/// @return retorna 1 si funciona correctamente y sino 0
int controller_getPath(char *path);

/// @brief Carga los datos de las peliculas desde un archivo (modo texto).
///
/// @param path char*
/// @param pArrayListMovie recibe la LinkedList
/// @return retorna 1 si funciona correctamente y sino 0
int controller_loadFromText(char *path, LinkedList *pArrayListMovie);

/// @brief Muestra un listado con los datos de todas las peliculas cargadas.
///
/// @param pArrayListMovie recibe la LinkedList
/// @return retorna 1 si funciona correctamente y sino 0
int controller_ListMovie(LinkedList *pArrayListMovie);

/// @brief Guarda los datos de las peliculas en un archivo que ingrese
/// el usuario (modo texto).
///
/// @param path char*
/// @param pArrayListMovie recibe la LinkedList
/// @return retorna 1 si funciona correctamente y sino 0
int controller_saveAsText(char *path, LinkedList *pArrayListMovie);

/// @brief Le pide al usuario que seleccione un genero para filtrarlo
/// usando la funcion ll_filter.
///
/// @param pArrayListMovie recibe la LinkedList
/// @return retorna 1 si funciona correctamente y sino 0
int controller_filter(LinkedList *pArrayListMovie);

/// @brief Guarda la lista filtrada en un archivo existente o no (modo texto).
///
/// @param path char*
/// @param pArrayFilterList recibe la LinkedList
/// @return retorna 1 si funciona correctamente y sino 0
int controller_saveFilter(char *path, LinkedList *pArrayFilterList);

#endif /* CONTROLLER_H_ */
