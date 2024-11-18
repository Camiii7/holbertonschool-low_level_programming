#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - Copia una cadena y retorna un puntero a la nueva cadena
 * @str: Cadena a copiar
 * Return: Puntero a la nueva cadena copiada, o NULL si falla
 */

char *_strdup(char *str)
{
	int i, length;
	char *copy;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length]; length++)
		;

	copy = malloc(length + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		copy[i] = str[i];
	copy[i] = '\0';

	return (copy);
}

/**
 * new_dog - Crea un nuevo perro
 * @name: Nombre del perro
 * @age: Edad del perro
 * @owner: Dueño del pero
 * Return: Puntero a la nueva estructura dog_t o NULL si falla
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->age = age;

	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	return (d);
}

