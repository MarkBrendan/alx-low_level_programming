#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - Write a function that reallocates a memory block
 * using malloc and free
 *
 * @ptr: pointer to the memory previously allocated with a call
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *i;
	size_t min_size;
	unsigned int k;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (new_size != old_size)
		i = malloc(new_size);

	if (i == NULL)
		return (NULL);

	min_size =  (old_size < new_size) ? old_size : new_size;

	for (k = 0; k < min_size; k++)
	{
		i[k] = ((char *)ptr)[k];
	}
	free(ptr);
	return (i);
}
