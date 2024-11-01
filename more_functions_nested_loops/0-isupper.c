#include "main.h"

/**
 * _isupper - Verifica si un carácter es mayúscula.
 * @c: El carácter a verificar.
 * Return: 1 si c es mayúscula, 0 en caso contrario.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);
	else
		return (0);
}
