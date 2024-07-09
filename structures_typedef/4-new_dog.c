#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _nya - returns the length
 * @a: string
 *
 * Return: the length
 */
int _nya(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * *_nyacpy - copies the string pointed to by src
 * @uno: pointer to the buffer
 * @dos: string to be copied
 *
 * Return: pointer to dest
 */
char *_nyacpy(char *uno, char *dos)
{
	int tres, i;

	tres = 0;

	while (dos[tres] != '\0')
	{		tres++;
	}
	i = 0;
	while (i < tres)
	{
		uno[i] = dos[i];
		i++;
	}
	uno[i] = '\0';

	return (uno);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int nya1;
	int nya2;

	nya1 = 0;
	nya2 = 0;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (nya1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (nya2 + 1));
	{
		free(dog);
		free(dog->owner);
		return (NULL);
	}
	_nyacpy(dog->name, name);

	_nyacpy(dog->owner, owner);

	dog->age = age;

	return (dog);
}
