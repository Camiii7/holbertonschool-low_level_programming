#include "main.h"

/**
 * _sqrt_recursion - Calcula la rai­z cuadrada natural dl num
 * @n: Numº al quele calculo la rai­z cuadrada
 * Return: La rai­z cuadrada de n o -1 si no tien
 */
int _sqrt_recursion(int n)
{
	int x = 0;

	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(n, x));
}

/**
 * _sqrt - FunciÃ³n auxiliar para encontrar la rai­z cuadrada
 * @n: Num al que le calculo la raiz cuadrada
 * @x: Num de prueba para verificar la rai­z cuadrada
 * Return: La rai­z cuadrada si existe,sino  -1
 */
int _sqrt(int n, int x)
{
	if (x * x > n)
	return (-1);
	if (x * x == n)
	return (x);
	return (_sqrt(n, x + 1));
}
