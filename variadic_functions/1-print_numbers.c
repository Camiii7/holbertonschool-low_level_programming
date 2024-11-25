#include <stdio.h>
#include <stdarg.h>


/**
 * print_strings - Imprime cadenas de caracteres separadas por un delimitador
 * @separator: La cadena que se imprime¡ entre las cadena
 * @n: El nuº de cadenas a imprimir
 * @...: Las cadenas que se van a imprimir
 * Return: Si una cadena es NULL no se imprime
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{

		int number = va_arg(args, int);

		printf("%d", number);


		if  (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}


	va_end(args);

	printf("\n");
}
