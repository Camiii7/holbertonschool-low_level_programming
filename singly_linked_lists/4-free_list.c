#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Libera una lista enlazada
 * @head: Puntero al inicio de la lista
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
