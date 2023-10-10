#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Write a function that frees dogs.
 *
 * Return: void
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
