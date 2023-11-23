#include "main.h"

/**
 * *array_range - Write a function that creates an array of integers.
 *
 * @min: minimum number
 * @max: maximum number
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *prt;
	int i = max - min + 1;
	int l;

	if (min > max)
		return (NULL);

	prt = malloc(sizeof(*prt) * i);

	if (prt == NULL)

		return (NULL);

	for (l = 0 ; l < i; l++)
	{
		prt[l] = min + l;
	}
	return (prt);


}
