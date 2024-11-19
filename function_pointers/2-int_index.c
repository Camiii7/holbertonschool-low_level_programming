#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Busca el indice del elemento que cumple con la condicion
 * @array: Arreglo de enteros
 * @size: Taman√o del areglo
 * @cmp: Puntero a la funcion de comparacion
 * Return: El indice o -1 si no se encuentra
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
