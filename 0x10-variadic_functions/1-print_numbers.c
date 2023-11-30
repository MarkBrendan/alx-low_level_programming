#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Write a function that prints numbers, followed by a new line
 *
 * @separator: is the string to be printed between numbers
 * @n: the first number in the parameter
 *
 *Return: sum
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int lop;
	int sum = 0;

	va_list(lis);

	va_start(lis, n);

	for (lop = 0; lop < n; lop++)
	{
		if (lop != 0 && separator != NULL)
		{
			printf("%s", separator);
		}
			sum = va_arg(lis, int);
			printf("%d", sum);

	}
	printf("\n");


}
