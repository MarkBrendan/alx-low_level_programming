#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Write a function that executes a function
 * given as a parameter on each element of an array.
 *
 * @array: the array
 * @action: a function pointer
 * @size: the size to print
 *
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
