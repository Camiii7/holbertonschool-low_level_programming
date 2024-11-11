#include "main.h"

/**
 * int is_prime_number - Funcion que devuelve 1 si es primo sino 0
 * @n: Num a verificar
 *
 * Return: 1 Si es primo sino 0
 */


int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}

	for (i = 2; i * i <= n; i++)

	{
		if (n % i == 0)
		{
			return (0);
		}
	}

		return (1);
}
