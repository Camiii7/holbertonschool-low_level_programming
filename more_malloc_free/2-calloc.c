#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Asigna memoria para un arreglo de nmemb elementos de tamaño size
 *           e inicializa la memoria a cero
 * @nmemb: Num de elementos a almacenar
 * @size: Tamaño en ytes de cada element
 * Return: Un puntero al bloque de memoria asignado o NULL si ocurre un error
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		((char *)ptr)[i] = 0;

	return (ptr);
}
