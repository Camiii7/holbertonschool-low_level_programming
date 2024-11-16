#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatena 2 cadenas de caracteres.
 * @s1: primera cadena
 * @s2: segunda cadena
 * @n: Num de caracteres de s2 a concatenar
 * Return: puntero a la nueva cadena concatenada o NULL si hay error
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	result = malloc(sizeof(char) * (len1 + n + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}

