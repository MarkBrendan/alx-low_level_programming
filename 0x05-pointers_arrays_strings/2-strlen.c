#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string.
 *
 * @s: parameter to a pointer
 *
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
		/*_putchar(i);*/
	}
	return i;
}
