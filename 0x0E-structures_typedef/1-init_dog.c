#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Write a function that initialize a variable of type struct dog
 *
 * @d: a pointer to a variable name struct dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
