#include "main.h"

/**
 * print_diagonal - Write a function that draws a diagonal line on the terminal
 *
 * @n: parameter to the function
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n == 0 && n < 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
