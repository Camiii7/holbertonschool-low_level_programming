#include "main.h"

/**
 * _strspn - longitud de un prefijo que contiene caracteres de 'accept'
 * @s: Cadena de caracteres a verificar
 * @accept: Cadena de caracteres para verificar
 * Return: Num de caract en el segmento inicial de 's' que estan en 'accept'
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	while (*s)
	{
		p = accept;
		while (*p)
		{
			if (*s == *p)
				break;
			p++;
		}

		if (!*p)
			break;

		count++;
		s++;
	}

	return (count);
}
