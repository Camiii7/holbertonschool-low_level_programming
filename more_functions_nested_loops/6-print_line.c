#include "main.h"

/**
 * print_line - Imprime una linea en la terminal.
 * @n: Numero de veces que se debe imprimir el caracter '_'.
 * Return: 0
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		}
		else
		{
			for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
			_putchar('\n');
	}
}
