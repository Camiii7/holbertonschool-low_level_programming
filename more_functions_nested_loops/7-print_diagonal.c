#include "main.h"

/**
 * print_diagonal - Imprime una linea diagonal en la terminal.
 * @n: Numero de veces que se debe imprimir el caracter '\'.
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = 0 ; i < n; i++)
		{
			for (j = 0 ; j < i ; j++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
