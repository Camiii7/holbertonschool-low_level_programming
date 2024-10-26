#include <stdio.h>

/**
 * main - Imprimir el alfabeto, excepto 'q' y 'e'.
 * Return: Always 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter != 'q' && letter != 'e')
	{
	putchar(letter);
	}
	}
	putchar('\n');

	return (0);
}

