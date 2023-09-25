#include "main.h"

/**
 **_memset - Write a function that fills memory with a constant byte.
 *
 * @s: the address of memory to print
 * @b: constant to add
 * @n: the size of the memory to print
 *
 * Return: Returns a pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);

}
