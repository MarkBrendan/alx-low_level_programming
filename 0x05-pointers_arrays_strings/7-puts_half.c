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
	int j;
	int n;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		for (j = i / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	else if (i % 2)
	{
		for (n = (i - 1) / 2; n < i - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
