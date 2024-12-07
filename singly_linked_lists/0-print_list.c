#include <stdio.h>
#include "lists.h"

/**
 * print_list - Imprime todos los elementos de la lista
 * @h: Puntero al nodo inicial de la lista
 * Return: Nuºmero de nodos en la lista
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		printf("[%u] %s\n", h->len, h->str);
		else
		printf("[0] (nil)\n");

		count++;
		h = h->next;
	}

	return (count);
}
