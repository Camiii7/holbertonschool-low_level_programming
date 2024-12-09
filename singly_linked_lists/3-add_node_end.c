#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Agrega un nuevo nodo al final de una lista enlazada
 * @head: Doble puntero al inicio de la lista
 * @str: Cadena que será duplicada y añadida al nuevo nodo 
 * Return: Dirección del nuevo elemento o NULL si falla
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	char *dup_str;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(dup_str);
		return (NULL);
	}

	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = new_node;
	return (new_node);
}
