#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - selecciona la operacio≥n correspondiente seu∫n el operado
 * @s: El operador a comparar
 * Return: Un puntero a la funci√≥n de operaco≥n correspdient
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	if (*s == '+' || *s == '-' || *s == '*' || *s == '/' || *s == '%')
		return (ops[*s == '+' ? 0 : *s == '-' ? 1 : *s == '*' ? 2 : *s == '/' ? 3 : 4].f);

	return (NULL);
}
