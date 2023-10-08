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
	unsigned int j;
	char *temp;


	if (nmemb == 0 || size == 0)
		return (NULL);

	i = malloc(nmemb * size);

	if (i == NULL)
	{
		return (NULL);
	}

	temp = i;

	for (j = 0; j < nmemb * size; j++)
		temp[j] = 0;
	return (i);

}
