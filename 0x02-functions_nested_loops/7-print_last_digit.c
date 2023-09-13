#include "main.h"

/**
 * print_last_digit - Write a function
 * that computes the absolute value of an integer
 *
 * @n: to output an integer
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int last = 0;

	if (n < 0)
	{
		last = -(n % 10);
	}
	else
	{
		last = n % 10;
	}
	_putchar(last + '0');
	return (last);

}
