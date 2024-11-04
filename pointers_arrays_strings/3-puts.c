#include "main.h" /* Asegúrate de incluir el encabezado correcto */

/**
 * _puts - Imprime una cadena seguido de una nueva linea
 * @str: la cadena a imprimir
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
