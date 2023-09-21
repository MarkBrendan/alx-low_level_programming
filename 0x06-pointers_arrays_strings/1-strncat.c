#include "main.h"

/**
 * *_strncat - Write a function that concatenates two strings.
 *
 * @dest: a pointer
 * @src: a pointer
 * @n: number of element to concatenates
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
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

	for (k = 0; k < n; k++)
	{
		dest[i + k] = src[k];
	}

	return (dest);
}
