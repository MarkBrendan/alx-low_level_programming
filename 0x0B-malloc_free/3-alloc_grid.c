#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - Write a function that returns a pointer to a 2 dimensional
 * array of integers.
 *
 * @height: height of the array
 * @width: width of the array
 *
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **prt;
	int i, j, k, l;

	if (width == 0 && height == 0)
		return (NULL);

	prt = malloc(sizeof(int *) * height);


	if (prt == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		prt[i] = malloc(sizeof(int) * width);

		if (prt[i] == NULL)
		{
			for (l = 0; l < i; l++)
			{
				free(prt[l]);
			}
			free(prt);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			prt[j][k] = 0;
		}

	}
	return (prt);

}
