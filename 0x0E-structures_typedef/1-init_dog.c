#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - to initialise the dog struct
 * @d: pointer to dog struct;
 * @name: name of dog
 * @owner: name of owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
