#include "main.h"

/**
 * *_memcpy - Write a function that copies memory area.
 *
 * @dest: the address of memory to print
 * @src: constant to add
 * @n: the size of the memory to print
 *
 * Return: Returns a pointer to the memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}
