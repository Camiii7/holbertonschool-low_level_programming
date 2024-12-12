#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - Cuenta el nuºmero de elementos en una lista doblemente enlaza
 * @h: Puntero al inicio de la lista
 * Return: Nuºmero total de nodos en la lis
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0; /* Inicializa el contador de nodos */

	while (h != NULL) /* Recorre la lista mientras el nodo actual no sea NULL */
	{
		count++;       /* Incrementa el contador por cada nodo */
		h = h->next;   /* Avanza al siguiente nodo */
	}

	return (count);    /* Devuelve el total de nodos */
}
