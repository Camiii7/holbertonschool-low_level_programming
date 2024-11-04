#include "main.h" /* Asegúrate de incluir el encabezado correcto */

/**
 * print_rev - imprime la cadena en reversa
 * @s: cadena a imprimir
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
	length++;
	}

	for (length--; length >= 0; length--)
	{
	_putchar(s[length]);
	}

	_putchar('\n');
}

