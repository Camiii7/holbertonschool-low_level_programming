#include "main.h"

/**
 * _puts_recursion - Imprime una cadena de texto de manera recursiva
 * @s: La cadena de texto a imprimir
 * Return: Ningun valor.
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')

		{

		_putchar('\n');

		return;

		}

	_putchar(*s);
	_puts_recursion(s + 1);
}
