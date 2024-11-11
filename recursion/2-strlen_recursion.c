#include "main.h"

/**
 * int _strlen_recursion - Funcion que devuelve la longitud de una cadena
 * @s: La cadena
 * Return: 0
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
