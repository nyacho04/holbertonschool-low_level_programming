#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes a variable
 * @d: struct to initialize
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)

		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
