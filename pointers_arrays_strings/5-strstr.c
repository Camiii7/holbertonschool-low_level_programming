#include "main.h"

/**
 * _strstr - Ocurrencia de la subcadena needle dentro de la cad haystack
 * @haystack: Cadena en la que se busca la subcadena.
 * @needle: Subcadena que se busca dentro de haystack.
 * Return: Puntero al comienzo de la subcadena localizada o NULL
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
