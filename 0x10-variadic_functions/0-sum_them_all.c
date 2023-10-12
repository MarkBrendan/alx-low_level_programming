#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 *
 * @n: the amount of number
 *
 * Return: return the sum (result)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int num;
	va_list l;
	int result = 0;

	if (n == 0)
		return (0);

	va_start(l, n);

	for (num = 0; num < n; num++)
		result = result + va_arg(l, int);

	va_end(l);
	return (result);

}
