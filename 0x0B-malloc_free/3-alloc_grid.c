#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - Write a function that returns a pointer
 * to a 2 dimensional array of integers.
 *
 * @width: concatenate string to s1
 * @height: concatenate string to s2
 *
 *Return: returns NULL if str = 0
 */
int **alloc_grid(int width, int height)
{
	int k, **j, i, l;

	if  (width <= 0)
	{
		return (NULL);
	}

	if (height <= 0)
	{
		return (NULL);
	}

	j = (int **) malloc(height * sizeof(int *));

	if (j == NULL)
	{
		return (NULL);
	}
	free(j);

	for (k = 0; k < height; k++)
	{
		j[k] = (int *) malloc(width * sizeof(int));

			if (j[k] == NULL)
			{
				return (NULL);
			}
	}
	free(j[k]);

	for (i = 0; i < height; i++)
	{
		for (l = 0; l < width; l++)
		{
			j[i][l] = 0;
		}
	}
	return (j);
}
