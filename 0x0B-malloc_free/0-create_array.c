#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Write a function that creates an array of chars, and
 * initializes it with a specific char.
 *
 * @size: size of the character to initialise in the pointer
 * @c: the character to initialise in the pointer
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *prt;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);


	prt = malloc(sizeof(int) * size);

	if (prt == NULL)
		return (NULL);

	while (i < size)
	{
		prt[i] = c;

		i++;
	}
	return (prt);
}
