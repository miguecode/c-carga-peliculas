#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "LinkedList.h"
#include "Menu.h"
#include "Controller.h"

int menu(LinkedList *pArrayListMovie)
{
	int todoOk = 0;
	int opcion;
	int cantidadPeliculas = ll_len(pArrayListMovie);

  printf("|=====================================================|\n");
  printf("|         *****  CARGA PELICULAS - MENU  *****        |\n");
  printf("|=====================================================|\n");
  printf("|                 Ingrese una opcion                  |\n");
  printf("|=====================================================|\n");
  printf("|  1  | Cargar Archivo                                |\n");
  printf("|  2  | Mostrar peliculas                             |\n");
  printf("|  3  | Asignar ratings aleatoriamente                |\n");
  printf("|  4  | Asignar generos aleatoriamente                |\n");
  printf("|  5  | Crear una lista por genero                    |\n");
  printf("|  6  | Ordenar peliculas                             |\n");
  printf("|  7  | Guardar peliculas                             |\n");
  printf("|=====================================================|\n");
  printf("|  0  | Salir                                         |\n");
  printf("|=====================================================|\n\n");
  printf("[Cantidad de peliculas cargadas: %d]\n", cantidadPeliculas);
  printf("[>] Ingrese opcion: ");
	
	fflush(stdin);
	todoOk = scanf("%d", &opcion);

	if (todoOk)
	{
		return opcion;
	}

	return todoOk;
}

void confirmarSalidaMenu(char *p)
{
  if (p != NULL)
  {
    char confirma;
    printf("\n");
    printf("|=====================================================|\n");
    printf("|                 Salir del programa?                 |\n");
    printf("|=====================================================|\n\n");
    printf("[>] Ingrese 's' o 'n': ");
    fflush(stdin);
    scanf("%c", &confirma);
    confirma = tolower(confirma);

    while (confirma != 's' && confirma != 'n')
    {
      printf("[>] Error, debe responder con 's' o 'n':  \n");
      fflush(stdin);
      scanf("%c", &confirma);
      confirma = tolower(confirma);
    }
    *p = confirma;
  }
}