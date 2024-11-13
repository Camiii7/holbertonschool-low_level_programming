#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - retorna un puntero a un nuevo espacio de memoria
 * @str: la cadena a duplicar.
 * Return: un puntero a la cadena duplicada o NULL si la memoria
 *         no se puede asignar o si str es NULL.
 */

char *_strdup(char *str)
{
	char *duplicate;
	int len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)


	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		duplicate[i] = str[i];

	duplicate[len] = '\0';

	return (duplicate);
}
