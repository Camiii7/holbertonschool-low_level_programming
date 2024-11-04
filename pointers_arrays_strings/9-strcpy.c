#include "main.h"

/**
 * _strcpy - copia la cadena de src a dest
 * @dest: el bufer donde se copiara¡ la cadena
 * @src: la cadena que se va a copiar
 * Return: el puntero a dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
