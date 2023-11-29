#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - Write a function that prints a name
 *
 * @name: name to be printed
 * @f: a function pointer
 *
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}
