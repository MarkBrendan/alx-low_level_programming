#include "main.h"


/**
 * *_strstr - Write a function that locates a substring
 *
* @haystack: The input string you want to search.
* @needle: the string to find the first occurance
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int j, k, i;

	for (j = 0; haystack[j] != '\0'; j++)
	{
		for (k = 0, i = j; needle[k] != '\0'; k++, i++)
		{
		if (needle[k] != haystack[i])
		{
			break;
		}
		}
		if (needle[k] == '\0')
		{
			return (&haystack[j]);
		}
	}
	return ('\0');
}
