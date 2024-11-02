#include "main.h"

/**
 * _isdigit - Comprueba si el caracter es un digito (0-9).
 * @c: El caracter a comprobar
 * Return: 1 si c es un digito, 0 otro caso.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
