#include "dog.h"
#include <stdio.h>
/**
* print_dog - Initializes a variable of type struct dog.
*
* @d: The variable to be initialized.
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
