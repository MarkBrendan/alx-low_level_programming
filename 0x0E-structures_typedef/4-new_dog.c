#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * *new_dog - Write a function that creates a new dog.
 *
 * @name: first element
 * @age: second element
 * @owner: third element
 *
 * Return: a pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *prt;

	if (name == NULL || owner == NULL)
		return (NULL);

	prt = malloc(sizeof(dog_t));

	if (prt == NULL)
		return (NULL);

	prt->name = strdup(name);
	if (prt->name == NULL)
	{
		return (NULL);
	}

	prt->owner = strdup(owner);
	if (prt->owner == NULL)
	{
		return (NULL);
	}

	prt->age = age;

	return (prt);
}
