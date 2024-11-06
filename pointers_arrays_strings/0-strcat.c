#include "main.h"

/**
 * _strcat - concatena las dos cadenas
 * @dest: la cadena de destino
 * @src: la cadena fuente a concatenar
 * Return: puntero a la cadena de destino resultante
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
