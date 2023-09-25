#include "main.h"

/**
 * *_memset - Write a function that fills memory with a constant byte.
 *
 * @s:
 * @b:
 * @n:
 *
 * return: void
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (s);

}
