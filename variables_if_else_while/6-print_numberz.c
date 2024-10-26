#include <stdio.h>

/**
 * main - Imprimir los numeros de 1 digito en base 10 seguido de un ('\n')
 * Return: 0
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
