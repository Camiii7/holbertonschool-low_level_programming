#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Imprime un nombre usando la funcion proporcionada
 * @name: Nombre
 * @f: Puntero a la funcion que se va a utilizar¡ para imprimir el nombe
 * Return: Nada.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

