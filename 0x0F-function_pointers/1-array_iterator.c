#include "function_pointers.h"

/**
 * array_iterator - Write a function that executes a function given
 * as a parameter on each element of an array.
 *
 * @array: array of number
 * @action: function to a pointer that return void
 * @size: number of element
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
