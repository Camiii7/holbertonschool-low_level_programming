#include <stdio.h>

/**
 * main - Imprime todos los numeros de un solo digito en base 10
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
	putchar(num + '0');
	}
	putchar('\n');

	return (0);
}
