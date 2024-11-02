#include "main.h"

/**
 * print_numbers - imprime los num 0-9.
 * Return: 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)

	{

		_putchar(i + '0'); /** convierte el entero a caracter y lo imprime*/

	}

	_putchar('\n');
}
