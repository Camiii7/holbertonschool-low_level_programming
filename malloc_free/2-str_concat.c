#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Funcion que concatena dos cadenas
 * @s1: La primera cadena
 * @s2: La segunda cadena
 * Return: Un puntero a la nueva cadena o NULL
 */


char *str_concat(char *s1, char *s2)
{

	char *concat_str;
	int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
	{
		s1= "";
	}

	for (len1 = 0; s1[len1] != '\0'; len1++)
		/** Itera sobre cada caracter de s1 */

	for (len2 = 0; s2[len2] != '\0'; len2++)
		/** Itera sobre cada caracter s2 */

	concat_str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1 ; i++)
		concat_str[i] = s1[i];

	for (j = 0; j < len2; j++)
		concat_str[i + j] = s2[j];

	concat_str[len1 + len2] = '\0';

	return (concat_str);
}
