#include "main.h"

/**
 * _pow_recursion - Calcula valor de x elevado a 'a' de forma recursiva
 * @x: La base
 * @y: El exponente
 * Return: El resultado de x elevado a y. Si y es negativo, retorna -1.
  */

int _pow_recursion(int x, int y)
{

	if (y == 0)
	{
	return (1);
	}

	if (y < 0)
	{
	return (-1);
	}

	return (x * _pow_recursion(x, y - 1));

}
