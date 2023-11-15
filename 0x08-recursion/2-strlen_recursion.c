#include "main.h"

/**
 * _strlen_recursion - Write a function that returns the length of a string.
 *
 * @s: the stringvariable to print
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (s[len] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (len);

}
