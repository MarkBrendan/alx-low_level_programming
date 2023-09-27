#include "main.h"


/**
 * _strspn - Write a function that gets the length of a prefix substring
 *
* @s: The input string you want to search.
* @accept: The set of characters to search for in the input string.
 *
 * Return: the length of the string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j, k;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
		if (s[j] == accept[k])
		{
			i++;
			break;
		}
		}
		if (accept[k] == '\0')
		{
			break;
		}
	}
	return (i);

}
