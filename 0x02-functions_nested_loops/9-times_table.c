#include "main.h"

/**
 * times_table - Write a function that prints the 9 times table.
 * starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (j == 0)
			{
				_putchar(k);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			/*	if (k < 10)*/
					/*_putchar(' ');*/
			}
			if (k <= 9)
			{

				_putchar('0' + (k % 10));
			}
			else
			{
				_putchar('0' + (k / 10));
				_putchar('0' + (k % 10));
			}
		}
		_putchar('\n');
	}
}
