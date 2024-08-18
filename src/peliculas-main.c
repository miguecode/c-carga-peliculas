#include <stdio.h>
#include <stdlib.h>

#include "LinkedList.h"
#include "Controller.h"
#include "Menu.h"
#include "Movie.h"
#include "time.h"

int main()
{
	setbuf(stdout, NULL);
	srand(time(NULL));

	char salirMenu = 'n';
	char path[50];

	int flagCargaTxt = 0;
	int flagGuardarTxt = 0;
	int flagAsignarRating = 0;
	int flagAsignarGenero = 0;
	int flagOrdenamiento = 0;

	LinkedList *listaPeliculas = ll_newLinkedList();
	LinkedList *listaPeliculasNueva = ll_newLinkedList();

	if (listaPeliculas == NULL)
	{
		printf("No se pudo cargar en la memoria\n\n");
		exit(1);
	}

	do
	{
		switch (menu(listaPeliculas))
		{
		case 1:
			if (flagCargaTxt == 1)
			{
				printf("\nYa se realizo la carga de datos anteriormente\n\n");
			}
			else if (controller_getPath(path) && controller_loadFromText(path, listaPeliculas))
			{
				flagCargaTxt = 1;
			}

			break;
		case 2:
			controller_ListMovie(listaPeliculas);

			break;
		case 3:
			if (flagCargaTxt == 0)
			{
				printf("\nNo hay peliculas en el sistema\n\n");
			}
			else
			{
				listaPeliculasNueva = ll_map(listaPeliculas, asignarRating);
				controller_ListMovie(listaPeliculasNueva);
				printf("Se actualizo la nueva lista con los rating cargados aleatoriamente.\n\n");
				flagAsignarRating = 1;
			}
			break;

		case 4:
			if (flagCargaTxt == 0)
			{
				printf("\nNo hay peliculas en el sistema\n\n");
			}
			else
			{
				listaPeliculasNueva = ll_map(listaPeliculas, asignarGenero);
				controller_ListMovie(listaPeliculasNueva);
				printf("Se actualizo la nueva lista con generos cargados aleatoriamente.\n\n");
				flagAsignarGenero = 1;
			}
			break;

		case 5:
			if (flagAsignarRating == 1 && flagAsignarGenero == 1)
			{
				controller_filter(listaPeliculas);
			}
			else
			{
				printf("\nPrimero asigne Rating y Generos.\n\n");
			}

			break;

		case 6:
			if (flagAsignarRating == 1 && flagAsignarGenero == 1)
			{
				ll_sort(listaPeliculasNueva, peliculaCompararGeneroYRating, 0);
				controller_ListMovie(listaPeliculasNueva);
				printf("La lista ahora esta ordenada por Genero y Rating (Descendente)\n\n");
				flagOrdenamiento = 1;
			}
			else
			{
				printf("\nPrimero asigne Rating y Generos.\n\n");
			}

			break;
		case 7:
			if (flagOrdenamiento == 0)
			{
				printf("\nPrimero haga un ordenamiento.\n\n");
			}
			else if (controller_getPath(path))
			{
				controller_saveAsText(path, listaPeliculasNueva);
				flagGuardarTxt = 1;
			}

			break;
		case 0:
			if (flagGuardarTxt == 1)
			{
				confirmarSalidaMenu(&salirMenu);
			}
			else
			{
				printf("\nPrimero deberias guardar datos\n\n");
			}
			break;

		default:
			printf("Opcion incorrecta (debe ser un numero del 1 al 7) \n\n");
		}
		system("pause");
		system("cls");

	} while (salirMenu != 's');

	eMovie_delete(listaPeliculas);
	eMovie_delete(listaPeliculasNueva);

	printf("¡Gracias por usar ABM Peliculas!\n\n");
	return 0;
}
