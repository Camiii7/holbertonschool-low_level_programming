#include "main.h"
#include <stdlib.h>

/**
 * array_range - Arreglo de enteros de min a max
 * @min: Valor minimo­ del arrego
 * @max: Valor ma¡ximo del arregl
 * Return: Puntero al arreglo de enteros, o NULL si hubo un error
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr); }
