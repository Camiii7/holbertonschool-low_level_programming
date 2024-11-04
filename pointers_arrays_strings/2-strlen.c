#include "main.h"

/**
 * _strlen - Devuelve la longitud de la cadena.
 * @s: Puntero a la cadena.
 *
 * Return: La longitud de la cadena.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	return (length);
}
