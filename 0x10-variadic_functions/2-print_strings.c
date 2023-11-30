#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Write a function that prints strings, followed by a new line
 *
 * @separator: is the string to be printed between numbers
 * @n: number of strings passed to the function
 *
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int lop;
	char  *sum;

	va_list(lis);

	va_start(lis, n);

	for (lop = 0; lop < n; lop++)
	{
		if (lop != 0 && separator != NULL)
		{
			printf("%s", separator);
		}
			sum = va_arg(lis, char *);

			if (sum == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", sum);
			}

	}
	printf("\n");


}
