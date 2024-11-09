#include "main.h"

/**
 * _strpbrk - Busca la primera ocurrencia en la cadena s
 * @s: Cadena donde se realiza la bsqueda
 * @accept: Caracteres a buscar en s.
 * Return: Puntero al primer cara¡ctr
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *p = accept;

		while (*p)
		{
			if (*s == *p)
				return (s);
			p++;
		}
		s++;
	}

	return (NULL);
}
