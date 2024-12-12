#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Imprime los elementos de la lista doblemente enlazada
 * @h: Puntero al inicio de la lista
 * Return: Cantidad de nodos impresos
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL) /* Se ejecuta mientras h no sea NULL */
	{

		printf("%d\n", h->n);  /* Imprime el valor del nodo */
		count++;               /* Incrementa el contador  */
		h = h->next;            /* Avanza al siguiente nodo */
	}

	return (count);  /* Devuelve el número de nodo*/
}
