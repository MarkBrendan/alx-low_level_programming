#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Write a function that frees dogs.
 *
 * @d: the memory to free
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
