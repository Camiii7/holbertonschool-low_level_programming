#include "main.h"

/**
 * _memset - Llena la memoria con un byte constante
 * @s: Puntero a la regio³n de memoria que se va a llenar
 * @b: El byte constante con el que se llenara¡ la memoria
 * @n: Nuºmero de bytes que se deben llenar
 * Return: Puntero a la memoria modificada
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for  (i = 0 ; i < n; i++)
	{
		s [i] = b;
	}

	return (s);

}
