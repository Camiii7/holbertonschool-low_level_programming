#include "function_pointers.h"

/**
 * array_iterator - Ejecuta una funcion sobre cada elemento de un arreglo
 * @array: arreglo de enteros
 * @size: tama√±o del arreglo
 * @action: puntero a la funcio≥n que se ejecut° sobre cada elemen
 * Return: Nada
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
