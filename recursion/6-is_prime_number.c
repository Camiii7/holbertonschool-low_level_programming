#include "main.h"

/**
 * is_prime_number - Funcion que devuelve 1 si es primo, sino 0
 * @n: Numero a verificar
 * Return: 1 si es primo, de lo contrario 0
 */

int is_prime_helper(int n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Funcion auxiliar para verificar si un num es primo
 * @n: Num a verificar
 * @i: Posible divisor
 * Return: 1 si es primo, sino 0
 */

int is_prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i + 1));
}
