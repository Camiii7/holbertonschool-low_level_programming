#include <stdio.h>

/**
 * main - Imprime todos los numeros en base 16
 * Retorna: 0 
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}

	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}

