#include "main.h"

/**
 * _strncat - Concatena dos cadenas hasta n caracter
 * @dest: Puntero a la cadena de destino.
 * @src: Puntero a la cadena fuente
*/

char *_strncat(char *dest, char *src, int n)
{
	while (*dest != '\0')
	{
	dest++;
	}

	while (n-- > 0 && *src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}

	*dest = '\0';

	return (dest);
}
