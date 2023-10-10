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
	int l;
	int n = 0;
	int o = 0;

	ptr_t = malloc(sizeof(dog_t));
	if (ptr_t == NULL)
		return (NULL);

	while (name[n] != '\0' && owner[o] != '\0')
	{
		n++;
		o++;
	}
/*	while (*owner != '\0')
		owner++;
*/
	ptr_t->name = malloc((n + 1) * sizeof(char));
	
	if (ptr_t->name == NULL)
		return (NULL);

	ptr_t->owner = malloc((o + 1) * sizeof(char));

	if (ptr_t->owner == NULL)
		return (NULL);

	ptr_t->age = age;

	for (l = 0; l < n; l++)
		ptr_t->name[l] = name[l];

	for (l = 0; l < o; l++)
		ptr_t->owner[l] = owner[l];

	return (ptr_t);
}
