#include "main.h"

/**
 * *malloc_checked - Write a function that allocates memory using malloc.
 * @b: size of byte to allocate
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit (98);

	return (ptr);
}
