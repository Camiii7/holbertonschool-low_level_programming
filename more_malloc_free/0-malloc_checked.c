#include "main.h"
#include <stdlib.h>

/**
 * void *malloc_checked - Funcion que signa memoria usando malloc
 * @b: Tama√o de la memoria que se debe asignar en bytes
 * Return: Puntero a la memoria asignada
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);

}
