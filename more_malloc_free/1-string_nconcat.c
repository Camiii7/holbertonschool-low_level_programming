#include "main.h"
#include <stdlib.h>


/**
 * string_nconcat - Concatena 2 cadenas de caracteres
 * @s1: Primer cadena
 * @s2: Segunda cadena
 * @n: Num maximo de caracteres a copiar de s2
 * Return: Puntero a la cadena resultante
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0' && len2 < n)
		len2++;

	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < len2; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}

