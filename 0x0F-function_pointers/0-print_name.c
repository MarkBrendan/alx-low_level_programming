#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Write a function that prints a name
 *
 * @name: name to be printed
 *
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
	printf("%s", name);
}
