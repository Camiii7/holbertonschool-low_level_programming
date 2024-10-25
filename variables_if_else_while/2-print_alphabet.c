#include <stdio.h>
/**
 * main - Imprime abcdario en minuscula
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}
	putchar('\n');

	return (0);
}

