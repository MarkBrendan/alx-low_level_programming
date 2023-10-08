#include "main.h"
#include <stdlib.h>

/**
 * *array_range - Write a function that creates an array of integers.
 *
 * @min:minimum value of the integer
 * @max: maximun value of the integer
 *
 * Return: void
 */

int *array_range(int min, int max)
{
	int *i;
	int size;
	int j;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	i = malloc(size * sizeof(int));

	if (i == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < size; j++)
		i[j] = min + j;
	return (i);

}
