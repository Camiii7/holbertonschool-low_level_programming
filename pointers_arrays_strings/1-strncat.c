#include "main.h"

/**
 * _strncat - concatena dos cadenas
 * @dest: cadena de destino
 * @src: cadena fuente
 * @n: número de bytes a utilizar de src
 * 
 * Return: puntero a la cadena resultante en dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i;

	while (dest[dest_len] != '\0')
	dest_len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return dest;
}
