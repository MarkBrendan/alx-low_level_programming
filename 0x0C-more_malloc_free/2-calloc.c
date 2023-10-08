#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - Write a function that allocates memory for an array
 * using malloc.
 *
 * @nmemb: size of array
 * @size: size of each element in the array
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
	free(i);
	return (i);

}
