#include "main.h"

/**
 * puts2 - Write a function that prints every other character of a string.
 * starting with the first character, followed by a new line.
 *
 * @str: parameter to a pointer
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(*str);
		str += 1;
	}
	_putchar('\n');
}
