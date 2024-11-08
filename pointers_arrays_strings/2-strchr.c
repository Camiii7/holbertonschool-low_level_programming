#include "main.h"

/**
 * _strchr - Busca la primera aparicion de un caracter en una cadena
 * @s: La cadena en la que se busca el caracter
 * @c: El caracter a localizar
 *
 * Return: Puntero a la primera aparicion de c en s, o NULL si no se encuentra
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
		return (s);
	return (NULL);
}
