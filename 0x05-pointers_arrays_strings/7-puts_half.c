#include "main.h"

/**
 * puts_half - Write a function that prints half of a string.
 * followed by a new line.
 *
 * @str: parameter to a pointer
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	j = i / 2;
	while (str[j] != '\0' && str[j] != 4)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
