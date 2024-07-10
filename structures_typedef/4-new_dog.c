#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new structure
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
{
	free(new_dog);

	return (NULL);
}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
