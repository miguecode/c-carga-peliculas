#ifndef PARSER_H_
#define PARSER_H_

/// @brief Parsea los datos de las peliculas desde un archivo (modo texto).
///
/// @param pFile FILE*
/// @param pArrayListMovie recibe la LinkedList
/// @return retorna 1 al finalizar
int parser_MovieFromText(FILE *pFile, LinkedList *pArrayListMovie);

#endif /* PARSER_H_ */
