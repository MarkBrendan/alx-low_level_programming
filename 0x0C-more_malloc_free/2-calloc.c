#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - Write a function that allocates memory for an array
 * using malloc.
 *
 * @nmemb: n element
 * @size: the data type
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *i;

	i = malloc(nmemb * size);

	if (i == NULL)
	{
		return (NULL);
	}
	return (i);

}
