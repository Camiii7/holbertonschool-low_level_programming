#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num;

	/* Imprime los nuºmeros del 0 al 9 */
	for (num = 0; num < 10; num++)
	{
	putchar(num + '0');
	}

	/* Imprime las letras de 'a' a f */
	for (num = 'a'; num <= 'f'; num++)
       	{
	putchar(num);
	}

	putchar('\n');

	return (0);
}

