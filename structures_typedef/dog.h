#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Estructura que define un perro
 * @name: Nombre del perro
 * @age: Edad del perro
 * @owner: Dueño del perro
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void print_dog(struct dog *d);

#endif