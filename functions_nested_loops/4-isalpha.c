#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Verifica si el caracter es una letra.
 * @c: Caracter a verificar.
 * Return: 1 si c es una letra, 0 otro caso.
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1); /* Retorna 1 si c es una letra */
	else
		return (0); /* Retorna 0 si no es una letra */
}
