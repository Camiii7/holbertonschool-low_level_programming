#include "main.h"

/**
 * _islower - verifica si los caracteres son en minuscula.
 * @c: el caracter que se va a verificar
 * Return: 1 si es minuscula, 0 otro caso.
 */
	int _islower(int c)
	{
	if (c >= 'a' && c <= 'z')
	return (1);
	return (0);
}
