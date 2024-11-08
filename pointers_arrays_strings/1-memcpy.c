#include "main.h"

/**
 * _memcpy - Copia un area de memoria
 * @dest: Puntero al area de memoria de destino
 * @src: Puntero al area de memoria de origen
 * @n: Numero de bytes a copiar
 * Return: Puntero al area de memoria de destino (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}

	return (dest);
}
