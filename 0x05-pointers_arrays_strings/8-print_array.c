#include "main.h"
#include <stdio.h>
/**
 * print_array - Write a function that prints n
 * elements of an array of integers, followed by a new line.
 *
 * @a: parameter to a pointer
 * @n: parameter to the function
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (j > 0)
		{
			printf(", ");
		}
		printf("%d", a[j]);
	}
	printf("\n");
}
