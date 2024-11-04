#include "main.h"

/**
 * _atoi - convierte una cadena a un entero
 * @s: la cadena a convertir
 *
 * Return: el nuºmero convertido o 0 si no hay uºmero
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
			if (*(s + 1) < '0' || *(s + 1) > '9')
				break;
		}
		s++;
	}

	return (sign * num);
}
