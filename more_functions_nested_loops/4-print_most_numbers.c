#include "main.h"

/**
 * print_most_numbers - Imprime num de 0-9 excepto 2 y 4
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	if (i != 2 && i != 4)  /** Si el nuºmero no es 2 n 4 */
		{
		_putchar(i + '0');
		}
	}
	_putchar('\n');
}
