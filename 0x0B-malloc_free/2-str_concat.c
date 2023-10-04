#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - Write a function that concatenates two strings
 *
 * @s1: concatenate string to s1
 * @s2: concatenate string to s2
 *
 *Return: returns NULL if str = 0
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	char *j;
	int k = 0;
	int l;

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[k] != '\0')
	{
		k++;
	}

	j = (char *) malloc((i + k + 1) * sizeof(char));

	if (j == 0)
	{
		return ('\0');
	}

	for (l = 0; l <= i; l++)
	{
		j[l] = s1[l];
	}

	for (l = 0; l <= k; l++)
	{
		j[i + l] = s2[l];
	}
	return (j);
}
