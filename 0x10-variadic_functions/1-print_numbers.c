#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Write a function that prints numbers
 * followed by a new line.
 *
 * @n: the amount of number
 * @separator: the string to be printed between numbers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int num;
	va_list l;

	va_start(l, n);

	for (num = 0; num < n; num++)
	{
		if (num != 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(l, int));
	}
	printf("\n");

	va_end(l);

}
