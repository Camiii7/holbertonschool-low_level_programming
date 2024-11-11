#include "main.h"

/**
 * factorial - Calcula el factorial de un numero dado
 * @n: Numero entero a calcular su factorial
 * Return: El factorial de n
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}

	return n * factorial(n - 1);
}
