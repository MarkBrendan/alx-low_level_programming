#include "function_pointers.h"

/**
 * int_index - Write a function that searches for an integer.
 *
 * @array: array of number
 * @action: function to a pointer that return void
 * @size: number of element
 *
 * Return: If no element matches, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
