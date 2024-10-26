#include <stdio.h>

/**
 * main - Imprimir el alfabeto en orden inverso
 * Return: 0
 *
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
	putchar(letter);
	}
	putchar('\n');

	return (0);
}
