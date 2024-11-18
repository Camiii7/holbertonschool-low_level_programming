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

} dog_t;

dog_t *new_dog(char *name, float age, char *owner);


#endif
