#include "variadic_functions.h"

/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 *
 * @n: the first number in the parameter
 *
 *Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int lop;
	int sum = 0;

	va_list(lis);

	va_start(lis, n);

	for (lop = 0; lop < n; lop++)
	{
		sum += va_arg(lis, int);
	}
	return (sum);


}
