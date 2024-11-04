#include "main.h"

/**
 * puts2 - imprime todos los demas caracteres de una cadena
 * @str: la cadena a imprimir
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if (i % 2 == 0)
	{
	_putchar(str[i]);
	}
	i++;
	}
	_putchar('\n');
}
