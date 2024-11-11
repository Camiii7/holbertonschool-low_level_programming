#include "main.h"

/**
 * _print_rev_recursion - Funcion que imprime una cadena alreves
 * @s: La cadena de caract. a imprimir
 * Return: 0
 */

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);

}
