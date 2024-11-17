#ifndef DOG_H
#define DOG_H
/**
* struct dog - Define a dog's attributes.
* @name: Pointer to the dog's name.
* @age: Dog's age as a float.
* @owner: Pointer to the owner's name.
*/
struct dog
{
	char *name;

	float age;

	char *owner;
};

typedef struct dog dog_t;

void free_dog(dog_t *d)
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
