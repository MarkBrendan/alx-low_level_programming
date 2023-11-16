#include "main.h"

/**
 * _sqrt_recursion - Write a function that returns the natural square
 * root of a number.
 *
 * @n: the natural square root
 *
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	int guss = 1;

	return (sqrt_help(n, guss));
}

/**
 * sqrt_help - it helps compare the number to the natural square root
 *
 * @n: the natural square root
 * @guss: the number that is used to compare
 *
 * Return: 0
 */
int sqrt_help(int n, int guss)
{

	if (n == guss * guss)
	{
		return (guss);
	}
	else if (guss < n)
	{
		return (sqrt_help(n, guss + 1));
	}
	else
	{
		return (-1);
	}
}
