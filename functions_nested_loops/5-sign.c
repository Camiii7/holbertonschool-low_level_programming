#include "main.h"
#include <ctype.h>

/**
 * print_sign - Imprime el signo del numero.
 * @n: Numero a verificar
 *
 * Return: 1 si n es mayor a cero,
 *         0 si n es zero
 *         -1 si n es menor a cero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
	return (-1);
	}
}
