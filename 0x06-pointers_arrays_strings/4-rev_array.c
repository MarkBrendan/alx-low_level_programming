#include "main.h"

/**
 * reverse_array - Write a function that reverses the content of
 * an array of integers.
 *
 * @a: first  string
 * @n: element of string n
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int k;

	while (a[i] < a[j])
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;

		i++;
		j--;
	}
}
