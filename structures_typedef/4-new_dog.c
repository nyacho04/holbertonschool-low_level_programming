#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dog.h"
/**
* new_dog - Creates a new dog.
*
* @name: Pointer to the dog's name.
*
* @age: The dog's age.
*
* @owner: Pointer to the dog's owner.
*
* Return: A pointer to the new dog, or NULL if memory allocation fails.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    int i; 
	int name2 = 0;
	int owner2 = 0;

  	if (!name || !owner)
        return (NULL);

    while (name[name2])
        name2++;

    while (owner[owner2])
        owner2++;

    new_dog = malloc(sizeof(dog_t));

    if (!new_dog)
        return (NULL);

    new_dog->name = malloc(name2 + 1);

    if (!(new_dog->name))
    {
        free(new_dog);
        return (NULL);
    }

    new_dog->owner = malloc(owner2 + 1);

    if (!(new_dog->owner))
    {
        free(new_dog->name);
        free(new_dog);
        return (NULL);
    }

    for (i = 0; i <= name2; i++)
        new_dog->name[i] = name[i];

    for (i = 0; i <= owner2; i++)
        new_dog->owner[i] = owner[i];

    new_dog->age = age;

    return (new_dog);
}