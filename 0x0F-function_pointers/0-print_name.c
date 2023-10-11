#include "function_pointers.h"

/**
 * print_name - Write a function that prints a name.
 *
 * @name: name if the person
 * @f: function to a pointer that return void
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
