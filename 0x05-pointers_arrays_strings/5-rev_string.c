#include "main.h"

/**
 * rev_string - Write a function that reverses a string..
 *
 * @s: parameter to a pointer
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char k;

	while (s[j] != '\0')
	{
		j++;
	}
	j--;

	while (i < j)
	{
		k = s[i];
		s[i] = s[j];
		s[j] = k;

		i++;
		j--;
	}
}
