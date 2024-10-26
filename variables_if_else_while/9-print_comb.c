#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
	putchar(num + '0');

	if (num != 9) /* Si no es 9, imprime coma y espacio */
	{
	putchar(',');
	putchar(' ');
	}
	}

	putchar('\n');

	return (0);
}
