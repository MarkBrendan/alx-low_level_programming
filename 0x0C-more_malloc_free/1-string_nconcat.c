#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - Write a function that concatenates two strings.
 *
 * @n: the number of memory to allocate
 * @s1: the string to concatenate to
 * @s2: the string to concatenate from
 *
 * Return: void
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *i;
	unsigned int j = 0;
	unsigned int k = 0;
	unsigned int l;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[j] != '\0' && s2[k] != '\0')
	{
		j++;
		k++;
	}

	i = malloc((j + n + 1) * sizeof(char));

	if (i == NULL)
	{
		return (NULL);
	}

	for (l = 0; l < j; l++)
	{
		i[l] = s1[l];
	}

	for (l = 0; l < n; l++)
	{
		i[l + j] = s2[l];
	}
	/*i[j + n] = '\0';*/
	return (i);

}
