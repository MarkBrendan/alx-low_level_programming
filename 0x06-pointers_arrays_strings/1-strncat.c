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
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
