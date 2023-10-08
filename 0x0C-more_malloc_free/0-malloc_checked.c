#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Write a function that allocates memory using malloc.
 *
 * @b: the number of memory to allocate
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
	{
		exit(98);
	}
	return (i);

}
