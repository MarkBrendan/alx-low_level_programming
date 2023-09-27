#include "main.h"


/**
 * *_strpbrk - Write a function that searches
 * a string for any of a set of bytes.
 *
* @s: The input string you want to search.
* @accept: The set of characters to search for in the input string.
 *
 * Return: the length of the string
 */
char *_strpbrk(char *s, char *accept)
{
	int j, k;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
		if (s[j] == accept[k])
		{
			return (&s[j]);
		}
		}
	}
	return ('\0');
}
