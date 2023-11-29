#include "function_pointers.h"

/**
 * int_index - Write a function that searches for an integer.
 *
 * @array: the array
 * @cmp: a function pointer
 * @size: the size to print
 *
 *Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
