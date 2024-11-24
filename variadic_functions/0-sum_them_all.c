#include <stdarg.h>

/**
 * sum_them_all - Suma todos los parametros proporcionados
 * @n: Numero de parametros a sumar
 * Return: la suma de todos los parámetros, o 0 si n e 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
