#include "main.h"

/**
 * _pow_recursion - Write a function that returns the value of x
 * raised to the power of y.
 *
 * @x: the number that is raise
 * @y: the number that is raise by
 *
 * Return: 0
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}

}
