#include "main.h"
#include <ctype.h>

/**
 * *string_toupper - Write a function that changes all lowercase letters of
 * a string to uppercase.
 *
 * @a: first  string
 *
 * Return: a character
 */
char *string_toupper(char *a)
{
	int i = 0;
/*	int k = 0;*/

	while (a[i] != '\0')
	{
		a[i] = toupper(a[i]);
		i++;
	}
	return (a);
}
