#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "dog.h"

/**
 * print_dog - to print struct dog
 * @d: takes in pointer to dog struct
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		if (!isnan(d->age))
		{
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("Age: (nil)\n");
		}
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}

