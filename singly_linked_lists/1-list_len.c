#include "lists.h"

/**
 * list_len - Devuelve el nu�mero de elementos en una lista enlazada
 * @h: Puntero al primer nodo de la lista
 * Return: El nu�mero de elementos en la lista
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;


	while (h != NULL)
	{
	count++;
	h = h->next;
    }

	return count;
}
