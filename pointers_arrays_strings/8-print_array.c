#include "main.h"
#include <stdio.h>

/**
 * print_array - imprime n elementos de un arreglo de enteros
 * @a: el arreglo de enteros
 * @n: el nuºmero de elementos a imprimir
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
