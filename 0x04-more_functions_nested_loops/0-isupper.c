#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 *
 * @c: arguement of the function
 *
 * Return: 1 if c is uppercase returns 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
