#include "main.h"

/**
 * factorial - Write a function that returns the factorial of a given number.
 *
 * @n: number of element to print
 *
 * Return: 0
 */
int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

}
