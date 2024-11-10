#include "main.h"
#include <unistd.h>  /* Para la función write */

/**
 * _putchar - escribe un carácter en la salida estándar
 * @c: el carácter a imprimir
 * Return: 1 en caso de éxito, -1 en caso de error
 */
int _putchar(char c)
{
    return (write(1, &c, 1));  /* Escribe un solo carácter en la salida estándar */
}
