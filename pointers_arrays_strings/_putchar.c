#include <unistd.h>

/**
 * _putchar - caracter c en la salida estandar
 * @c: el caracter a imprimir
 * Return: 1
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
