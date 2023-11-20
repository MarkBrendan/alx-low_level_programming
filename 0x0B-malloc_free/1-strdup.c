#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Write a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 *
 * @str: a copy of the string given as a parameter.
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *prt;
	int i = 0;
	int k;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	prt = malloc(sizeof(*prt) * i + 1);

	if (prt == NULL)
		return (NULL);

	for (k = 0; str[k] != '\0'; k++)
	{
		prt[k] = str[k];
	}

	return (prt);
}
