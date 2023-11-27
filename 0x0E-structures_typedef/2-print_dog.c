#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Write a function that prints a struct dog
 *
 * @d: the pointer that hold all members of the element
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->owner == NULL)
		printf("Owner: (nil)");
	if (d->age == 0)
		printf("Age: (nil)");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
