#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - Write a function that creates a new dog.
 *
 * @d: a pointer to a variable name struct dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: Return NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_t;

	ptr_t = malloc(sizeof(dog_t));
	if (ptr_t == NULL)
		return (NULL);

	(*ptr_t).name = name;
	(*ptr_t).age = age;
	(*ptr_t).owner = owner;

	return (ptr_t);
}
