#include "main.h"

/**
 * *_strcat - Write a function that concatenates two strings.
 *
 * @dest: a pointer
 * @src: a pointer
i *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}

	for (k = 0; k <= j; k++)
	{
		dest[i + 1] = src[k];
	}

	return (dest);
}
