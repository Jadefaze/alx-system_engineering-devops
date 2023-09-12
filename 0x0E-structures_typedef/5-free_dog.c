#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - to clear dog from memory
 * @d: takes in the pointer to the dog struct
 * Return: nothing (void)
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
