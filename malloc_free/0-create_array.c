#include "main.h"
#include <stdlib.h>

/**
 * char *create_array - Funcion que crea un arreglode caracteres.
 * * @c: Caracter con el que va a inicializa
 * @size: Tama√o del arreglo a crear
 * Return: NULL si el tama√±o es 0 o no se puede asignar la memora
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)

	{
		return (NULL);

	}


	array = malloc(size * sizeof(char));

	if (array == NULL)

	return (NULL);


	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}

