#include "main.h"
#include <stdlib.h>


/**
 * void free_grid - Funcion que libera una cuadricula bidimensional
 * @grid: Puntero a una matriz 2D de enteros
 * @height: Altura de la cuadricula
 * Return: nada
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}


	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);

}
