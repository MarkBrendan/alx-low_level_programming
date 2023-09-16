#include "main.h"

/**
 * print_line - Write a function that draws a straight line in the terminal.
 *
 * @n: parameter to the function
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i == 0 && i < 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
