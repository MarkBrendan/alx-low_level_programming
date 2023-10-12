#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Write a function that prints strings
 * followed by a new line.
 *
 * @n: the amount of number
 * @separator: the string to be printed between numbers
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int num;
	const char *current_string;
	va_list l;

	va_start(l, n);

	for (num = 0; num < n; num++)
	{
		current_string = va_arg(l, const char *);

	if (current_string == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", current_string);
	}
	if (num < n - 1 && separator != NULL)
	{
		printf("%s", separator);
	}
	}
	printf("\n");
	va_end(l);

}
