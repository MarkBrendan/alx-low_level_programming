#include "main.h"

/**
 * *_strncpy - Write a function that copies a string
 *
 * @dest: a pointer
 * @src: a pointer
 * @n: number of element to concatenates
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
