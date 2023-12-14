#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Write a function that converts a binary
 * number to an unsigned int.
 *
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	unsigned int index = 0;

	if (b == NULL)
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		a = (a << 1) | (b[index] - '0');
		index++;
	}
	return (a);
}
