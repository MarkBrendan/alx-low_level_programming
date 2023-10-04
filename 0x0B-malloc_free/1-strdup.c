#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Write a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 *
 * @str: a copy of the string
 *
 *Return: returns NULL if str = 0
 */
char *_strdup(char *str)
{
	int i = 0;
	char *j;
	int k;

	if (*str == NULL)
	{
		return (NULL)

	while (str[i] != '\0')
	{
		i++;
	}

	j = (char *) malloc((i + 1) * sizeof(char));

	if (j == NULL)
	{
		return (NULL);
	}

	for (k = 0; k <= i; k++)
	{
		j[k] = str[k];
	}
	return (j);
}
