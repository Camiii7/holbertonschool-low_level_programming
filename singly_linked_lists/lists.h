#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct list_s - Nodo de una lista enlazada
 * @str: Cadena - (malloc'ed string)
 * @len: Longitud de la cadena
 * @next: Puntero al siguiente nodo
 * Descripción: Nodo de una lista enlazada simple
 */

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;


size_t print_list(const list_t *h);

#endif
