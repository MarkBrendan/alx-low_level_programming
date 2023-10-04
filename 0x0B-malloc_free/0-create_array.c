#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Write a function that creates an array of chars
 * and initializes it with a specific char.
 *
 * @size:size of element to print
 * @c:character to be initializes
 *
 *Return: returns NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	j = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		j[i] = c;
	}
	return (j);
}
